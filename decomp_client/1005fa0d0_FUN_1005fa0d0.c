
void FUN_1005fa0d0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    if (param_3 == 6) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1005f3f20(param_1);
      return;
    case 1:
      FUN_1005f3fa0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1005f40d0(param_1);
      return;
    case 3:
      FUN_1005f4210(param_1);
      return;
    case 4:
      puVar1 = (undefined8 *)param_4[1];
      local_28 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_28 + 1U) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_11 = *(int *)local_28 != 0;
        UNLOCK();
      }
      local_20 = *(undefined4 *)(puVar1 + 1);
      FUN_1005f50a0(param_1,&local_28);
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return;
          }
          local_11 = 0;
        }
        QArrayData::deallocate(local_28,2,8);
      }
      break;
    case 5:
      if (*(int *)param_4[1] == 1) {
        QObject::sender();
        uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220840);
        iVar2 = FUN_100601170(uVar3);
        *(int *)(param_1 + 0x24) = iVar2;
        if (iVar2 != 0) goto switchD_1005fa113_caseD_8;
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      break;
    case 6:
      FUN_1005f8220(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1005f51a0(param_1);
      return;
    case 8:
switchD_1005fa113_caseD_8:
      CAbstractWizardPage::wizardCtrl();
      CWizardController::goNext();
      return;
    case 9:
      FUN_1005f4b00(param_1);
      return;
    case 10:
      FUN_1005f59b0(param_1);
      return;
    case 0xb:
      FUN_1005f5c90(param_1);
      return;
    }
  }
  return;
}

