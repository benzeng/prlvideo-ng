
void FUN_10007bba0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021ed9d0;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_release_1022699b8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x20),PTR_s_release_1022699b8);
  QObject::~QObject(param_1);
  return;
}

