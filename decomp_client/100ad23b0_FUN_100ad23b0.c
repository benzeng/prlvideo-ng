
undefined1 FUN_100ad23b0(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  char cVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  Data *pDVar10;
  undefined8 *puVar11;
  long lVar12;
  Data *local_68;
  QArrayData *local_60;
  undefined *local_58;
  QArrayData *local_50;
  undefined **local_48;
  int *local_40;
  undefined1 local_31;
  
  cVar6 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar6 == '\0') {
    return 0;
  }
  local_48 = &PTR_FUN_10223b2c8;
  local_40 = *(int **)(param_1 + 0x998);
  if (*local_40 == 0) {
    if (local_40[2] < 0) {
      piVar7 = (int *)QArrayData::allocate(0x20,8,local_40[2] & 0x7fffffff,0);
      local_40 = piVar7;
      if (piVar7 == (int *)0x0) {
        qBadAlloc();
      }
      *(byte *)((long)piVar7 + 0xb) = *(byte *)((long)piVar7 + 0xb) | 0x80;
      piVar7 = local_40;
    }
    else {
      local_40 = (int *)QArrayData::allocate(0x20,8,(long)local_40[1],0);
      piVar7 = local_40;
      if (local_40 == (int *)0x0) {
        qBadAlloc();
        piVar7 = (int *)0x0;
      }
    }
    if ((piVar7[2] & 0x7fffffffU) != 0) {
      lVar12 = *(long *)(param_1 + 0x998);
      lVar9 = (long)*(int *)(lVar12 + 4) << 5;
      if (lVar9 != 0) {
        puVar8 = (undefined8 *)(lVar12 + *(long *)(lVar12 + 0x10));
        puVar11 = (undefined8 *)(*(long *)(piVar7 + 4) + (long)piVar7);
        do {
          puVar11[3] = puVar8[3];
          puVar11[2] = puVar8[2];
          uVar3 = *puVar8;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 4;
          puVar11[1] = *puVar1;
          *puVar11 = uVar3;
          puVar11 = puVar11 + 4;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        lVar12 = *(long *)(param_1 + 0x998);
      }
      piVar7[1] = *(int *)(lVar12 + 4);
    }
  }
  else if (*local_40 != -1) {
    LOCK();
    *local_40 = *local_40 + 1;
    local_31 = *local_40 != 0;
    UNLOCK();
    local_40 = *(int **)(param_1 + 0x998);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x9b0);
  cVar6 = FUN_100ad28b0(param_1,param_2);
  if (cVar6 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "CoherenceToolClient: New display configuration is invalid. Guest configuration \t\t\t\t will not ne changed. Continue working with previous display configuration."
                   );
    }
    FUN_100ae5820(&local_48);
    return 0;
  }
  cVar6 = FUN_100ae5ff0(param_1 + 0x990,&local_48);
  if (((cVar6 == '\0') && ((int)uVar3 == *(int *)(param_1 + 0x9b0))) &&
     ((int)((ulong)uVar3 >> 0x20) == *(int *)(param_1 + 0x9b4))) {
    uVar4 = 0;
    FUN_100ade620(*(undefined8 *)(param_1 + 0xa58),0);
    goto LAB_100ad2724;
  }
  FUN_100ad3070(&local_50,param_1);
  FUN_100acb230(*(undefined8 *)(param_1 + 0x10),2,local_50 + *(long *)(local_50 + 0x10),
                *(undefined4 *)(local_50 + 4));
  puVar5 = PTR_shared_null_1021e15e8;
  local_58 = PTR_shared_null_1021e15e8;
  FUN_100ad3450(&local_60,param_1,param_1 + 0x990);
  FUN_1000abcb0(&local_68,&local_58);
  FUN_100ad31f0(param_1,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad264f;
    }
    iVar2 = *(int *)(local_68 + 0xc);
    if (iVar2 != *(int *)(local_68 + 8)) {
      lVar12 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
      pDVar10 = local_68 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_100ad264f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad267f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100ad267f:
  if (*(int *)puVar5 != -1) {
    if (*(int *)puVar5 != 0) {
      LOCK();
      *(int *)puVar5 = *(int *)puVar5 + -1;
      local_31 = *(int *)puVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad26e3;
    }
    iVar2 = *(int *)(puVar5 + 0xc);
    if (iVar2 != *(int *)(puVar5 + 8)) {
      lVar12 = (long)*(int *)(puVar5 + 8) * 8 + (long)iVar2 * -8;
      puVar8 = (undefined8 *)(puVar5 + (long)iVar2 * 8 + 8);
      do {
        if ((void *)*puVar8 != (void *)0x0) {
          operator_delete((void *)*puVar8);
        }
        puVar8 = puVar8 + -1;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_100ad26e3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad2713;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100ad2713:
  uVar4 = 1;
  FUN_100ade660(*(undefined8 *)(param_1 + 0xa58),0);
LAB_100ad2724:
  FUN_100ae5820(&local_48);
  return uVar4;
}

