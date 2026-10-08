
void FUN_1002a05b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100061050(2,uVar1);
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  return;
}

