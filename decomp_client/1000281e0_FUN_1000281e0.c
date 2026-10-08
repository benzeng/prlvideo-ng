
void FUN_1000281e0(QObject *param_1)

{
  undefined *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102224740;
  FUN_100028260();
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(*(undefined8 *)(param_1 + 0x28));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

