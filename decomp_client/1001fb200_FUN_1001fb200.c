
void FUN_1001fb200(long *param_1,int param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  lVar1 = param_1[3];
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is invalid.");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    param_2 = -0x7ffffff7;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + -1;
    if (-1 < param_2) {
      lVar2 = 0;
      if (*(int *)(lVar1 + 4) != 0) {
        lVar2 = param_1[4];
      }
      FUN_1001766c0(lVar2);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001fb283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

