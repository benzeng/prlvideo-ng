
undefined4 FUN_1004d9230(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_40;
  QString local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  QString::toUtf8_helper(&local_38);
  local_30 = 0;
  cVar1 = FUN_100761b20((QArrayData *)(local_38.field0_0x0 + *(long *)(local_38.field0_0x0 + 0x10)),
                        &local_30,1,0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_100761c10(local_30);
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d92ee;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
  }
LAB_1004d92ee:
  uVar2 = 0xf0000019;
  if (cVar1 != '\0') {
    local_40 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
    uVar2 = FUN_1004e4790(&local_40,param_2,param_2 + 8,param_2 + 0x10,param_2 + 0x14);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return uVar2;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return uVar2;
}

