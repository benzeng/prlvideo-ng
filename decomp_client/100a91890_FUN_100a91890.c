
void FUN_100a91890(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  uint uVar2;
  QArrayData *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  FUN_100a68840(&local_38);
  (**(code **)(**(long **)(param_1 + 0x70) + 8))
            (*(long **)(param_1 + 0x70),param_1,param_1 + 0xb8,param_3,param_4);
  FUN_100a68840(&local_40);
  uVar2 = FUN_100a68860(&local_38,&local_40);
  local_38 = local_40;
  if (uVar2 < 10000) {
    return;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,
                "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                ,local_48 + *(long *)(local_48 + 0x10),uVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a9197f;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100a9197f:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

