
undefined8 FUN_1002830c0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = (uint)*(byte *)(param_1[0x1a] + 4);
  if (*(uint *)param_1[0x1e] < (uint)*(byte *)(param_1[0x1a] + 4)) {
    uVar4 = *(uint *)param_1[0x1e];
  }
  local_30 = lVar1;
  if ((char)uVar4 != '\0') {
    if (1 < *(uint *)((long)param_1 + 0xec)) {
                    /* WARNING: Could not recover jumptable at 0x000100283148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
      return uVar2;
    }
    FUN_1004103f0(*(undefined4 *)((long)param_1 + 0x114),local_48,0x12,0);
    uVar3 = 0x12;
    if ((uVar4 & 0xff) < 0x12) {
      uVar3 = uVar4 & 0xff;
    }
    FUN_10008c9b0(DAT_1011c3688,*(undefined4 *)(param_1[0x1e] + 4),local_48,uVar3);
    *(undefined4 *)((long)param_1 + 0x114) = 0;
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

