
undefined8
FUN_100896b70(long *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x68), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_100887ce0(6,0x90,0x96,"pmeth_fn.c",0xad);
    uVar3 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x20) {
    if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_100896c69:
                    /* WARNING: Could not recover jumptable at 0x000100896c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
    iVar2 = FUN_100891d80(param_1[2]);
    if (param_2 == 0) {
      *param_3 = (long)iVar2;
      uVar3 = 1;
    }
    else {
      if ((ulong)(long)iVar2 <= *param_3) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
        goto LAB_100896c69;
      }
      FUN_100887ce0(6,0x90,0x9b,"pmeth_fn.c",0xb4);
      uVar3 = 0;
    }
  }
  else {
    FUN_100887ce0(6,0x90,0x97,"pmeth_fn.c",0xb1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

