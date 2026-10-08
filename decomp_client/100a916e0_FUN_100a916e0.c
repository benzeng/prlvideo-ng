
void FUN_100a916e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  uint uVar2;
  QArrayData *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  FUN_100a68840(&local_30);
  (**(code **)**(undefined8 **)(param_1 + 0x70))
            (*(undefined8 **)(param_1 + 0x70),param_1,param_1 + 0xb8,param_3);
  FUN_100a68840(&local_38);
  uVar2 = FUN_100a68860(&local_30,&local_38);
  local_30 = local_38;
  if (uVar2 < 10000) {
    return;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,
                "%sWARNING: callback took too much time: about %d msecs. This is absolutely incorrect! Callback must be rewritten!"
                ,local_40 + *(long *)(local_40 + 0x10),uVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a917c6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100a917c6:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

