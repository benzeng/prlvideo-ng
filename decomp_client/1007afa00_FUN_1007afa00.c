
void FUN_1007afa00(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222d300);
  if (param_2 != 1) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  QObject::property((char *)&local_40);
  QVariant::toList();
  QVariant::~QVariant(&local_40);
  QVariant::toString();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  FUN_1007b24d0(&local_50,lVar2);
  FUN_1007b24f0(&local_58,lVar2);
  FUN_1007b5440(uVar1,&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007afadf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007afadf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007afb0f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007afb0f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007afb3f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007afb3f:
  FUN_100035ea0(local_30);
  return;
}

