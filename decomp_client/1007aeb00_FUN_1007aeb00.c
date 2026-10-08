
void FUN_1007aeb00(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1007b3650(uVar1,&local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007aeb75;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007aeb75:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

