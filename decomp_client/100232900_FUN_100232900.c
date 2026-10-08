
void FUN_100232900(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    FUN_100231550(param_1);
    return;
  }
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    uVar1 = FUN_100319cb0();
    FUN_100334ca0(uVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000100232959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

