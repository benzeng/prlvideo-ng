
undefined8 FUN_10026e630(void)

{
  CTaskCreateProblemReport *this;
  void *pvVar1;
  undefined1 local_70 [56];
  QString local_38 [3];
  
  FUN_1001cda40(local_70,DAT_102310918);
  this = operator_new(0x98);
  CTaskCreateProblemReport::CTaskCreateProblemReport(this,local_38);
  pvVar1 = operator_new(0x18);
  FUN_10019c1a0(pvVar1,this);
  CTaskCreateProblemReport::setDelegate((CProblemReportDelegate *)this);
  CAbstractTask::executeAndWait();
  FUN_1001091d0(local_70);
  return 0;
}

