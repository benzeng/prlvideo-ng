
undefined8 FUN_100c727f0(long *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xb8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_100c62ee0(6,0x99,0x96,"pmeth_fn.c",0x151);
    uVar3 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x400) {
    if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_100c728de:
                    /* WARNING: Could not recover jumptable at 0x000100c728f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return uVar3;
    }
    iVar2 = FUN_100c6d160(param_1[2]);
    if (param_2 == 0) {
      *param_3 = (long)iVar2;
      uVar3 = 1;
    }
    else {
      if ((ulong)(long)iVar2 <= *param_3) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb8);
        goto LAB_100c728de;
      }
      FUN_100c62ee0(6,0x99,0x9b,"pmeth_fn.c",0x158);
      uVar3 = 0;
    }
  }
  else {
    FUN_100c62ee0(6,0x99,0x97,"pmeth_fn.c",0x155);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

