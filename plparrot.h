
/*
 * DO NOT EDIT - THIS FILE IS AUTOGENERATED - CHANGES WILL BE LOST
 * Written by ./bin/text2macro.pl from plparrot_secure.pir
 */
#define PLPARROT_SECURE \
".sub _ :main :load :anon\n" \
"    .local pmc p6meta, interp, classes, classid\n" \
"    p6meta = get_root_global [\"parrot\"], \"P6metaclass\"\n" \
"    p6meta.'new_class'('PLParrot')\n" \
"\n" \
"    interp = getinterp\n" \
"    classes = interp[0]\n" \
"    classid = classes['PLParrot']\n" \
"\n" \
"    # Replace these classes with our PLParrot class\n" \
"    set classes['FileHandle'], classid\n" \
"    set classes['File'], classid\n" \
".end\n" \
"\n" \
".namespace [\"PLParrot\"]\n" \
".sub open\n" \
"    .param pmc stuff :slurpy\n" \
"    # die \"Attempt to open \"\n" \
"    .return(42)\n" \
".end\n" \
"\n" \
".sub open :method\n" \
"    .param string file\n" \
"    .param string mode\n" \
"    # die \"Attempt to open \"\n" \
"    .return(42)\n" \
".end\n" \
"\n" \
".sub copy :method\n" \
"    .param pmc from\n" \
"    .param pmc to\n" \
"    print \"Attempt to copy file \"\n" \
"    print from\n" \
"    print \"=\"\n" \
"    say to\n" \
".end\n" \
"\n" \
".sub rename :method\n" \
"    .param pmc from\n" \
"    .param pmc to\n" \
"    print \"Attempt to rename file \"\n" \
"    print from\n" \
"    print \" to \"\n" \
"    say to\n" \
".end\n" \
"\n" \
""

/* end */
