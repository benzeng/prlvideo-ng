
void FUN_10005de00(QObject *param_1)

{
  *(undefined **)param_1 = &DAT_1021ed4f0;
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_release_1022699b8);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

