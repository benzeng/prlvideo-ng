
undefined8 FUN_100713ef0(long param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 8);
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)(param_1 + 8)) {
      return 0;
    }
    iVar1 = _strcmp(param_2,(char *)plVar2[2]);
  } while (iVar1 != 0);
  return 0;
}

