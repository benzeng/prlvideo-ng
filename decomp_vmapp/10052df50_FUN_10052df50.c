
ulong FUN_10052df50(int param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined *local_38;
  int *local_30;
  undefined1 local_21;
  
  puVar6 = PTR_shared_null_100ba20d0;
  if (param_1 == -1) {
    return 0;
  }
  local_38 = PTR_shared_null_100ba20d0;
  FUN_10052c130(&local_30,&local_38);
  if (*(int *)puVar6 != -1) {
    if (*(int *)puVar6 != 0) {
      LOCK();
      *(int *)puVar6 = *(int *)puVar6 + -1;
      local_21 = *(int *)puVar6 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10052dfb4;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10052dfb4:
  FUN_10000d8d0(&local_58,&local_30);
  lVar5 = (long)local_58[2];
  iVar1 = local_58[3];
  local_48 = local_58 + (long)iVar1 * 2 + 4;
  iVar8 = 2;
  local_50 = local_58 + lVar5 * 2 + 4;
  if (local_58[2] != iVar1) {
    lVar3 = (long)iVar1 * 8 + lVar5 * -8;
    piVar2 = local_58 + lVar5 * 2 + 6;
    do {
      piVar4 = piVar2;
      if (*(int *)(*(long *)(piVar4 + -2) + 4) == param_1) {
        puVar6 = (undefined *)(ulong)*(uint *)(*(long *)(piVar4 + -2) + 0x1c);
        iVar8 = 1;
        break;
      }
      lVar3 = lVar3 + -8;
      piVar2 = piVar4 + 2;
      local_50 = piVar4;
    } while (lVar3 != 0);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10052e050;
    }
    FUN_10052ea90(&local_58,local_58);
  }
LAB_10052e050:
  uVar7 = (ulong)puVar6 & 0xffffffff;
  if (iVar8 == 2) {
    uVar7 = 0;
  }
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    FUN_10052ea90(&local_30,local_30);
  }
  return uVar7;
}

