
undefined8 FUN_10041bf50(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  char local_31;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0;
  if (*(int *)(*param_2 + 4) < 2) goto LAB_10041c033;
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_31 = '\0';
  QByteArray::mid((int)&local_40,(int)param_2);
  QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10041bfce;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10041bfce:
  iVar2 = QByteArray::toInt((bool *)&local_30,(int)&local_31);
  uVar3 = 0;
  if (((iVar2 != 0) && (local_31 != '\0')) && (iVar2 <= *(int *)(param_1 + 0x9c))) {
    uVar3 = 1;
    FUN_100416cc0(param_1);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10041c033;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10041c033:
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar3;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
  return uVar3;
}

