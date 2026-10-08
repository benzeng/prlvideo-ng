
void FUN_100203ea0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  char local_29;
  QString local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x70) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 < 0) goto LAB_100204038;
  local_29 = '\0';
  CSdkRequest::getResultAsString((int)&local_38);
  lVar1 = QString::toULongLong((bool *)&local_38,(int)&local_29);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100203f3b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100203f3b:
  if ((lVar1 == 0) || (local_29 == '\0')) goto LAB_100204038;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s__1_is_required_for_importing_Boo_10226fef0);
  FUN_100def650(&local_50,lVar1,1);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QString::operator=(&local_28,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100203fd8;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100203fd8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100204008;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100204008:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100204038;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100204038:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  FUN_1001a3580(uVar2,1);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  FUN_1001a35a0(uVar2,0);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  FUN_1001a35c0(uVar2,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

