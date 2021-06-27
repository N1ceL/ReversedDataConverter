

# ReversedDataConverter
#### Reversed Data Converter - just program to calculate and convert hex, int numbers, flags, bytes, patterns and etc. Useful if you work with program memory/reverse engineering.
#### Showcase video - https://youtu.be/JSJYl10CKME
#### Download binary - https://github.com/N1ceL/ReversedDataConverter/releases/

# Description

[int/hex - calculator/converter]
+ Calculator can work with int (x10) and hex (x16) values [but all values must be in the same system].
+ Calculator supports '+', '-', '/', '*', '^' (pow and root if value 0.5), '(', ')', '|' (abs), '.' and ',' (float numbers).
+ This is not only calculator, it converts int (x10) to hex (x16) and hex (x16) to int (x10). Calculator outputs 6 values [unsigned int x10, signed int x10, signed float x10, unsigned int x16, signed int x16, signed float x16]. 
+ Values can be with 32 bits or 64 bits, depends on the setting.
+ There is also a second calculator, it is same but it can automatically understand system [int or hex].
+ This calculator is also a converter, it outputs values in hex and int.
+ Bits settings: allows to configure number of bytes [4 (range 0xFFFFFFFF) or 8 (range 0xFFFFFFFFFFFFFFFF)].
+ Deletes bad characters.

[bit - calculator/converter]
+ Converter can convert an absolute number to flags and flags to absolute number.
+ Converter can work with int and hex values.
+ Converter supports '<<', '~', '|', '(', ')'. Also it can work with 2 style of flags [(1 << .) and 0x.].
+ Style of bits settings: allows to configure style of bits [(1 << .) or 0x.].
+ Converter automatically detects the number of bytes in flags or value [4 or 8].
+ Deletes bad characters.
+ Also this converter still has the calculator system.

[byte - calculator/converter]
+ Converter can convert number to bytes (how it looks in memory) and bytes to number. Also converter can convert the wrong type of number to bytes, and then convert the bytes to all other types.
+ Converter supports unsigned int32, signed int32, signed float32, unsigned int64, signed int64, signed float64.
+ Converter can work with int and hex values (but it will automatically convert the number to x10).
+ Deletes bad characters.
+ Also this converter still has the calculator system.

[register converter]
+ Just converts text to uppercase and lowercase.
+ But '0x' and '\x' it will convert to lowercase in any case.

[pattern converter]
+ Can convert ida pattern to signature, and signature to ida pattern.
+ Can convert signature to ida pattern with mask and without it.
+ If the mask is missing, it will automatically generate it.
+ On ida pattern to signature convert will create the mask too.
+ If pattern/signature looks broken (extra characters like '??', '  ' and etc, missing some characters like '0x' and etc, lowercase/uppercase) it will try to fix it.
+ Shows count of bytes.
+ Deletes bad characters.

[mini notepad]
+ Just a place for temporary data.
+ The data is stored in the appdata after closing the program. 

[settings]
+ Settings, hex style: allows to configure uppercase/lowercase.
+ Int/hex calculator/converter bits: allows to configure number of bytes [4 or 8].
+ Bit calculator/convertor bits style: allows to configure style of bits [(1 << .) or 0x.].
+ Settings is stored in the appdata. 


