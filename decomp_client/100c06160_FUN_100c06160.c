
void FUN_100c06160(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = lVar1;
  if (param_6 == 0) {
    FUN_100c09f80(&local_30,param_3,param_4,param_5);
  }
  else {
    FUN_100c09e60();
  }
  *param_2 = (char)local_30;
  param_2[1] = (char)((uint)local_30 >> 8);
  param_2[2] = (char)((uint)local_30 >> 0x10);
  param_2[3] = (char)((uint)local_30 >> 0x18);
  param_2[4] = (char)local_2c;
  param_2[5] = (char)((uint)local_2c >> 8);
  param_2[6] = (char)((uint)local_2c >> 0x10);
  param_2[7] = (char)((uint)local_2c >> 0x18);
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

