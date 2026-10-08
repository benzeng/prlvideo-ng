
/* WARNING: Removing unreachable block (ram,0x000100bf6f9b) */

undefined4 FUN_100bf6d20(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  puStack_50 = (undefined4 *)0x0;
  lVar4 = lVar1;
  if (DAT_1023160d8 == 0) {
    DAT_1023160d8 = FUN_100c608e0(FUN_100bf83f0,FUN_100bf8590);
    uVar6 = 0;
    if (DAT_1023160d8 == 0) goto LAB_100bf6fbd;
  }
  plVar2 = (long *)FUN_100bf8640(param_1);
  uVar6 = 0;
  if (plVar2 == (long *)0x0) goto LAB_100bf6fbd;
  puVar3 = (undefined4 *)FUN_100bf3540(0x10,"obj_dat.c",0x10e);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_100c62ee0(8,0x69,0x41,"obj_dat.c",0x12f);
  }
  else {
    if ((*(int *)((long)plVar2 + 0x14) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
LAB_100bf6dfd:
      if (((*plVar2 == 0) ||
          (puStack_50 = (undefined4 *)FUN_100bf3540(0x10,"obj_dat.c",0x117), puVar7 = puStack_50,
          puStack_50 != (undefined4 *)0x0)) &&
         ((plVar2[1] == 0 ||
          (local_48 = (undefined4 *)FUN_100bf3540(0x10,"obj_dat.c",0x11c), puVar7 = puStack_50,
          local_48 != (undefined4 *)0x0)))) {
        if (local_58 != (undefined4 *)0x0) {
          *local_58 = 0;
          *(long **)(local_58 + 2) = plVar2;
          lVar4 = FUN_100c60be0(DAT_1023160d8,local_58);
          if (lVar4 != 0) {
            FUN_100bf3910(lVar4);
          }
        }
        if (puStack_50 != (undefined4 *)0x0) {
          *puStack_50 = 1;
          *(long **)(puStack_50 + 2) = plVar2;
          lVar4 = FUN_100c60be0(DAT_1023160d8);
          if (lVar4 != 0) {
            FUN_100bf3910(lVar4);
          }
        }
        lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (local_48 != (undefined4 *)0x0) {
          *local_48 = 2;
          *(long **)(local_48 + 2) = plVar2;
          lVar5 = FUN_100c60be0(DAT_1023160d8);
          if (lVar5 != 0) {
            FUN_100bf3910(lVar5);
          }
        }
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 3;
          *(long **)(puVar3 + 2) = plVar2;
          lVar5 = FUN_100c60be0(DAT_1023160d8);
          if (lVar5 != 0) {
            FUN_100bf3910(lVar5);
          }
        }
        *(byte *)(plVar2 + 4) = *(byte *)(plVar2 + 4) & 0xf2;
        uVar6 = (undefined4)plVar2[2];
        goto LAB_100bf6fbd;
      }
    }
    else {
      local_58 = (undefined4 *)FUN_100bf3540(0x10,"obj_dat.c",0x112);
      puVar7 = (undefined4 *)0x0;
      if (local_58 != (undefined4 *)0x0) goto LAB_100bf6dfd;
    }
    FUN_100c62ee0(8,0x69,0x41,"obj_dat.c",0x12f);
    if (local_58 != (undefined4 *)0x0) {
      FUN_100bf3910(local_58);
    }
    if (puVar7 != (undefined4 *)0x0) {
      FUN_100bf3910(puVar7);
    }
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  uVar6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_100bf3910(puVar3);
  }
  if (plVar2 != (long *)0x0) {
    FUN_100bf3910(plVar2);
  }
LAB_100bf6fbd:
  if (lVar4 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

