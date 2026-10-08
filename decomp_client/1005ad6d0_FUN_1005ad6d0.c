
uint FUN_1005ad6d0(undefined8 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  CAbstractWizardPageFlow::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221df20);
  bVar1 = FUN_1005a8be0(uVar3);
  uVar2 = 1;
  if (param_2 != 0) {
    if (param_2 == -1) {
      uVar2 = bVar1 ^ 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

