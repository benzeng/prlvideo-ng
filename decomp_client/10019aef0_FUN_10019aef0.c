
void FUN_10019aef0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021fd540;
  if (*(long *)(param_1 + 0x10) != 0) {
    _PrlHandle_Free();
  }
  QObject::~QObject(param_1);
  return;
}

