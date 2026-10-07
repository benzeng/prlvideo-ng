
undefined8 FUN_100046ec0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (2 < *(int *)(lVar2 + 8 + lVar1) - 1U) {
    return 0xfffffffb;
  }
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (*(uint *)(lVar2 + 0xc + lVar1) < 0x10) {
    local_40 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_3c = 0;
    local_34 = 0;
    QByteArray::QByteArray((QByteArray *)&local_48,(char *)&local_40,0x10);
    QByteArray::operator=((QByteArray *)&local_28,(QByteArray *)&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100046fb6;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    QByteArray::QByteArray((QByteArray *)&local_30,(char *)(lVar2 + 0x10 + lVar1),0x10);
    QByteArray::operator=((QByteArray *)&local_28,(QByteArray *)&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100046fb6;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_100046fb6:
  FUN_1000470c0(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 0;
}

