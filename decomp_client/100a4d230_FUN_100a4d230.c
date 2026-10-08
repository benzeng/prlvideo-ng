
void FUN_100a4d230(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102238530;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022385b0;
  FUN_100a4a070(param_1 + 0x10);
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

