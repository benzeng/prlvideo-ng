
void FUN_100a678c0(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022391b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239230;
  FUN_100a4a070(param_1 + 0x10);
  QTimer::~QTimer((QTimer *)(param_1 + 0x28));
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

