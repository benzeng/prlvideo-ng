
undefined8
FUN_100c51150(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c4fc00(param_4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c51190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x18) + 0x18))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

