
ulong FUN_1004f2970(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  bool bVar9;
  QArrayData *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  uint local_38;
  int *local_30;
  undefined1 local_21;
  
  FUN_1004f04f0(&local_30);
  local_50 = local_30;
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)&local_50);
      iVar1 = local_50[2];
      if (iVar1 != local_50[3]) {
        local_30 = local_30 + (long)local_30[2] * 2 + 4;
        piVar7 = local_50 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_50[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_30;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_21 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_30 = local_30 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_21 = *local_30 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)local_50[2] * 2 + 4;
  local_40 = local_50 + (long)local_50[3] * 2 + 4;
  local_38 = 1;
  if (local_50[2] == local_50[3]) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    do {
      local_58 = *(QArrayData **)local_48;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
      }
      if (local_38 != 0) {
        bVar3 = FUN_1004f2610(&local_58,param_1);
        bVar8 = bVar8 & 1 | bVar3;
        local_38 = 0;
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1004f2ab6;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1004f2ab6:
      local_48 = local_48 + 2;
      uVar6 = local_38 ^ 1;
      bVar9 = local_38 != 1;
      local_38 = uVar6;
    } while ((bVar9) && (local_48 != local_40));
  }
  FUN_100013180(&local_50);
  uVar5 = FUN_100013180(&local_30);
  return CONCAT71((int7)((ulong)uVar5 >> 8),bVar8) & 0xffffffffffffff01;
}

