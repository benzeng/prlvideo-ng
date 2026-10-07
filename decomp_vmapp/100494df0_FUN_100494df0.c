
undefined8 * FUN_100494df0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  QString local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  puVar3 = operator_new(0x10);
  puVar2 = PTR_shared_null_100ba20d0;
  *puVar3 = PTR_shared_null_100ba20d0;
  puVar3[1] = puVar2;
  QByteArray::resize((int)puVar3);
  if (param_1 == 0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  }
  else {
    local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
  }
  QString::operator=((QString *)(puVar3 + 1),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100494ea7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100494ea7:
  puVar4 = (uint *)*puVar3;
  if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
    QByteArray::reallocData(puVar3,puVar4[1] + 1,puVar4[2] >> 0x1f);
    puVar4 = (uint *)*puVar3;
  }
  lVar1 = *(long *)(puVar4 + 4);
  *(undefined8 *)((long)puVar4 + lVar1 + 8) = 0;
  *(undefined8 *)((long)puVar4 + lVar1) = 0;
  *(undefined4 *)((long)puVar4 + lVar1) = 0x10005;
  FUN_100494fd0(param_1,param_2,(long)puVar4 + lVar1);
  return puVar3;
}

