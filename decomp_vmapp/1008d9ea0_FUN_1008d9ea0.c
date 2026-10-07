
undefined8 FUN_1008d9ea0(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_10081d010(9,0x1f,"ui_openssl.c",0x1de);
  DAT_1011c2a40 = 1;
  DAT_1011c2a48 = _fopen("/dev/tty","r");
  if (DAT_1011c2a48 == (FILE *)0x0) {
    DAT_1011c2a48 = *(FILE **)PTR____stdinp_100ba2330;
  }
  DAT_1011c2a50 = _fopen("/dev/tty","w");
  if (DAT_1011c2a50 == (FILE *)0x0) {
    DAT_1011c2a50 = *(FILE **)PTR____stderrp_100ba2328;
  }
  iVar1 = _fileno(DAT_1011c2a48);
  iVar1 = _tcgetattr(iVar1,(termios *)&DAT_1011c2a58);
  if (iVar1 == -1) {
    piVar2 = ___error();
    if ((*piVar2 != 0x19) && (piVar2 = ___error(), *piVar2 != 0x16)) {
      return 0;
    }
    DAT_1011c2a40 = 0;
  }
  return 1;
}

