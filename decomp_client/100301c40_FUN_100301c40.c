
void FUN_100301c40(CMessageProcessor *param_1,QObject *param_2)

{
  void *pvVar1;
  Connection local_28 [8];
  
  CMessageProcessor::CMessageProcessor(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220b440;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_28,DAT_1023108e0,
                   "2vmPrimaryDisplayViewModeChanged( const QString&, GUI::VmDisplayViewMode , GUI::VmDisplayViewMode )"
                   ,param_1,
                   "1onVmPrimaryDisplayViewModeChanged( const QString&, GUI::VmDisplayViewMode , GUI::VmDisplayViewMode )"
                   ,0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

