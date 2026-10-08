
void FUN_1007e4d70(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f7d60;
  *(QObject **)(param_1 + 0x10) = param_2;
  QTimeLine::QTimeLine((QTimeLine *)(param_1 + 0x48),1000,(QObject *)0x0);
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

