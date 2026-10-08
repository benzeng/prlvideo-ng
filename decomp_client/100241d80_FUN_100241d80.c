
void FUN_100241d80(QObject *param_1)

{
  QTimer *this;
  int iVar1;
  Connection local_28 [8];
  
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  }
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x50) = this;
  QObject::connect(local_28,this,"2timeout()",param_1,"1onIncrementProgress()",0);
  QMetaObject::Connection::~Connection(local_28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = (int)param_1;
  CAbstractTask::appendSubTask(iVar1);
  CAbstractTask::appendSubTask(iVar1);
  CAbstractTask::appendSubTask(iVar1);
  CAbstractTask::appendSubTask(iVar1);
  CAbstractTask::appendSubTask(iVar1);
  CAbstractTask::appendSubTask(iVar1);
  return;
}

