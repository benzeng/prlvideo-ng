
undefined4 FUN_100483dc0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = param_2;
  QMutex::lock();
  iVar2 = FUN_100036ff0((long *)(param_1 + 0x48),&local_38);
  lVar3 = *(long *)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0xc) == *(int *)(lVar3 + 8)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar7 = 0xf0000000;
  if (iVar2 != 0) goto LAB_100483f29;
  local_58 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar3 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(local_58 + 8);
  local_50 = local_58 + (long)iVar2 * 8 + 0x10;
  iVar1 = *(int *)(local_58 + 0xc);
  local_48 = local_58 + (long)iVar1 * 8 + 0x10;
  iVar6 = 6;
  if (iVar2 != iVar1) {
    lVar3 = (long)iVar2 << 3;
    do {
      if (*(long *)(*(long *)(local_58 + lVar3 + 0x10) + 0x28) == param_2) {
        *(undefined8 *)(*(long *)(local_58 + lVar3 + 0x10) + 0x28) = 0;
        iVar6 = 1;
        break;
      }
      local_50 = local_58 + lVar3 + 0x18;
      lVar3 = lVar3 + 8;
    } while ((long)iVar1 * 8 != lVar3);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100483f19;
    }
    QListData::dispose(local_58);
  }
LAB_100483f19:
  uVar7 = 0xf0000000;
  if (iVar6 == 6) {
    uVar7 = 0xffffffff;
  }
LAB_100483f29:
  QMutex::unlock();
  return uVar7;
}

