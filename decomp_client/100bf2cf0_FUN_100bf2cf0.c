
ulong FUN_100bf2cf0(uint *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_102316020 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_102316020)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  FUN_100bf2780(9,param_3,param_4,param_5);
  uVar1 = *param_1;
  *param_1 = param_2 + uVar1;
  FUN_100bf2780(10,param_3,param_4,param_5);
  return (ulong)(param_2 + uVar1);
}

