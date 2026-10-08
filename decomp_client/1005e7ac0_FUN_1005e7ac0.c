
void FUN_1005e7ac0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  char cVar1;
  void *pvVar2;
  QTimer *this;
  undefined1 auVar3 [16];
  long local_38;
  long local_30 [2];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f47c0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar2 = operator_new(0x10);
  FUN_10073fe30(pvVar2,param_1);
  *(void **)(param_1 + 0x18) = pvVar2;
  param_1[0x20] = (QObject)0x0;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar3;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x38) = this;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  QObject::connect(local_30,*(undefined8 *)(param_1 + 0x18),
                   "2purchaseResultReceived(int, const PurchaseResultHash&)",param_1,
                   "1onPurchaseResultReceived(int, const PurchaseResultHash&)",0);
  if (local_30[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x38),"2timeout()",param_1,
                   "1onPurchaseCompletionTimeout()",0);
  if ((cVar1 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

