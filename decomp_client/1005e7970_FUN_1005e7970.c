
void FUN_1005e7970(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f4640;
  FUN_100252c80(param_1 + 0x68);
  FUN_100252e70(param_1 + 0x10);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

