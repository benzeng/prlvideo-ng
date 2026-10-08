
undefined8 FUN_100cb66e0(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_100bf2780(9,0x1f,"ui_openssl.c",0x1de);
  DAT_102318480 = 1;
  DAT_102318488 = _fopen("/dev/tty","r");
  if (DAT_102318488 == (FILE *)0x0) {
    DAT_102318488 = *(FILE **)PTR____stdinp_1021e1850;
  }
  DAT_102318490 = _fopen("/dev/tty","w");
  if (DAT_102318490 == (FILE *)0x0) {
    DAT_102318490 = *(FILE **)PTR____stderrp_1021e1848;
  }
  iVar1 = _fileno(DAT_102318488);
  iVar1 = _tcgetattr(iVar1,(termios *)&DAT_102318498);
  if (iVar1 == -1) {
    piVar2 = ___error();
    if ((*piVar2 != 0x19) && (piVar2 = ___error(), *piVar2 != 0x16)) {
      return 0;
    }
    DAT_102318480 = 0;
  }
  return 1;
}

