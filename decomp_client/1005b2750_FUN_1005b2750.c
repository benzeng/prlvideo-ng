
void FUN_1005b2750(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 == 9) {
    FUN_100df99c0("","prl_client_app",0,"Cancel third party VM converting");
    if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
       (*(long *)(param_1 + 0x70) != 0)) {
      cVar1 = CAbstractTask::isFinished();
      if (cVar1 == '\0') {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x70);
        }
        FUN_100202f80(uVar3);
        return;
      }
    }
  }
  else if ((((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
           (*(long *)(param_1 + 0x40) == 0)) &&
          (((*(long *)(param_1 + 0x28) == 0 || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
           (*(long *)(param_1 + 0x30) == 0)))) {
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar3,0);
    FUN_10083fee0(param_1,0);
    return;
  }
  return;
}

