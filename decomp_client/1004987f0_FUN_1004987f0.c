
void FUN_1004987f0(long param_1,ulong param_2,char param_3)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  Data *pDVar9;
  Data *pDVar10;
  long lVar11;
  QMapNodeBase *pQVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  pQVar12 = *(QMapNodeBase **)(param_1 + 0x40);
  puVar15 = (undefined8 *)(param_1 + 0x40);
  lVar14 = *(long *)(pQVar12 + 0x10);
  lVar6 = 0;
  lVar11 = lVar14;
  if (lVar14 != 0) {
    do {
      while (uVar8 = *(ulong *)(lVar11 + 0x18), uVar8 < param_2) {
        plVar1 = (long *)(lVar11 + 0x10);
        lVar11 = *plVar1;
        if (*plVar1 == 0) {
          if (lVar6 == 0) goto LAB_1004988b8;
          uVar8 = *(ulong *)(lVar6 + 0x18);
          goto LAB_10049885b;
        }
      }
      plVar1 = (long *)(lVar11 + 8);
      lVar6 = lVar11;
      lVar11 = *plVar1;
    } while (*plVar1 != 0);
LAB_10049885b:
    if ((uVar8 <= param_2) && (param_3 == '\x01')) {
      if (1 < *(uint *)pQVar12) {
        FUN_1004a0d10(puVar15);
        pQVar12 = (QMapNodeBase *)*puVar15;
      }
      lVar14 = *(long *)(pQVar12 + 0x10);
      lVar6 = 0;
      if (*(long *)(pQVar12 + 0x10) == 0) {
        return;
      }
      do {
        while (lVar11 = lVar14, uVar8 = *(ulong *)(lVar11 + 0x18), param_2 <= uVar8) {
          lVar14 = *(long *)(lVar11 + 8);
          lVar6 = lVar11;
          if (*(long *)(lVar11 + 8) == 0) {
LAB_100498aa7:
            if (param_2 < uVar8) {
              return;
            }
            plVar1 = *(long **)(lVar11 + 0x20);
            QMapDataBase::freeNodeAndRebalance(pQVar12);
            if (plVar1 == (long *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000100498ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x20))(plVar1);
            return;
          }
        }
        lVar14 = *(long *)(lVar11 + 0x10);
      } while (*(long *)(lVar11 + 0x10) != 0);
      if (lVar6 == 0) {
        return;
      }
      uVar8 = *(ulong *)(lVar6 + 0x18);
      lVar11 = lVar6;
      goto LAB_100498aa7;
    }
LAB_1004988b8:
    lVar6 = 0;
    if (lVar14 != 0) {
      do {
        while (lVar11 = lVar14, uVar8 = *(ulong *)(lVar11 + 0x18), uVar8 < param_2) {
          lVar14 = *(long *)(lVar11 + 0x10);
          if (*(long *)(lVar11 + 0x10) == 0) {
            if (lVar6 == 0) goto LAB_1004988f4;
            uVar8 = *(ulong *)(lVar6 + 0x18);
            goto LAB_1004988eb;
          }
        }
        lVar14 = *(long *)(lVar11 + 8);
        lVar6 = lVar11;
      } while (*(long *)(lVar11 + 8) != 0);
LAB_1004988eb:
      if (uVar8 <= param_2) {
        return;
      }
    }
  }
LAB_1004988f4:
  if (param_3 != '\0') {
    return;
  }
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_4c = 0xc;
  FUN_100138150(&local_48,&local_4c);
  local_50 = 2;
  FUN_100138150(&local_48,&local_50);
  local_54 = 3;
  FUN_100138150(&local_48,&local_54);
  local_58 = 5;
  FUN_100138150(&local_48,&local_58);
  local_5c = 4;
  FUN_100138150(&local_48,&local_5c);
  local_60 = 6;
  FUN_100138150(&local_48,&local_60);
  local_64 = 7;
  FUN_100138150(&local_48,&local_64);
  FUN_100137dc0(&local_40,&local_48);
  pDVar10 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100498a0f;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar14 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = local_48 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar9 != (void *)0x0) {
          operator_delete(*(void **)pDVar9);
        }
        pDVar9 = pDVar9 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(pDVar10);
  }
LAB_100498a0f:
  pvVar4 = operator_new(0x18);
  FUN_100137ad0(pvVar4,param_2,&local_40);
  puVar13 = (uint *)*puVar15;
  if (1 < *puVar13) {
    FUN_1004a0d10(puVar15);
    puVar13 = (uint *)*puVar15;
  }
  puVar5 = (uint *)0x0;
  puVar3 = *(uint **)(puVar13 + 4);
  if (*(uint **)(puVar13 + 4) == (uint *)0x0) {
    puVar7 = puVar13 + 2;
  }
  else {
    do {
      while (puVar7 = puVar3, uVar8 = *(ulong *)(puVar7 + 6), uVar8 < param_2) {
        puVar3 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          if (puVar5 == (uint *)0x0) goto LAB_100498adb;
          uVar8 = *(ulong *)(puVar5 + 6);
          goto LAB_100498a85;
        }
      }
      puVar5 = puVar7;
      puVar3 = *(uint **)(puVar7 + 2);
    } while (*(uint **)(puVar7 + 2) != (uint *)0x0);
LAB_100498a85:
    if (uVar8 <= param_2) goto LAB_100498af2;
  }
LAB_100498adb:
  puVar5 = (uint *)QMapDataBase::createNode((int)puVar13,0x28,(QMapNodeBase *)0x8,SUB81(puVar7,0));
  *(ulong *)(puVar5 + 6) = param_2;
LAB_100498af2:
  *(void **)(puVar5 + 8) = pvVar4;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar14 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar10 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

