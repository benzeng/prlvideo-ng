
undefined1 FUN_100376de0(long *param_1,long param_2,char param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 local_1818 [2];
  long local_1810 [640];
  long local_410;
  long *local_408;
  long *local_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  long local_3c8;
  long local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined1 local_2b0 [8];
  undefined8 *local_2a8;
  void *local_2a0;
  undefined4 local_298;
  long local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined1 local_188 [8];
  undefined8 *local_180;
  void *local_178;
  undefined4 local_170;
  long local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_60 [8];
  undefined8 *local_58;
  void *local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *(long *)(param_2 + 0x618);
  local_38 = lVar8;
  if (lVar3 == 0) {
    uVar11 = 6;
    if (*param_1 != 0) {
      (*DAT_1011c6ee0)(0);
      plVar7 = (long *)*param_1;
      if (plVar7 != (long *)0x0) {
        piVar2 = (int *)((long)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      *param_1 = 0;
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0x620);
    lVar4 = *(long *)(param_2 + 0x628);
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    plVar7 = *(long **)(lVar3 + 0x10);
    if (plVar7 != (long *)0x0) {
      plVar1 = *(long **)(param_2 + 0x648);
      while (plVar1 != (long *)0x0) {
        if (((*(byte *)((long)plVar7 + 0x2d) & 2) == 0) &&
           ((*(long **)(param_2 + 0x648))[(ulong)*(byte *)((long)plVar7 + 0x2a) + 2] != 0)) {
          *(uint *)((long)param_1 + 0x1c) = (uint)*(byte *)((long)plVar7 + 0x2a);
          break;
        }
        plVar7 = (long *)*plVar7;
        plVar1 = plVar7;
      }
    }
    if (param_3 == '\0') {
      bVar9 = false;
    }
    else {
      bVar9 = *(long *)(param_2 + 0x650) == 0;
    }
    *(bool *)((long)param_1 + 0x19) = bVar9;
    bVar9 = false;
    lVar6 = FUN_100344150(param_2,0);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 8) == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = 1 < *(uint *)(*(long *)(lVar6 + 8) + 0x20);
      }
    }
    bVar10 = false;
    if ((!bVar9) && (bVar10 = false, *(long *)(param_2 + 0x18) != 0)) {
      bVar10 = *(int *)(*(long *)(param_2 + 0x18) + 4) != 0;
    }
    *(bool *)(param_1 + 3) = bVar10;
    local_60[0] = 0;
    local_58 = &local_160;
    local_50 = (void *)0x0;
    local_48 = 0x100;
    local_158 = 0;
    local_160 = 0x70009;
    *(undefined1 **)(lVar3 + 0x1b8) = local_60;
    local_188[0] = 0;
    local_180 = &local_288;
    local_178 = (void *)0x0;
    local_170 = 0x100;
    local_280 = 0;
    local_288 = 0x70009;
    if (lVar8 != 0) {
      *(undefined1 **)(lVar8 + 0x1b8) = local_188;
    }
    local_2b0[0] = 0;
    local_2a8 = &local_3b0;
    local_2a0 = (void *)0x0;
    local_298 = 0x100;
    local_3a8 = 0;
    local_3b0 = 0x70009;
    if (lVar4 != 0) {
      *(undefined1 **)(lVar4 + 0x1b8) = local_2b0;
    }
    local_290 = lVar4;
    local_168 = lVar8;
    local_40 = lVar3;
    lVar6 = FUN_100377460(param_1,param_2);
    if (lVar6 == 0) {
      local_1818[0] = 0x40;
      plVar7 = local_1810;
      local_408 = &local_410;
      do {
        *plVar7 = 0;
        plVar7[1] = (long)plVar7;
        plVar7[2] = (long)plVar7;
        plVar7[3] = (long)plVar7;
        plVar7[4] = (long)(plVar7 + 3);
        plVar7[5] = (long)(plVar7 + 3);
        plVar7[6] = (long)plVar7;
        plVar7[7] = (long)(plVar7 + 6);
        plVar7[8] = (long)(plVar7 + 6);
        *(undefined1 *)(plVar7 + 9) = 0;
        plVar1 = plVar7 + 10;
        plVar7[10] = 0;
        plVar7[0xb] = (long)plVar1;
        plVar7[0xc] = (long)plVar1;
        plVar7[0xd] = (long)plVar1;
        plVar7[0xe] = (long)(plVar7 + 0xd);
        plVar7[0xf] = (long)(plVar7 + 0xd);
        plVar7[0x10] = (long)plVar1;
        plVar7[0x11] = (long)(plVar7 + 0x10);
        plVar7[0x12] = (long)(plVar7 + 0x10);
        *(undefined1 *)(plVar7 + 0x13) = 0;
        plVar7 = plVar7 + 0x14;
      } while (plVar7 != local_408);
      local_410 = 0;
      local_3f0 = &local_3f8;
      local_3f8 = 0;
      local_3d8 = &local_3e0;
      local_3e0 = 0;
      local_400 = local_408;
      local_3e8 = local_3f0;
      local_3d0 = local_3d8;
      local_3c8 = lVar3;
      local_3c0 = lVar8;
      local_3b8 = lVar4;
      FUN_1003b68b0(local_1818);
      lVar6 = FUN_100377770(param_1,param_2);
      plVar7 = local_408;
      while (lVar8 = *plVar7, lVar8 != 0) {
        while (lVar3 = **(long **)(lVar8 + 8), lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x80) = 0;
          lVar4 = *(long *)(lVar3 + 0x28);
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 0x20);
          *(long *)(*(long *)(lVar3 + 0x20) + 0x10) = lVar4;
          *(long *)(lVar3 + 0x20) = lVar3 + 0x18;
          *(long *)(lVar3 + 0x28) = lVar3 + 0x18;
        }
        plVar7 = *(long **)(lVar8 + 0x20);
      }
      while (pvVar5 = (void *)*local_3d8, pvVar5 != (void *)0x0) {
        lVar8 = *(long *)((long)pvVar5 + 0x40);
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)((long)pvVar5 + 0x38);
        *(long *)(*(long *)((long)pvVar5 + 0x38) + 0x10) = lVar8;
        operator_delete(pvVar5);
      }
    }
    if (lVar6 != *param_1) {
      if (lVar6 == 0) {
        (*DAT_1011c6ee0)(0);
      }
      else {
        *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
        FUN_10036d070(lVar6);
      }
      plVar7 = (long *)*param_1;
      if (plVar7 != (long *)0x0) {
        piVar2 = (int *)((long)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      *param_1 = lVar6;
    }
    uVar11 = *(int *)(lVar6 + 8) == 0;
    if (local_290 != 0) {
      *(undefined8 *)(local_290 + 0x1b8) = 0;
    }
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (local_2a0 != (void *)0x0) {
      operator_delete__(local_2a0);
    }
    if (local_168 != 0) {
      *(undefined8 *)(local_168 + 0x1b8) = 0;
    }
    if (local_178 != (void *)0x0) {
      operator_delete__(local_178);
    }
    if (local_40 != 0) {
      *(undefined8 *)(local_40 + 0x1b8) = 0;
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
  }
  if (lVar8 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

