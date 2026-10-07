
undefined8 FUN_100892660(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(long *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100892692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar1;
  }
  FUN_10087da20(param_1,param_3,0x80);
  uVar1 = FUN_1008219f0(*param_2);
  FUN_100880ec0(param_1,"%s algorithm \"%s\" unsupported\n","Parameters",uVar1);
  return 1;
}

