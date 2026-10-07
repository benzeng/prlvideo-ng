
void FUN_100598840(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = 0;
  local_28 = lVar1;
  FUN_1007d6870(&local_38);
  *(undefined8 *)(param_1 + 3) = local_30;
  *(undefined8 *)(param_1 + 1) = local_38;
  param_1[5] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffffffff;
  FUN_1007d6870(&local_48);
  *(undefined8 *)(param_1 + 0x10) = local_40;
  *(undefined8 *)(param_1 + 0xe) = local_48;
  if (*(long *)(param_1 + 0x16) != 0) {
    lVar2 = *(long *)(param_1 + 0x12);
    plVar3 = *(long **)(param_1 + 0x14);
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x16) = 0;
    while (plVar3 != (long *)(param_1 + 0x12)) {
      plVar5 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar5;
    }
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

