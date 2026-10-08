
void FUN_1002eae00(QObject *param_1)

{
  char cVar1;
  int iVar2;
  QObject *pQVar3;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 0) {
    return;
  }
  if (DAT_1023109b0 == (QObject *)0x0) {
    pQVar3 = operator_new(0x20);
    FUN_100751470(pQVar3);
    DAT_102271388 = 1;
    DAT_1023109b0 = pQVar3;
  }
  cVar1 = FUN_1007516b0(DAT_1023109b0);
  if (cVar1 != '\0') {
    if (DAT_1023109b0 == (QObject *)0x0) {
      pQVar3 = operator_new(0x20);
      FUN_100751470(pQVar3);
      DAT_102271388 = 1;
      DAT_1023109b0 = pQVar3;
    }
    QObject::disconnect(DAT_1023109b0,"2searchFinished()",param_1,"1onThirdPartyVmSearchFinished()")
    ;
    if (DAT_1023109b0 == (QObject *)0x0) {
      pQVar3 = operator_new(0x20);
      FUN_100751470(pQVar3);
      DAT_102271388 = 1;
      DAT_1023109b0 = pQVar3;
    }
    FUN_100751670(DAT_1023109b0);
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Notice: Stopped external VM search by timeout");
                    /* WARNING: Could not recover jumptable at 0x0001002eaf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}

