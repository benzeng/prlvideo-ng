
undefined8 FUN_100c36e10(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c36e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  FUN_100c62ee0(0x10,0xac,0x42,"ec_lib.c",0x1a5);
  return 0;
}

