
void FUN_1001d9080(undefined8 param_1,undefined8 param_2,int param_3)

{
  long in_RAX;
  CProblemReportDelegate *pCVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_28;
  
  if (param_3 == 2) {
    local_28 = in_RAX;
    pCVar1 = operator_new(0x98);
    uVar2 = FUN_100060bb0();
    uVar2 = FUN_1000609c0(uVar2);
    CTaskCreateProblemReport::CTaskCreateProblemReport((CTaskCreateProblemReport *)pCVar1,uVar2,1);
    pvVar3 = operator_new(0x18);
    FUN_10019c1a0(pvVar3,pCVar1);
    CTaskCreateProblemReport::setDelegate(pCVar1);
    QObject::connect(&local_28,pCVar1,"2taskFinished(PRL_RESULT)",param_1,"1quitOnStartFailure()",0)
    ;
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractTask::execute();
    return;
  }
  FUN_100df99c0("[AppController]","prl_client_app",0,"(!)Error: login failed.");
  uVar2 = FUN_1001d50a0();
  FUN_1001d51e0(uVar2,0x80000249,1,0xffff);
  return;
}

