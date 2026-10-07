
undefined8 FUN_10028dcb0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined7 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char *pcStack_50;
  long *plStack_48;
  char *pcStack_40;
  long *plStack_38;
  char *pcStack_30;
  long lStack_20;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x88) + 0x30);
  puVar6 = (undefined1 *)(param_2 + 0xc);
  uVar7 = (undefined7)((ulong)puVar6 >> 8);
  switch(*(undefined1 *)(*(long *)(param_2 + 0x88) + 5)) {
  case 1:
    goto switchD_10028dcf2_caseD_1;
  case 2:
    uVar5 = 0;
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0d0); puVar8 != (undefined8 *)(param_1 + 0x3a0d0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0e0); puVar8 != (undefined8 *)(param_1 + 0x3a0e0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0c0); puVar8 != (undefined8 *)(param_1 + 0x3a0c0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    plVar10 = *(long **)(param_1 + 0x3a0f0);
    if (plVar10 != (long *)(param_1 + 0x3a0f0)) {
      plVar9 = *(long **)(param_1 + 0x3a0a8);
      do {
        if (plVar10 + -0x13 != plVar9) {
          *(undefined4 *)(plVar10 + 8) = 1;
          *(undefined2 *)((long)plVar10 + -0x82) = 0x48;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)(param_1 + 0x3a0f0));
    }
    *puVar6 = 8;
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 0);
  case 3:
    uVar5 = 0;
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0d0); puVar8 != (undefined8 *)(param_1 + 0x3a0d0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0e0); puVar8 != (undefined8 *)(param_1 + 0x3a0e0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0c0); puVar8 != (undefined8 *)(param_1 + 0x3a0c0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    plVar10 = *(long **)(param_1 + 0x3a0f0);
    if (plVar10 != (long *)(param_1 + 0x3a0f0)) {
      plVar9 = *(long **)(param_1 + 0x3a0a8);
      do {
        if (plVar10 + -0x13 != plVar9) {
          *(undefined4 *)(plVar10 + 8) = 1;
          *(undefined2 *)((long)plVar10 + -0x82) = 0x48;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)(param_1 + 0x3a0f0));
    }
    *puVar6 = 8;
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 0);
  case 4:
    uVar5 = 0;
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0d0); puVar8 != (undefined8 *)(param_1 + 0x3a0d0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0e0); puVar8 != (undefined8 *)(param_1 + 0x3a0e0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0c0); puVar8 != (undefined8 *)(param_1 + 0x3a0c0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    plVar10 = *(long **)(param_1 + 0x3a0f0);
    if (plVar10 != (long *)(param_1 + 0x3a0f0)) {
      plVar9 = *(long **)(param_1 + 0x3a0a8);
      do {
        if (plVar10 + -0x13 != plVar9) {
          *(undefined4 *)(plVar10 + 8) = 1;
          *(undefined2 *)((long)plVar10 + -0x82) = 0x48;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)(param_1 + 0x3a0f0));
    }
    *puVar6 = 8;
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 0);
  case 5:
    uVar5 = 0;
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0d0); puVar8 != (undefined8 *)(param_1 + 0x3a0d0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0e0); puVar8 != (undefined8 *)(param_1 + 0x3a0e0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    for (puVar8 = *(undefined8 **)(param_1 + 0x3a0c0); puVar8 != (undefined8 *)(param_1 + 0x3a0c0);
        puVar8 = (undefined8 *)*puVar8) {
      *(undefined4 *)(puVar8 + 8) = 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    plVar10 = *(long **)(param_1 + 0x3a0f0);
    if (plVar10 != (long *)(param_1 + 0x3a0f0)) {
      plVar9 = *(long **)(param_1 + 0x3a0a8);
      do {
        if (plVar10 + -0x13 != plVar9) {
          *(undefined4 *)(plVar10 + 8) = 1;
          *(undefined2 *)((long)plVar10 + -0x82) = 0x48;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)(param_1 + 0x3a0f0));
    }
    *puVar6 = 8;
    return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 0);
  case 6:
    *puVar6 = 8;
    return CONCAT71(uVar7,1);
  case 7:
    *puVar6 = 8;
    return CONCAT71(uVar7,1);
  default:
    *puVar6 = 8;
    return CONCAT71(uVar7,1);
  }
LAB_10028d91e:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",2,"LSI: message 0x%08X was found in %s",iVar1,
                  (&pcStack_50)[lVar11 * 2],plVar10);
  }
  *(undefined4 *)(plVar9 + 8) = 1;
  uVar4 = 0;
  goto LAB_10028d964;
switchD_10028dcf2_caseD_1:
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar10 = (long *)(param_1 + 0x3a0d0);
  pcStack_50 = s_queued_reads_list_101115ed0;
  plStack_48 = (long *)(param_1 + 0x3a0e0);
  pcStack_40 = s_queued_writes_list_101115ef0;
  plStack_38 = (long *)(param_1 + 0x3a0c0);
  pcStack_30 = s_ready_list_101115f03;
  plVar9 = *(long **)(param_1 + 0x3a0d0);
  lStack_20 = lVar2;
  if (plVar9 != plVar10) {
    lVar11 = 0;
    do {
      if (*(int *)(plVar9[-2] + 8) == iVar1) goto LAB_10028d91e;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != plVar10);
  }
  plVar9 = (long *)*plStack_48;
  plVar3 = plVar10;
  if (plVar9 != plStack_48) {
    lVar11 = 1;
    do {
      plVar3 = (long *)plVar9[-2];
      if ((int)plVar3[1] == iVar1) goto LAB_10028d91e;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != plStack_48);
  }
  plVar9 = (long *)*plStack_38;
  if (plVar9 != plStack_38) {
    lVar11 = 2;
    do {
      plVar3 = (long *)plVar9[-2];
      if ((int)plVar3[1] == iVar1) goto LAB_10028d91e;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != plStack_38);
  }
  for (puVar8 = *(undefined8 **)(param_1 + 0x3a0f0); puVar8 != (undefined8 *)(param_1 + 0x3a0f0);
      puVar8 = (undefined8 *)*puVar8) {
    plVar3 = (long *)puVar8[-2];
    if ((int)plVar3[1] == iVar1) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",2,"LSI: message 0x%08X was found in %s",iVar1,
                      s_stalled_list_101115f0e,plVar10);
      }
      *(undefined4 *)(puVar8 + 8) = 1;
      *(undefined2 *)((long)puVar8 + -0x82) = 0x48;
      uVar4 = 0;
      goto LAB_10028d964;
    }
  }
  *puVar6 = 8;
  uVar4 = CONCAT71((int7)((ulong)plVar3 >> 8),1);
LAB_10028d964:
  if (lVar2 != lStack_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

