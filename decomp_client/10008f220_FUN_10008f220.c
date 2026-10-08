
void FUN_10008f220(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long local_20;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_CMacShortcutRecognizerEventsObserver_10226aa78,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_initWithRecognizer__10226a238,param_1);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  (*(code *)puVar1)(uVar2,PTR_s_installObservers_10226a240);
  QObject::connect(&local_20,param_1 + 0x20,"2timeout()",param_1,
                   "1onWaitForKeyboardInputSourceChangeTimeout()",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  return;
}

