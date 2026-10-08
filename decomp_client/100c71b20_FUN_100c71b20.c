
undefined8 FUN_100c71b20(long *param_1,char *param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_100c62ee0(6,0x96,0x93,"pmeth_lib.c",0x19b);
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = _strcmp(param_2,"digest");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c71b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return uVar2;
    }
    if (param_3 != 0) {
      lVar3 = FUN_100c6bd60(param_3);
      if (lVar3 != 0) {
        uVar2 = FUN_100c71a40(param_1,0xffffffff,0xf8,1,0,lVar3);
        return uVar2;
      }
    }
    FUN_100c62ee0(6,0x96,0x98,"pmeth_lib.c",0x1a1);
    uVar2 = 0;
  }
  return uVar2;
}

