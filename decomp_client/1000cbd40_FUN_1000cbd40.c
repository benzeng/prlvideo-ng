
undefined1 FUN_1000cbd40(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x34) == 0)) {
    return 0;
  }
  puVar3 = *(uint **)(param_2 + 0x38);
  lVar4 = 0;
  if ((int)puVar3[2] < (int)puVar3[3]) {
    do {
      if (1 < *puVar3) {
        FUN_1000e7430((undefined8 *)(param_2 + 0x38),puVar3[1]);
        puVar3 = *(uint **)(param_2 + 0x38);
      }
      if ((*(byte *)(*(long *)(puVar3 + (lVar4 + (int)puVar3[2]) * 2 + 4) + 0x1c) & 6) != 0) {
        return 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)(int)puVar3[3] - (long)(int)puVar3[2]);
  }
  uVar1 = *(ulong *)(param_2 + 0x30);
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                  uVar1 & 0xffffffff,*(undefined4 *)(param_2 + 0x34),0xb2c);
  }
  FUN_1000c6a60(param_1,(ulong *)(param_2 + 0x30));
  local_38 = *(QArrayData **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_40 = *(QArrayData **)(param_2 + 8);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_1000b0b40(uVar2,&local_38,&local_40,uVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000cbe7f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000cbe7f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 1;
}

