
undefined8 FUN_100caa320(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100caa331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  FUN_100c62ee0(0xe,0x6e,0x69,"conf_lib.c",0x11e);
  return 0;
}

