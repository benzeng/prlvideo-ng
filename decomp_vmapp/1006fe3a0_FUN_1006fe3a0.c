
void FUN_1006fe3a0(long param_1)

{
  char *pcVar1;
  
  _puts("\nPrinting tar header:");
  _printf("  name     = \"%.100s\"\n",param_1 + 0x20);
  _printf("  mode     = \"%.8s\"\n",param_1 + 0x84);
  _printf("  uid      = \"%.8s\"\n",param_1 + 0x8c);
  _printf("  gid      = \"%.8s\"\n",param_1 + 0x94);
  _printf("  size     = \"%.12s\"\n",param_1 + 0x9c);
  _printf("  mtime    = \"%.12s\"\n",param_1 + 0xa8);
  _printf("  chksum   = \"%.8s\"\n",param_1 + 0xb4);
  _printf("  typeflag = \'%c\'\n",(ulong)(uint)(int)*(char *)(param_1 + 0xbc));
  _printf("  linkname = \"%.100s\"\n",param_1 + 0xbd);
  _printf("  magic    = \"%.6s\"\n",param_1 + 0x121);
  _printf("  version[0] = \'%c\',version[1] = \'%c\'\n",(ulong)(uint)(int)*(char *)(param_1 + 0x127)
          ,(ulong)(uint)(int)*(char *)(param_1 + 0x128));
  _printf("  uname    = \"%.32s\"\n",param_1 + 0x129);
  _printf("  gname    = \"%.32s\"\n",param_1 + 0x149);
  _printf("  devmajor = \"%.8s\"\n",param_1 + 0x169);
  _printf("  devminor = \"%.8s\"\n",param_1 + 0x171);
  _printf("  prefix   = \"%.155s\"\n",param_1 + 0x179);
  _printf("  padding  = \"%.12s\"\n",param_1 + 0x214);
  pcVar1 = *(char **)(param_1 + 0x220);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "[NULL]";
  }
  _printf("  gnu_longname = \"%s\"\n",pcVar1);
  pcVar1 = *(char **)(param_1 + 0x228);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "[NULL]";
  }
  _printf("  gnu_longlink = \"%s\"\n",pcVar1);
  return;
}

