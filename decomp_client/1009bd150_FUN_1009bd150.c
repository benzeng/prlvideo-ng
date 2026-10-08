
void FUN_1009bd150(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102233900;
  FUN_100039a80(param_1 + 0x40);
  FUN_1000f1b80(param_1 + 0x18);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

