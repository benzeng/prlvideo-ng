
undefined8 * FUN_100379040(undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QVariant local_30;
  long local_20;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar3 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  cVar1 = FUN_100325f80(uVar3);
  if (cVar1 == '\0') {
    uVar3 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
    }
    FUN_100326190(uVar3);
    local_20 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0);
    if (local_20 != 0) {
      iVar2 = FUN_10037a520();
      QVariant::QVariant(&local_30,iVar2,&local_20,1);
      FUN_10012ae80(param_1,&local_30);
      QVariant::~QVariant(&local_30);
    }
  }
  return param_1;
}

