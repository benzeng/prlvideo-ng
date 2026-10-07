
long FUN_10071dde0(long *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = param_1;
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == param_1) {
      return 0;
    }
    iVar1 = _strncmp((char *)((long)plVar2 + 0x184),param_2,0x50);
  } while (iVar1 != 0);
  return (long)plVar2;
}

