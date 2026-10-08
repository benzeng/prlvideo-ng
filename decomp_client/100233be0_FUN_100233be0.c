
void FUN_100233be0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_20 [2];
  
  if (param_2 == -0x7fffffea) {
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      iVar1 = FUN_100319b00();
      local_20[0] = (int)param_1[10];
      if (iVar1 != local_20[0]) {
        local_20[1] = 0;
        FUN_1002394f0(param_1 + 9,local_20);
        goto LAB_100233c3c;
      }
    }
  }
  else if (-1 < param_2) {
LAB_100233c3c:
    FUN_100231550(param_1);
    return;
  }
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    uVar2 = FUN_100319cb0();
    FUN_100334ca0(uVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000100233c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

