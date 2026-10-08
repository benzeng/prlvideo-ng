
void FUN_100c4c500(long param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0x50);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c4c54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_2 < 0x800) {
    uVar2 = FUN_100c6ca00();
  }
  else {
    uVar2 = FUN_100c6ca20();
  }
  iVar1 = FUN_100c6fc50(uVar2);
  FUN_100c4c5c0(param_1,(long)param_2,(long)(iVar1 << 3),uVar2,param_3,(long)param_4,0,param_5,
                param_6,param_7);
  return;
}

