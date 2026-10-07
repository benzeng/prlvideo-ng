
void FUN_1003fae80(undefined4 *param_1,undefined8 *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_53;
  undefined8 local_4a;
  undefined8 local_42;
  undefined8 local_3a;
  undefined8 local_32;
  undefined8 local_2a;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_2 = 0x1000001de;
  *(undefined4 *)(param_2 + 1) = param_1[1];
  *(undefined4 *)((long)param_2 + 0xc) = *param_1;
  *(undefined4 *)(param_2 + 2) = param_1[2];
  param_2[3] = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)((long)param_2 + 0x74) = param_1[7];
  *(undefined4 *)(param_2 + 0xf) = param_1[8];
  *(undefined4 *)((long)param_2 + 100) = 1;
  local_20 = lVar1;
  FUN_10059e650(&local_68,param_1 + 0x1c,param_1 + 0x18,param_3);
  *(undefined8 *)((long)param_2 + 0x34) = local_53;
  *(undefined8 *)((long)param_2 + 0x5c) = local_2a;
  *(undefined8 *)((long)param_2 + 0x54) = local_32;
  *(undefined8 *)((long)param_2 + 0x4c) = local_3a;
  *(undefined8 *)((long)param_2 + 0x44) = local_42;
  *(undefined8 *)((long)param_2 + 0x3c) = local_4a;
  *(undefined4 *)(param_2 + 6) = local_58;
  param_2[5] = local_60;
  param_2[4] = local_68;
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

