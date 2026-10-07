
void FUN_10082aea0(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = lVar1;
  FUN_10082c850(&local_28,param_3,param_4);
  *param_2 = (char)local_28;
  param_2[1] = (char)((uint)local_28 >> 8);
  param_2[2] = (char)((uint)local_28 >> 0x10);
  param_2[3] = (char)((uint)local_28 >> 0x18);
  param_2[4] = (char)local_24;
  param_2[5] = (char)((uint)local_24 >> 8);
  param_2[6] = (char)((uint)local_24 >> 0x10);
  param_2[7] = (char)((uint)local_24 >> 0x18);
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

