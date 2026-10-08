
void FUN_100a1c610(undefined8 *param_1,undefined8 param_2,QObject *param_3,QVariant *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  auVar2 = FUN_100a1f530(param_3,param_2);
  *(undefined1 (*) [12])(param_1 + 2) = auVar2;
  QVariant::QVariant((QVariant *)(param_1 + 4),param_4);
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

