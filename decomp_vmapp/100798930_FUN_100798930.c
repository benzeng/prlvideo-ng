
void FUN_100798930(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bcf9a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcfb10;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_100bcfb98;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_100bcfc18;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_100bcfc40;
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
  }
  FUN_10078e610(param_1 + 0x20);
  QObject::~QObject(param_1);
  return;
}

