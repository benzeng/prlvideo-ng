
long FUN_100b9c260(long *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = param_1;
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == param_1) {
      return 0;
    }
    iVar1 = _strcmp((char *)plVar2[2],param_2);
  } while (iVar1 != 0);
  return (long)plVar2;
}

