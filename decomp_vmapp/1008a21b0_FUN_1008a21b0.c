
undefined8 FUN_1008a21b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x68) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = FUN_1008b7120(param_3);
    uVar2 = FUN_1008b6ee0(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001008a2207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1,uVar2);
    return uVar1;
  }
  return 0;
}

