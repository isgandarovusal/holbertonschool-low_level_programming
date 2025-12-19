#!/bin/bash

echo "=== VERIFICATION SCRIPT ==="
echo ""

# Clean
rm -f mynameis mynewnameis testprogram

echo "1. Compilation test:"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis 2>&1
if [ $? -eq 0 ]; then
    echo "   ✅ Compilation successful"
else
    echo "   ❌ Compilation failed"
    exit 1
fi

echo ""
echo "2. Test 1 - Original name:"
OUTPUT1=$(./mynameis)
echo "   Output: $OUTPUT1"
if [ "$OUTPUT1" = "./mynameis" ]; then
    echo "   ✅ Correct"
else
    echo "   ❌ Incorrect"
fi

echo ""
echo "3. Test 2 - Renamed (no recompile):"
mv mynameis mynewnameis
OUTPUT2=$(./mynewnameis)
echo "   Output: $OUTPUT2"
if [ "$OUTPUT2" = "./mynewnameis" ]; then
    echo "   ✅ Correct"
else
    echo "   ❌ Incorrect"
fi

echo ""
echo "4. Return value check:"
./mynewnameis > /dev/null
echo "   Return code: $? (should be 0)"

echo ""
echo "5. Betty style (if installed):"
which betty-style > /dev/null 2>&1
if [ $? -eq 0 ]; then
    betty-style 0-whatsmyname.c | head -5
    betty-doc 0-whatsmyname.c | head -5
else
    echo "   Betty not installed - skipping"
fi

echo ""
echo "=== VERIFICATION COMPLETE ==="
