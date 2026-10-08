
undefined8 FUN_100c378f0(long *param_1,ulong param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x3df;
LAB_100c3795f:
    FUN_100c62ee0(0x10,0x88,uVar1,"ec_lib.c",uVar2);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 != **(long **)(param_3 + uVar3 * 8)) {
        uVar1 = 0x65;
        uVar2 = 0x3e4;
        goto LAB_100c3795f;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100c37922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

