
int FUN_1002243a4(long param_1,undefined8 param_2)

{
  int iVar1;
  xmlGenericErrorFunc pxVar2;
  undefined8 uVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  
  if (*(int *)(param_1 + 0xb4) < 1) {
    *(undefined4 *)(param_1 + 0xb4) = 10;
    uVar3 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0xb4) * 8);
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    if (*(long *)(param_1 + 0xb8) == 0) {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"xmlMalloc failed !\n");
      return 0;
    }
  }
  if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0xb0)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) * 2;
    uVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0xb8),(long)*(int *)(param_1 + 0xb4) * 8);
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    if (*(long *)(param_1 + 0xb8) == 0) {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"xmlRealloc failed !\n");
      return 0;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar1 + 1;
  return iVar1;
}

