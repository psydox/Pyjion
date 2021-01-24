#ifndef PYJION_KNOWNMETHODS_H
#define PYJION_KNOWNMETHODS_H

// Written for 3.9.1
unordered_map<const char*, AbstractValueKind> builtinReturnTypes = {
        {"abs",         AVK_Any},
        {"all",         AVK_Bool},
        {"any",         AVK_Bool},
        {"ascii",       AVK_String},
        {"bin",         AVK_String},
        {"breakpoint",  AVK_None},
        {"bytearray",   AVK_Bytearray},
        {"bytes",       AVK_Bytes},
        {"callable",    AVK_Function},
        {"classmethod", AVK_Any},
        {"compile",     AVK_Code},
        {"complex",     AVK_Complex},
        {"delattr",     AVK_None},
        {"dict",        AVK_Dict},
        {"dir",         AVK_List},
        {"enumerate",   AVK_Enumerate},
        {"eval",        AVK_Any},
        {"exec",        AVK_Any},
        {"filter",      AVK_Iterable},
        {"float",       AVK_Float},
        {"format",      AVK_String},
        {"frozenset",   AVK_Frozenset},
        {"getattr",     AVK_Any},
        {"globals",     AVK_Dict},
        {"hasattr",     AVK_Bool},
        {"hash",        AVK_Integer},
        {"help",        AVK_Any},
        {"hex",         AVK_String},
        {"id",          AVK_Integer},
        {"input",       AVK_String},
        {"int",         AVK_Integer},
        {"isinstance",  AVK_Bool},
        {"issubclass",  AVK_Bool},
        {"iter",        AVK_Iterable},
        {"len",         AVK_Integer},
        {"list",        AVK_List},
        {"locals",      AVK_Dict},
        {"map",         AVK_Iterable},
        {"max",         AVK_Any},
        {"memoryview",  AVK_Any},
        {"min",         AVK_Any},
        {"next",        AVK_Any},
        {"oct",         AVK_String},
        {"open",        AVK_File},
        {"ord",         AVK_String},
        {"pow",         AVK_Any},
        {"print",       AVK_None},
        {"range",       AVK_Iterable},
        {"repr",        AVK_String},
        {"reversed",    AVK_Any},
        {"round",       AVK_Any},
        {"set",         AVK_Set},
        {"setattr",     AVK_None},
        {"slice",       AVK_Slice},
        {"sorted",      AVK_Any},
        {"str",         AVK_String},
        {"sum",         AVK_Any},
        {"super",       AVK_Any},
        {"tuple",       AVK_Tuple},
        {"type",        AVK_Type},
        {"vars",        AVK_Dict},
        {"zip",         AVK_Iterable},
        {"__import__",  AVK_Module},
};

unordered_map<const char*, AbstractValueKind> listMethodReturnTypes = {
        {"append", AVK_None},
        {"extend", AVK_None},
        {"insert", AVK_None},
        {"remove", AVK_None},
        {"pop", AVK_Any},
        {"clear", AVK_None},
        {"index", AVK_Integer},
        {"count", AVK_Integer},
        {"sort", AVK_None},
        {"reverse", AVK_None},
        {"copy", AVK_List},
};

unordered_map<const char*, AbstractValueKind> stringMethodReturnTypes = {
        {"capitalize", AVK_String},
        {"casefold", AVK_String},
        {"center", AVK_String},
        {"count", AVK_Integer},
        {"encode", AVK_Bytes},
        {"endswith", AVK_Bool},
        {"expandtabs", AVK_String},
        {"format", AVK_String},
        {"format_map", AVK_String},
        {"isalnum", AVK_Bool},
        {"isalpha", AVK_Bool},
        {"isascii", AVK_Bool},
        {"isdecimal", AVK_Bool},
        {"isdigit", AVK_Bool},
        {"isidentifier", AVK_Bool},
        {"islower", AVK_Bool},
        {"isnumeric", AVK_Bool},
        {"isprintable", AVK_Bool},
        {"isspace", AVK_Bool},
        {"istitle", AVK_Bool},
        {"isupper", AVK_Bool},
        {"join", AVK_String},
        {"ljust", AVK_String},
        {"lower", AVK_String},
        {"partition", AVK_String},
        {"removeprefix", AVK_String},
        {"removesuffix", AVK_String},
        {"replace", AVK_String},
        {"rfind", AVK_Integer},
        {"rindex", AVK_Integer},
        {"rjust", AVK_String},
        {"rpartition", AVK_Tuple},
        {"rsplit", AVK_List},
        {"rstrip", AVK_String},
        {"split", AVK_List},
        {"splitlines", AVK_List},
        {"startswith", AVK_Bool},
        {"strip", AVK_String},
        {"swapcase", AVK_String},
        {"title", AVK_String},
        {"translate", AVK_String},
        {"upper", AVK_String},
        {"zfill", AVK_String},
};

unordered_map<const char*, AbstractValueKind> bytesMethodReturnTypes = {
        {"hex", AVK_String},
        {"fromhex", AVK_Bytes},
        {"capitalize", AVK_Bytes},
        {"casefold", AVK_Bytes},
        {"center", AVK_Bytes},
        {"count", AVK_Integer},
        {"decode", AVK_String},
        {"endswith", AVK_Bool},
        {"expandtabs", AVK_Bytes},
        {"format", AVK_Bytes},
        {"format_map", AVK_Bytes},
        {"isalnum", AVK_Bool},
        {"isalpha", AVK_Bool},
        {"isascii", AVK_Bool},
        {"isdecimal", AVK_Bool},
        {"isdigit", AVK_Bool},
        {"isidentifier", AVK_Bool},
        {"islower", AVK_Bool},
        {"isnumeric", AVK_Bool},
        {"isprintable", AVK_Bool},
        {"isspace", AVK_Bool},
        {"istitle", AVK_Bool},
        {"isupper", AVK_Bool},
        {"join", AVK_Bytes},
        {"ljust", AVK_Bytes},
        {"lower", AVK_Bytes},
        {"partition", AVK_Bytes},
        {"removeprefix", AVK_Bytes},
        {"removesuffix", AVK_Bytes},
        {"replace", AVK_Bytes},
        {"rfind", AVK_Integer},
        {"rindex", AVK_Integer},
        {"rjust", AVK_Bytes},
        {"rpartition", AVK_Tuple},
        {"rsplit", AVK_List},
        {"rstrip", AVK_Bytes},
        {"split", AVK_List},
        {"splitlines", AVK_List},
        {"startswith", AVK_Bool},
        {"strip", AVK_Bytes},
        {"swapcase", AVK_Bytes},
        {"title", AVK_Bytes},
        {"translate", AVK_Bytes},
        {"upper", AVK_Bytes},
        {"zfill", AVK_Bytes},
};

unordered_map<const char*, AbstractValueKind> bytearrayMethodReturnTypes = {
        {"hex", AVK_String},
        {"fromhex", AVK_Bytearray},
        {"capitalize", AVK_Bytearray},
        {"casefold", AVK_Bytearray},
        {"center", AVK_Bytearray},
        {"count", AVK_Integer},
        {"decode", AVK_String},
        {"endswith", AVK_Bool},
        {"expandtabs", AVK_Bytearray},
        {"format", AVK_Bytearray},
        {"format_map", AVK_Bytearray},
        {"isalnum", AVK_Bool},
        {"isalpha", AVK_Bool},
        {"isascii", AVK_Bool},
        {"isdecimal", AVK_Bool},
        {"isdigit", AVK_Bool},
        {"isidentifier", AVK_Bool},
        {"islower", AVK_Bool},
        {"isnumeric", AVK_Bool},
        {"isprintable", AVK_Bool},
        {"isspace", AVK_Bool},
        {"istitle", AVK_Bool},
        {"isupper", AVK_Bool},
        {"join", AVK_Bytearray},
        {"ljust", AVK_Bytearray},
        {"lower", AVK_Bytearray},
        {"partition", AVK_Bytearray},
        {"removeprefix", AVK_Bytearray},
        {"removesuffix", AVK_Bytearray},
        {"replace", AVK_Bytearray},
        {"rfind", AVK_Integer},
        {"rindex", AVK_Integer},
        {"rjust", AVK_Bytearray},
        {"rpartition", AVK_Tuple},
        {"rsplit", AVK_List},
        {"rstrip", AVK_Bytearray},
        {"split", AVK_List},
        {"splitlines", AVK_List},
        {"startswith", AVK_Bool},
        {"strip", AVK_Bytearray},
        {"swapcase", AVK_Bytearray},
        {"title", AVK_Bytearray},
        {"translate", AVK_Bytearray},
        {"upper", AVK_Bytearray},
        {"zfill", AVK_Bytearray},
};


unordered_map<const char*, AbstractValueKind> dictMethodReturnTypes = {
        {"clear", AVK_None},
        {"copy", AVK_Dict},
        {"fromkeys", AVK_Dict},
        {"get", AVK_Any},
        {"items", AVK_Any}, // Could create specialised type.
        {"keys", AVK_Any}, // likewise
        {"values", AVK_Any}, // and again
        {"pop", AVK_Any},
        {"popitem", AVK_Any},
        {"reversed", AVK_Iterable},
        {"setdefault", AVK_None},
        {"update", AVK_None},
};

unordered_map<const char*, AbstractValueKind> intMethodReturnTypes = {
        {"bit_length", AVK_Integer},
        {"to_bytes", AVK_Bytes},
        {"from_bytes", AVK_Integer},
        {"as_integer_ratio", AVK_Tuple},
};

#endif // PYJION_KNOWNMETHODS_H
