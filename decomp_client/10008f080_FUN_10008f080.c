
void FUN_10008f080(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021ee0f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = (QObject)0x0;
  QTimer::QTimer((QTimer *)(param_1 + 0x20),(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

