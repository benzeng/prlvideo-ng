
undefined8 FUN_100c71ff0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if ((int)param_1[4] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x000100c72011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_100c62ee0(6,0x8e,0x97,"pmeth_fn.c",0x90);
    return 0xffffffff;
  }
  FUN_100c62ee0(6,0x8e,0x96,"pmeth_fn.c",0x8c);
  return 0xfffffffe;
}

