
void FUN_10051ef20(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bc4bd0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc4c58;
  FUN_1007eaed0(param_1 + 0x40);
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

