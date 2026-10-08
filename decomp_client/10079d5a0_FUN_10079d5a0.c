
void FUN_10079d5a0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10222c6b0;
  if (*(long *)(param_1 + 0x158) != 0) {
    _PrlHandle_Free();
  }
  CAppliance::~CAppliance((CAppliance *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

