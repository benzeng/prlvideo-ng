
QFutureInterfaceBase *
FUN_100333c30(QFutureInterfaceBase *param_1,QThreadPool *param_2,QRunnable *param_3)

{
  QFutureInterfaceBase::setThreadPool(param_2);
  QFutureInterfaceBase::setRunnable((QRunnable *)param_2);
  QFutureInterfaceBase::reportStarted();
  QFutureInterfaceBase::QFutureInterfaceBase(param_1,(QFutureInterfaceBase *)param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022737f0;
  QFutureInterfaceBase::refT();
  QThreadPool::start(param_3,(int)param_2 + 0x10);
  return param_1;
}

