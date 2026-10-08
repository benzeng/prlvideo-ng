
void FUN_100a46a10(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    break;
  case 1:
    puVar2 = *(undefined8 **)(param_4 + 8);
    local_50 = (QArrayData *)*puVar2;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
    local_48 = (QArrayData *)puVar2[1];
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
    FUN_100a3c5a0(param_1,&local_50,**(undefined4 **)(param_4 + 0x10),
                  **(undefined4 **)(param_4 + 0x18));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100a46b94;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a46b94:
    if (*(int *)local_50 == -1) {
      return;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
    return;
  case 2:
    FUN_100a3ae10(param_1);
    return;
  case 3:
    FUN_100a3a790(param_1,*(undefined8 *)(param_4 + 8));
    return;
  case 4:
    FUN_100a3a9b0(param_1,*(undefined8 *)(param_4 + 8));
    return;
  case 5:
    FUN_100a3aa70(param_1);
    return;
  default:
    goto switchD_100a46a44_default;
  }
  uVar1 = **(undefined4 **)(param_4 + 8);
  FUN_100095510(local_30,*(undefined8 *)(param_4 + 0x10));
  puVar2 = *(undefined8 **)(param_4 + 0x18);
  local_40 = (QArrayData *)*puVar2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_38 = (QArrayData *)puVar2[1];
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  FUN_100a3b8e0(param_1,uVar1,local_30,&local_40,**(undefined4 **)(param_4 + 0x20));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a46ad9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a46ad9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a46b09;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a46b09:
  FUN_1000f1a40(local_30);
switchD_100a46a44_default:
  return;
}

