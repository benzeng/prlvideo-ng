
void FUN_1009b6410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar1 = FUN_100998580();
  FUN_100998560(&local_40,param_1);
  FUN_100a08530(uVar1,&local_40,param_2,param_3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1009b6482;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009b6482:
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
  return;
}

