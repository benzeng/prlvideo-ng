
undefined8 FUN_10085bb90(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010085bba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  FUN_100887ce0(0x10,0x82,0x42,"ec_lib.c",0x18e);
  return 0;
}

