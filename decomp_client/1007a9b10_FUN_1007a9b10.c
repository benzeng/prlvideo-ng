
void FUN_1007a9b10(QLabel *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_1021f7610;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f77c0;
  DAT_1023109f8 = 0;
  FUN_1007a1cf0(param_1 + 0x48);
  if (*(int *)(param_1 + 0x34) != 0) {
    QBasicTimer::stop();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    QBasicTimer::stop();
  }
  QLabel::~QLabel(param_1);
  return;
}

