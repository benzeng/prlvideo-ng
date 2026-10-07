
undefined8 FUN_1008b7280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_140;
  undefined1 *local_f0 [23];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = 0;
  uVar3 = 0;
  local_38 = lVar1;
  if (param_1 != 0) {
    local_f0[0] = local_158;
    local_150 = param_3;
    local_140 = param_2;
    iVar2 = FUN_100885600(param_1);
    uVar3 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_100885620(param_1,iVar4);
        iVar2 = FUN_1008b6b00(uVar3,local_f0);
        if (iVar2 == 0) break;
        iVar4 = iVar4 + 1;
        iVar2 = FUN_100885600(param_1);
        uVar3 = 0;
      } while (iVar4 < iVar2);
    }
  }
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

