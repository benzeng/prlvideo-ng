
undefined8
FUN_1002dcef0(long *param_1,byte param_2,undefined1 param_3,undefined2 param_4,undefined2 param_5)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  bVar1 = param_2 & 0x7f;
  if (bVar1 < 0x23) {
    if (bVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x88);
    }
    else if (bVar1 < 0x20) {
      if (bVar1 == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x80);
      }
      else {
        if (bVar1 != 2) {
          return 0x20;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
      }
    }
    else if (bVar1 == 0x20) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    }
    else {
      if (bVar1 != 0x21) {
        return 0x20;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
    }
  }
  else {
    if (bVar1 != 0x23) {
      return 0x20;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xa0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002dcf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

