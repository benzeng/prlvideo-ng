
void FUN_100349620(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d360;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = (QObject)0x0;
  param_1[0x31] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  QDateTime::setMSecsSinceEpoch((longlong)(param_1 + 0x20));
  FUN_100349710(param_1);
  FUN_100349bf0(param_1);
  FUN_100349e20(param_1);
  return;
}

