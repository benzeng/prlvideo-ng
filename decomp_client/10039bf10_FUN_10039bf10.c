
void FUN_10039bf10(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f1ad0;
  QTimer::~QTimer((QTimer *)(param_1 + 0x48));
  QImage::~QImage((QImage *)(param_1 + 0x18));
  FUN_10039bce0(param_1 + 0x10);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

