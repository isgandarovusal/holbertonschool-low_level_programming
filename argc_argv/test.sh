#!/bin/bash

echo "=== COMPLETE TEST ==="
echo ""

# Clean previous files
rm -f 0-whatsmyname_0 anothername "AreYouSure?"

echo "1. Compiling..."
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o 0-whatsmyname_0
if [ $? -eq 0 ]; then
    echo "   ✓ Compilation successful"
else
    echo "   ✗ Compilation failed"
    exit 1
fi

echo ""
echo "2. Test case 1: ./0-whatsmyname_0"
echo "   Output: $(./0-whatsmyname_0)"
echo "   Return code: $?"

echo ""
echo "3. Test case 2: Rename to 'anothername'"
mv 0-whatsmyname_0 anothername
echo "   Output: $(./anothername)"
echo "   Return code: $?"

echo ""
echo "4. Test case 3: Rename to 'AreYouSure?'"
mv anothername "AreYouSure?"
echo "   Output: $(./"AreYouSure?")"
echo "   Return code: $?"

echo ""
echo "5. Betty checks:"
echo "   Style:"
betty-style 0-whatsmyname.c 2>&1 | grep -E "(WARNING|ERROR|checked)" || echo "   No issues found"
echo "   Documentation:"
betty-doc 0-whatsmyname.c 2>&1 | grep -E "(WARNING|ERROR|checked)" || echo "   No issues found"
