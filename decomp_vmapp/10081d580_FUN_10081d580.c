
ulong FUN_10081d580(uint *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_1011c0630 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081d5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_1011c0630)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  FUN_10081d010(9,param_3,param_4,param_5);
  uVar1 = *param_1;
  *param_1 = param_2 + uVar1;
  FUN_10081d010(10,param_3,param_4,param_5);
  return (ulong)(param_2 + uVar1);
}

