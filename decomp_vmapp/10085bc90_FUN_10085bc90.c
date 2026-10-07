
undefined8 FUN_10085bc90(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010085bca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x40))();
    return uVar1;
  }
  FUN_100887ce0(0x10,0xab,0x42,"ec_lib.c",0x1b9);
  return 0;
}

