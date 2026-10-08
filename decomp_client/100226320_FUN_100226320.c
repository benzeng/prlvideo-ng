
void FUN_100226320(long *param_1,int param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t access vm desktop instance");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = -0x7ffffff7;
  }
  else {
    lVar1 = FUN_100225db0(param_1);
    if ((param_2 < 0) && (lVar1 != 0)) {
      QWidget::close();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002263a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

