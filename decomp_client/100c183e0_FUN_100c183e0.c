
void FUN_100c183e0(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  uint local_28;
  uint local_24;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = (uint)param_1[3] |
             (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
  local_24 = (uint)param_1[7] |
             (uint)param_1[6] << 8 | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18;
  local_20 = lVar1;
  if (param_4 == 0) {
    FUN_100c18860(&local_28,param_3);
  }
  else {
    FUN_100c184a0();
  }
  *param_2 = (char)(local_28 >> 0x18);
  param_2[1] = (char)(local_28 >> 0x10);
  param_2[2] = (char)(local_28 >> 8);
  param_2[3] = (char)local_28;
  param_2[4] = (char)(local_24 >> 0x18);
  param_2[5] = (char)(local_24 >> 0x10);
  param_2[6] = (char)(local_24 >> 8);
  param_2[7] = (char)local_24;
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

