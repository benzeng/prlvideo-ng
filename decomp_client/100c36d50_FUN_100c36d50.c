
undefined8 FUN_100c36d50(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c36d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  FUN_100c62ee0(0x10,0x6d,0x42,"ec_lib.c",0x184);
  return 0;
}

