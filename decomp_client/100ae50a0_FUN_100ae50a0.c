
void * FUN_100ae50a0(long *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  if (0x13 < param_2) {
    piVar2 = *(int **)(*param_1 + 0x10);
    iVar1 = *piVar2;
    pvVar3 = (void *)0x0;
    if (iVar1 - 2U < 2) {
      pvVar3 = operator_new(0x20);
      FUN_100ae55b0(pvVar3,param_1,param_2,*piVar2);
    }
    else if (iVar1 == 1) {
      pvVar3 = operator_new(0x20);
      FUN_100ae52b0(pvVar3,param_1,param_2);
    }
  }
  return pvVar3;
}

