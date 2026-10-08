
void FUN_1005b1bf0(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_b0;
  undefined1 local_a8 [88];
  undefined1 local_50 [47];
  undefined1 local_21;
  
  if (param_2 != 6) {
    return;
  }
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 != 0xc) {
    if (iVar2 != 7) {
      return;
    }
    FUN_1005b1d80(param_1);
    return;
  }
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR_shared_null_1021e1288;
  local_b0 = PTR_shared_null_1021e1288;
  FUN_1002f6080(local_a8,&local_b0);
  FUN_1005b9a00(uVar3,local_a8);
  FUN_100252c80(local_50);
  FUN_100252e70(local_a8);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1ca0;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1005b1ca0:
  lVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(lVar4 + 0x50) = 4;
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goNext();
  return;
}

