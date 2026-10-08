
undefined8 FUN_100c6d960(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(long *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 4) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c6d98f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar1;
  }
  FUN_100c58c20(param_1,param_3,0x80);
  uVar1 = FUN_100bf7160(*param_2);
  FUN_100c5c0c0(param_1,"%s algorithm \"%s\" unsupported\n","Public Key",uVar1);
  return 1;
}

