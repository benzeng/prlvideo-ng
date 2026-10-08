
undefined1 FUN_1005c1230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar3 = FUN_10073fe80(&local_28);
  cVar1 = FUN_100744440(uVar3,param_2);
  uVar2 = 1;
  if (cVar1 == '\0') {
    local_30 = (QArrayData *)QString::fromAscii_helper("Web Store",9);
    uVar3 = FUN_10073fe80(&local_30);
    uVar2 = FUN_100744440(uVar3,param_2);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005c12ca;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1005c12ca:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

