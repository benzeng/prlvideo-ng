
undefined8 FUN_100029ca0(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  long *local_160;
  void *local_158;
  void *pvStack_150;
  undefined8 local_148;
  long *local_140;
  void *local_138;
  void *pvStack_130;
  undefined8 local_128;
  long *local_120;
  void *local_118;
  void *pvStack_110;
  undefined8 local_108;
  long *local_100;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long *local_e0;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  long *local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  QByteArray::resize((int)param_3);
  puVar8 = (uint *)*param_3;
  if ((1 < *puVar8) || (*(long *)(puVar8 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar8[1] + 1,puVar8[2] >> 0x1f);
    puVar8 = (uint *)*param_3;
  }
  lVar5 = *(long *)(puVar8 + 4);
  uVar11 = *puVar1;
  *(undefined8 *)((long)puVar8 + lVar5 + 8) = puVar1[1];
  *(undefined8 *)((long)puVar8 + lVar5) = uVar11;
  uVar2 = *(undefined4 *)(lVar4 + 0xc + lVar3);
  FUN_1008e3970("PTIAHOST","vm",0,"_ptiDisablePD3Compatibility (req=%u)",uVar2);
  uVar11 = DAT_1011c3650;
  switch(uVar2) {
  case 1:
    uVar9 = *(uint *)(DAT_1011c3698 + 0xaf0);
    goto LAB_10002a445;
  case 2:
    uVar9 = 0;
    if (*(int *)(DAT_1011c3698 + 0xaf0) == 0xfffffff) goto LAB_10002a445;
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    pcVar10 = "level2";
    goto LAB_10002a425;
  case 3:
    local_48 = (void *)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_10002ddb0(local_98,&local_68);
    FUN_10006a5d0(local_80,local_98);
    FUN_1000648b0(uVar11,0x80001005,&local_48,local_80);
    FUN_10006a680(local_80);
    FUN_10002d9d0(local_98);
    FUN_10002d9d0(&local_68);
    uVar9 = 0xffffffff;
    if (local_48 != (void *)0x0) {
      if (pvStack_40 != local_48) {
        pvStack_40 = (void *)((~((long)pvStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU) +
                             (long)pvStack_40);
      }
      operator_delete(local_48);
    }
    goto LAB_10002a445;
  case 4:
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_a8 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_c0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_c0 = plVar7;
    }
    FUN_100063770(uVar11,0x18a88,0,&local_b8,0xbbb,&local_c0);
    if (local_c0 != (long *)0x0) {
      LOCK();
      plVar7 = local_c0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (local_b8 != (void *)0x0) {
      if (pvStack_b0 != local_b8) {
        pvStack_b0 = (void *)((~((long)pvStack_b0 + (-8 - (long)local_b8)) & 0xfffffffffffffff8U) +
                             (long)pvStack_b0);
      }
      operator_delete(local_b8);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_INIT";
    break;
  case 5:
    local_d8 = (void *)0x0;
    pvStack_d0 = (void *)0x0;
    local_c8 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_e0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_e0 = plVar7;
    }
    FUN_100063770(uVar11,0x18a8a,0,&local_d8,0xbbb,&local_e0);
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar7 = local_e0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    if (local_d8 != (void *)0x0) {
      if (pvStack_d0 != local_d8) {
        pvStack_d0 = (void *)((~((long)pvStack_d0 + (-8 - (long)local_d8)) & 0xfffffffffffffff8U) +
                             (long)pvStack_d0);
      }
      operator_delete(local_d8);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_STAGE_1";
    break;
  case 6:
    local_f8 = (void *)0x0;
    pvStack_f0 = (void *)0x0;
    local_e8 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_100 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_100 = plVar7;
    }
    FUN_100063770(uVar11,0x18a8b,0,&local_f8,0xbbb,&local_100);
    if (local_100 != (long *)0x0) {
      LOCK();
      plVar7 = local_100 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_100 + 0x10))();
      }
    }
    if (local_f8 != (void *)0x0) {
      if (pvStack_f0 != local_f8) {
        pvStack_f0 = (void *)((~((long)pvStack_f0 + (-8 - (long)local_f8)) & 0xfffffffffffffff8U) +
                             (long)pvStack_f0);
      }
      operator_delete(local_f8);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_STAGE_2";
    break;
  case 7:
    local_118 = (void *)0x0;
    pvStack_110 = (void *)0x0;
    local_108 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_120 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_120 = plVar7;
    }
    FUN_100063770(uVar11,0x18a8c,0,&local_118,0xbbb,&local_120);
    if (local_120 != (long *)0x0) {
      LOCK();
      plVar7 = local_120 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_120 + 0x10))();
      }
    }
    if (local_118 != (void *)0x0) {
      if (pvStack_110 != local_118) {
        pvStack_110 = (void *)((~((long)pvStack_110 + (-8 - (long)local_118)) & 0xfffffffffffffff8U)
                              + (long)pvStack_110);
      }
      operator_delete(local_118);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_STAGE_3";
    break;
  case 8:
    local_138 = (void *)0x0;
    pvStack_130 = (void *)0x0;
    local_128 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_140 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_140 = plVar7;
    }
    FUN_100063770(uVar11,0x18a8d,0,&local_138,0xbbb,&local_140);
    if (local_140 != (long *)0x0) {
      LOCK();
      plVar7 = local_140 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_140 + 0x10))();
      }
    }
    if (local_138 != (void *)0x0) {
      if (pvStack_130 != local_138) {
        pvStack_130 = (void *)((~((long)pvStack_130 + (-8 - (long)local_138)) & 0xfffffffffffffff8U)
                              + (long)pvStack_130);
      }
      operator_delete(local_138);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_COMPLETED";
    break;
  case 9:
    local_158 = (void *)0x0;
    pvStack_150 = (void *)0x0;
    local_148 = 0;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_160 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_160 = plVar7;
    }
    FUN_100063770(uVar11,0x18a8e,0,&local_158,0xbbb,&local_160);
    if (local_160 != (long *)0x0) {
      LOCK();
      plVar7 = local_160 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    if (local_158 != (void *)0x0) {
      if (pvStack_150 != local_158) {
        pvStack_150 = (void *)((~((long)pvStack_150 + (-8 - (long)local_158)) & 0xfffffffffffffff8U)
                              + (long)pvStack_150);
      }
      operator_delete(local_158);
    }
    pcVar10 = "PET_DSP_EVT_VM_UPGRADE_UNKNOWN_ERROR";
    break;
  case 10:
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    pcVar10 = "level1";
LAB_10002a425:
    uVar9 = FUN_1000943a0(uVar11,pcVar10);
    goto LAB_10002a445;
  case 0xb:
    bVar6 = FUN_1000b1e90(DAT_1011c3698,90000);
    uVar9 = (uint)bVar6;
    goto LAB_10002a445;
  default:
    FUN_1008e3970("PTIAHOST","vm",0,
                  "Unknown PTI_AGENT_CMD_DISABLE_PD3_COMPATIBILITY_MODE subcommand (%u)!",uVar2);
    uVar9 = 0xffffffff;
    goto LAB_10002a445;
  }
  uVar9 = 0;
  FUN_1008e3970("PTIAHOST","vm",0,pcVar10);
LAB_10002a445:
  *(uint *)(lVar5 + 0xc + (long)puVar8) = uVar9;
  return 0;
}

