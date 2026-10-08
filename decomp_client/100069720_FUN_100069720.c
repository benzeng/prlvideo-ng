
void FUN_100069720(QObject *param_1)

{
  *(undefined **)param_1 = &DAT_10226c5a0;
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x10),PTR_s_release_1022699b8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_release_1022699b8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x20),PTR_s_release_1022699b8);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

