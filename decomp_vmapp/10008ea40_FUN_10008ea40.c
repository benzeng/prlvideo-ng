
void FUN_10008ea40(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100ba8780;
  if (param_1[0x80] != (QThread)0x0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","!m_bRun","StateMachine.cpp",0x3b,
                  "~CStateMachine");
  }
  FUN_100090690(param_1);
  QThread::wait((ulong)param_1);
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xb8));
  QMutex::~QMutex((QMutex *)(param_1 + 0xb0));
  QThread::~QThread(param_1);
  return;
}

