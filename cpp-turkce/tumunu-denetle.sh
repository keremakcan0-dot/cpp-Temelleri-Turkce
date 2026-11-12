#!/usr/bin/env bash
set -u

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

compiled=0
tested=0
failed=0
index=0

while IFS= read -r -d '' source; do
    index=$((index + 1))
    relative="${source#"$ROOT"/}"
    executable="$TMP_DIR/program-$index"

    echo "[DERLENİYOR] $relative"
    if ! g++ -std=c++17 -Wall -Wextra -Wpedantic "$source" -o "$executable"; then
        echo "[ERROR] Derlenemedi: $relative"
        failed=$((failed + 1))
        continue
    fi
    compiled=$((compiled + 1))

    # Program klavyeden girdi istemiyorsa assert testlerini çalıştır.
    if grep -q '#include <cassert>' "$source" && ! grep -Eq 'cin[[:space:]]*>>' "$source"; then
        echo "[TEST EDİLİYOR] $relative"
        if "$executable"; then
            tested=$((tested + 1))
        else
            echo "[ERROR] Test başarısız: $relative"
            failed=$((failed + 1))
        fi
    fi
done < <(find "$ROOT" -type f -name '*.cpp' -print0)

echo
echo "Derlenen: $compiled"
echo "Çalıştırılan test: $tested"
echo "Hata sayısı: $failed"

if [ "$failed" -ne 0 ]; then
    exit 1
fi
