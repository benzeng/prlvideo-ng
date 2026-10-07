
undefined8 FUN_100053130(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 auStack_10a8 [263];
  QArrayData *local_870;
  QArrayData *local_868;
  undefined8 local_860 [263];
  bool local_21;
  
  bVar4 = 0;
  QByteArray::fromRawData((char *)&local_868,param_4);
  FUN_10005a940(&local_868,local_860);
  if (*(int *)local_868 != -1) {
    if (*(int *)local_868 != 0) {
      LOCK();
      *(int *)local_868 = *(int *)local_868 + -1;
      UNLOCK();
      local_21 = *(int *)local_868 != 0;
      if (*(int *)local_868 != 0) goto LAB_1000531a0;
    }
    QArrayData::deallocate(local_868,1,8);
  }
LAB_1000531a0:
  local_870 = (QArrayData *)*param_2;
  if (1 < *(int *)local_870 + 1U) {
    LOCK();
    *(int *)local_870 = *(int *)local_870 + 1;
    UNLOCK();
    local_21 = *(int *)local_870 != 0;
  }
  puVar2 = local_860;
  puVar3 = auStack_10a8;
  for (lVar1 = 0x107; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  FUN_1000532b0(param_1,&local_870);
  if (*(int *)local_870 != -1) {
    if (*(int *)local_870 != 0) {
      LOCK();
      *(int *)local_870 = *(int *)local_870 + -1;
      UNLOCK();
      if (*(int *)local_870 != 0) {
        return 0;
      }
      local_21 = false;
    }
    QArrayData::deallocate(local_870,2,8);
  }
  return 0;
}

