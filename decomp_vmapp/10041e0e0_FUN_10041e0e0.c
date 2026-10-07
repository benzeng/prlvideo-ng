
void FUN_10041e0e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::sprintf((char *)&local_38,"%02x");
  QString::toUtf8();
  QByteArray::append((QByteArray *)param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10041e159;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10041e159:
  QByteArray::append((char *)param_2);
  uVar1 = *(uint *)(*param_2 + 4);
  QByteArray::append((char *)param_2);
  puVar2 = (uint *)*param_2;
  if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
    QByteArray::reallocData(param_2,puVar2[1] + 1,puVar2[2] >> 0x1f);
    puVar2 = (uint *)*param_2;
  }
  FUN_10041fb90(param_4,(ulong)uVar1 + *(long *)(puVar2 + 4) + (long)puVar2,4);
  QByteArray::append((char *)param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

