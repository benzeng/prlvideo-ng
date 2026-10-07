
undefined8
FUN_1005b34b0(long *param_1,uint param_2,undefined8 param_3,byte *param_4,undefined1 *param_5)

{
  long lVar1;
  ulong uVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_5 = 0;
  local_38 = lVar1;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      local_40 = param_1[3];
      local_48 = param_1[2];
      local_58 = *param_1;
      local_50 = param_1[1];
      if (((int)local_50 == *(int *)(param_4 + 8)) && ((*param_4 & (byte)local_48) != 0)) {
        local_58 = local_58 * *(long *)(param_4 + 0x18);
        FUN_1005b56f0(*(undefined8 *)(param_4 + 0x10),&local_58);
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 4;
    } while (uVar2 < param_2);
    lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar1 == local_38) {
    return CONCAT71((int7)((ulong)lVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

