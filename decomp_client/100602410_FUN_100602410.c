
uint FUN_100602410(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  QArrayData *local_30;
  
  CAbstractWizardPageFlow::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220be0);
  uVar4 = 3;
  switch(param_2) {
  case 0:
    uVar3 = FUN_1006021b0(uVar2);
    cVar1 = FUN_100603c00(uVar3);
    if (cVar1 != '\0') {
      return 1;
    }
  case 1:
    uVar2 = FUN_1006021b0(uVar2);
    cVar1 = FUN_100603d50(uVar2);
    uVar4 = cVar1 == '\0' | 2;
    break;
  case 2:
    break;
  case 0xffffffff:
    FUN_1006021b0(uVar2);
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getServerUuidAs();
    uVar4 = 0;
    if (*(int *)(local_30 + 4) != 0) {
      uVar3 = FUN_1006021b0(uVar2);
      cVar1 = FUN_100603c00(uVar3);
      uVar4 = 1;
      if (cVar1 == '\0') {
        uVar2 = FUN_1006021b0(uVar2);
        cVar1 = FUN_100603d50(uVar2);
        uVar4 = cVar1 == '\0' | 2;
      }
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return uVar4;
        }
      }
      QArrayData::deallocate(local_30,2,8);
    }
    break;
  default:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

