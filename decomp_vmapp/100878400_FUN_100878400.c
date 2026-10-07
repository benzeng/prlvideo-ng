
undefined8
FUN_100878400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100877da0(param_4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010087844f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x18) + 8))(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

