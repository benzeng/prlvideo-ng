
undefined8 FUN_1002a0730(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100061050(2,uVar2);
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  uVar2 = 0x80000009;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(param_1 + 0x3c) == 1)) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar2);
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    uVar2 = 0x80000009;
    if (lVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

