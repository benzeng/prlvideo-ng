
long FUN_100719920(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = -1;
  plVar2 = param_1;
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == param_1) {
      return 0;
    }
    iVar1 = _strcmp((char *)plVar2[2],param_2);
  } while ((iVar1 != 0) || (iVar3 = iVar3 + 1, iVar3 != param_3));
  return (long)plVar2;
}

