
void FUN_1007698e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_1007637b0(*(undefined8 *)(param_1 + 0x38));
  FUN_100763010(uVar2);
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  FUN_100763010(uVar2);
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  iVar1 = FUN_100762f60(uVar2);
  if (iVar1 == 3) {
    FUN_100766840(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return;
    }
    iVar1 = FUN_100762f60(uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_1006915d0();
      uVar5 = 0x39;
    }
    else {
      iVar1 = FUN_100762f60(uVar2);
      if (iVar1 != 1) {
        iVar1 = FUN_100762f60(uVar2);
        if (iVar1 != 2) {
          return;
        }
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x30);
        }
        FUN_100197290(lVar4,uVar2,0);
        return;
      }
      uVar2 = FUN_1006915d0();
      uVar5 = 0x2f;
    }
  }
  else {
    uVar2 = FUN_1006915d0();
    uVar5 = 0x42;
    lVar4 = lVar3;
  }
  uVar2 = FUN_100691620(uVar2,uVar5,lVar4);
  QAction::activate(uVar2,0);
  return;
}

