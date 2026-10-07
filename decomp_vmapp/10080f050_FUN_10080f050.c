
undefined8 FUN_10080f050(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0xf) {
    *(undefined8 *)(param_1 + 0x98) = param_3;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010080f073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0xd8))();
  return uVar1;
}

