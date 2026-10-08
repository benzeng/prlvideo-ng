
void FUN_1002ead90(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server object is null");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000009;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eadf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

