
void FUN_10008f160(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021ee0f0;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeObservers_10226a230);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x40),PTR_s_release_1022699b8);
  QTimer::~QTimer((QTimer *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

