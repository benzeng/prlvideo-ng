
void FUN_100243d10(QObject *param_1,int param_2)

{
  QTimer *this;
  long lVar1;
  Connection local_30 [8];
  
  if ((*(long *)(param_1 + 0x30) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x30) + 0x10))) {
    QTimer::stop();
  }
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      this = operator_new(0x20);
      QTimer::QTimer(this,param_1);
      *(QTimer **)(param_1 + 0x30) = this;
      (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
      QObject::connect(local_30,this,"2timeout()",param_1,"1onUpgradeEventWaitTimeout()",0);
      QMetaObject::Connection::~Connection(local_30);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    QTimer::setInterval((int)lVar1);
    QTimer::start();
  }
  return;
}

