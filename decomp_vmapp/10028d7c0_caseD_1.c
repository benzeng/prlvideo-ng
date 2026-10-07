
undefined8 switchD_10028dcf2::caseD_1(long param_1,int param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  char *local_50;
  long *local_48;
  char *local_40;
  long *local_38;
  char *local_30;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar1 = (long *)(param_1 + 0x3a0d0);
  local_50 = s_queued_reads_list_101115ed0;
  local_48 = (long *)(param_1 + 0x3a0e0);
  local_40 = s_queued_writes_list_101115ef0;
  local_38 = (long *)(param_1 + 0x3a0c0);
  local_30 = s_ready_list_101115f03;
  plVar5 = *(long **)(param_1 + 0x3a0d0);
  local_20 = lVar2;
  if (plVar5 != plVar1) {
    lVar7 = 0;
    do {
      if (*(int *)(plVar5[-2] + 8) == param_2) goto LAB_10028d91e;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar1);
  }
  plVar5 = (long *)*local_48;
  plVar3 = plVar1;
  if (plVar5 != local_48) {
    lVar7 = 1;
    do {
      plVar3 = (long *)plVar5[-2];
      if ((int)plVar3[1] == param_2) goto LAB_10028d91e;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != local_48);
  }
  plVar5 = (long *)*local_38;
  if (plVar5 != local_38) {
    lVar7 = 2;
    do {
      plVar3 = (long *)plVar5[-2];
      if ((int)plVar3[1] == param_2) goto LAB_10028d91e;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != local_38);
  }
  for (puVar6 = *(undefined8 **)(param_1 + 0x3a0f0); puVar6 != (undefined8 *)(param_1 + 0x3a0f0);
      puVar6 = (undefined8 *)*puVar6) {
    plVar3 = (long *)puVar6[-2];
    if ((int)plVar3[1] == param_2) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",2,"LSI: message 0x%08X was found in %s",param_2,
                      s_stalled_list_101115f0e,plVar1);
      }
      *(undefined4 *)(puVar6 + 8) = 1;
      *(undefined2 *)((long)puVar6 + -0x82) = 0x48;
      uVar4 = 0;
      goto LAB_10028d964;
    }
  }
  *param_3 = 8;
  uVar4 = CONCAT71((int7)((ulong)plVar3 >> 8),1);
LAB_10028d964:
  if (lVar2 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10028d91e:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",2,"LSI: message 0x%08X was found in %s",param_2,
                  (&local_50)[lVar7 * 2],plVar1);
  }
  *(undefined4 *)(plVar5 + 8) = 1;
  uVar4 = 0;
  goto LAB_10028d964;
}

