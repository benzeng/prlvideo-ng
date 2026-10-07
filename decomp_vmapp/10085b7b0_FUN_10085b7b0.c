
undefined8 FUN_10085b7b0(long *param_1,long *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x2d1;
  }
  else {
    if (*param_1 == *param_2) {
      if (param_1 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010085b813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      return 1;
    }
    uVar1 = 0x65;
    uVar2 = 0x2d5;
  }
  FUN_100887ce0(0x10,0x72,uVar1,"ec_lib.c",uVar2);
  return 0;
}

