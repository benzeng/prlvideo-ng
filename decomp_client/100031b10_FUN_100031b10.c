
void FUN_100031b10(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222e5a8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  (*(code *)PTR__objc_release_1021e1c70)(*(undefined8 *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

