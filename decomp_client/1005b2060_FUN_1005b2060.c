
void FUN_1005b2060(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (-1 < param_2) {
    QObject::sender();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206130);
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar1 = FUN_100284010(uVar1);
    FUN_1005b87d0(uVar2,uVar1);
    lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(lVar3 + 0x6d) = 0;
    uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar1,2);
    uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_1005b8750(uVar1);
    FUN_10083fee0(param_1,uVar4);
    return;
  }
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar1,0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
  return;
}

