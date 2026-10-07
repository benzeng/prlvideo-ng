
ulong FUN_100282cb0(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (1 < *(uint *)((long)param_1 + 0xec)) {
                    /* WARNING: Could not recover jumptable at 0x000100282d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    return uVar3;
  }
  uVar2 = FUN_100410570(param_1[0x1a],(char)param_1[0x1b],local_30,8,param_1[0x1f],
                        (char)param_1[0x20],param_1[0x59],param_1[0x32],param_1[0x32],0);
  if (0 < (int)uVar2) {
    FUN_10008c9b0(DAT_1011c3688,*(undefined4 *)(param_1[0x1e] + 4),local_30,8);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)(uVar2 >> 0x1e & 2);
}

