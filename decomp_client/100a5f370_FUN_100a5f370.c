
void FUN_100a5f370(long param_1)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  undefined1 local_40 [8];
  uint *local_38;
  undefined1 local_29;
  
  FUN_100a5f0c0(&local_48);
  if (*(int *)(local_48 + 4) == 0) {
    FUN_100df99c0("","LayoutSyncClient",0,"failed to get keyboard layout");
    FUN_100a5f940(param_1 + 0x10);
    goto LAB_100a5f58a;
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  uVar7 = puVar6[2];
  if (puVar6[3] != uVar7) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    if (1 < *puVar6) {
      FUN_100a63160(puVar1,puVar6[1]);
      puVar6 = (uint *)*puVar1;
      uVar7 = puVar6[2];
    }
    pQVar2 = *(QArrayData **)(puVar6 + (long)(int)uVar7 * 2 + 4);
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      puVar6 = (uint *)*puVar1;
    }
    if (1 < *puVar6) {
      FUN_100a63160(puVar1,puVar6[1]);
      puVar6 = (uint *)*puVar1;
    }
    local_38 = puVar6 + (long)(int)puVar6[2] * 2 + 4;
    FUN_100a5fb40(local_40,puVar1,&local_38);
    if (*(int *)(pQVar2 + 4) == *(int *)(local_48 + 4)) {
      iVar5 = _memcmp(pQVar2 + *(long *)(pQVar2 + 0x10),local_48 + *(long *)(local_48 + 0x10),
                      (long)*(int *)(pQVar2 + 4));
      bVar4 = true;
      if (iVar5 != 0) goto LAB_100a5f438;
    }
    else {
LAB_100a5f438:
      bVar4 = false;
      FUN_100a5f940(puVar1);
    }
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a5f470;
      }
      QArrayData::deallocate(pQVar2,1,8);
    }
LAB_100a5f470:
    if (bVar4) goto LAB_100a5f58a;
  }
  local_68 = *(Data **)(param_1 + 8);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar8 = (long)*(int *)(local_68 + 8);
      lVar3 = *(long *)(param_1 + 8);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_68 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_68 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar8 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      FUN_100a5ed20(*(undefined8 *)local_60,&local_48);
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a5f58a;
    }
    QListData::dispose(local_68);
  }
LAB_100a5f58a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return;
}

