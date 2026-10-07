
void FUN_10078dcd0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bcf5f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf700;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_100bcf728;
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_100bcf790;
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  FUN_10078e610(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

