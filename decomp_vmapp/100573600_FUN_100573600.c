
undefined8 FUN_100573600(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1007d6870(local_40);
  uVar3 = 0;
  if (*(undefined8 **)(param_1 + 0x1128) != *(undefined8 **)(param_1 + 0x1130)) {
    puVar2 = *(undefined8 **)(param_1 + 0x1128);
    do {
      puVar4 = puVar2 + 1;
      uVar3 = FUN_1005886b0(*puVar2,local_40);
      if ((int)uVar3 < 0) break;
      puVar2 = puVar4;
    } while (puVar4 != *(undefined8 **)(param_1 + 0x1130));
  }
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

