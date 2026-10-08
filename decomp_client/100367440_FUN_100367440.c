
void FUN_100367440(QObject *param_1,undefined8 param_2,QObject *param_3,QObject *param_4)

{
  undefined8 uVar1;
  QObject *pQVar2;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10220de70;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  pQVar2 = (QObject *)QScrollArea::widget();
  QObject::installEventFilter(pQVar2);
  FUN_100367520(param_1);
  return;
}

