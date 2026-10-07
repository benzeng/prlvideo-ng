
undefined8
FUN_10008fa90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined4 param_10,long *param_11,int param_12,uint param_13,
             undefined8 param_14)

{
  undefined8 uVar1;
  char in_AL;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  undefined8 local_108 [5];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  uint local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_38;
  
  uVar8 = (ulong)param_13;
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar3 = (undefined8 *)0x0;
  local_e0 = param_14;
  if (param_13 != 0) {
    puVar3 = operator_new__(uVar8 << 3,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar3 == (undefined8 *)0x0) {
      uVar9 = 0;
      FUN_1008e3970("","vm",0,"%s state(%s): command enqueuing failed. Invalid size of parameters",
                    param_9 + 0x81,**(undefined8 **)(param_9 + 0xa8));
      goto LAB_10008fd86;
    }
    local_48 = local_108;
    local_50 = (undefined8 *)&stack0x00000008;
    local_54 = 0x30;
    local_58 = 0x28;
    uVar2 = 0x28;
    puVar6 = puVar3;
    do {
      if (uVar2 < 0x29) {
        lVar10 = (long)(int)uVar2;
        uVar2 = uVar2 + 8;
        puVar11 = (undefined8 *)((long)local_48 + lVar10);
        local_58 = uVar2;
      }
      else {
        puVar11 = local_50;
        local_50 = local_50 + 1;
      }
      *puVar6 = *puVar11;
      puVar6 = puVar6 + 1;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar7;
    } while (uVar7 != 0);
  }
  plVar4 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar4 == (long *)0x0) {
    uVar9 = 0;
    FUN_1008e3970("","vm",0,"%s state(%s): command enqueuing failed. Not enough memory",
                  param_9 + 0x81,**(undefined8 **)(param_9 + 0xa8));
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
      uVar9 = 0;
    }
  }
  else {
    *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(param_9 + 0xa4);
    *(undefined4 *)((long)plVar4 + 0x14) = param_10;
    lVar10 = *param_11;
    plVar4[3] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    plVar4[4] = (long)PTR_shared_null_100ba20d0;
    *(uint *)(plVar4 + 5) = param_13;
    plVar4[6] = (long)puVar3;
    *(int *)(plVar4 + 7) = param_12;
    iVar13 = *(int *)(*(undefined8 **)(param_9 + 0xa8) + 6);
    if (param_12 <= iVar13) {
      param_12 = iVar13;
    }
    if ((param_12 % 0x10 < 1) || (param_12 % 0x10 <= DAT_1011b55f8)) {
      uVar1 = **(undefined8 **)(param_9 + 0xa8);
      iVar13 = *(int *)((long)plVar4 + 0x14);
      if ((ulong)*(uint *)(param_9 + 0x38) != 0) {
        uVar8 = 0;
        piVar12 = *(int **)(param_9 + 0x30);
        do {
          if (*piVar12 == iVar13) {
            uVar5 = *(undefined8 *)(*(int **)(param_9 + 0x30) + uVar8 * 4 + 2);
            goto LAB_10008fd12;
          }
          uVar8 = uVar8 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 < *(uint *)(param_9 + 0x38));
      }
      uVar5 = FUN_1007d5980();
      iVar13 = *(int *)((long)plVar4 + 0x14);
LAB_10008fd12:
      FUN_1008e3970("","vm",param_12,"%s state(%s): enqueued \'%s\'(%u) command",param_9 + 0x81,
                    uVar1,uVar5,iVar13);
    }
    QMutex::lock();
    puVar3 = *(undefined8 **)(param_9 + 0xd8);
    *(long **)(param_9 + 0xd8) = plVar4;
    *plVar4 = param_9 + 0xd0;
    plVar4[1] = (long)puVar3;
    *puVar3 = plVar4;
    QWaitCondition::wakeOne();
    QMutex::unlock();
    uVar9 = 1;
  }
LAB_10008fd86:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar9);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

