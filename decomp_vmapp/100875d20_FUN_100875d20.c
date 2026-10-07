
undefined8 FUN_100875d20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100874a00(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100875d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(lVar1 + 0x18) + 8))(param_1,param_2,0,0,param_3);
    return uVar2;
  }
  return 0;
}

