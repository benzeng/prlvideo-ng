
undefined8 FUN_1004668d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004668ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x18))
                      (param_2 + 8,param_2 + 0x18,*(undefined8 *)(param_1 + 0x20));
    return uVar1;
  }
  return 0xfffffffb;
}

