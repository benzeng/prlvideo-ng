
void FUN_100696bb0(void)

{
  CProblemReportDelegate *pCVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pCVar1 = operator_new(0x98);
  uVar2 = FUN_100060bb0();
  uVar2 = FUN_1000609c0(uVar2);
  CTaskCreateProblemReport::CTaskCreateProblemReport((CTaskCreateProblemReport *)pCVar1,uVar2,1);
  pvVar3 = operator_new(0x18);
  FUN_10019c1a0(pvVar3,pCVar1);
  CTaskCreateProblemReport::setDelegate(pCVar1);
  CAbstractTask::execute();
  return;
}

