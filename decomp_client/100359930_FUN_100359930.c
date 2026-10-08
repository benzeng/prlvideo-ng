
void FUN_100359930(QObject *param_1,QObject *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d810;
  lVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(long *)(param_1 + 0x10) = lVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = (QObject)0x1;
  param_1[0x31] = (QObject)0x0;
  param_1[0x32] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  pQVar3 = (QObject *)0x0;
  if ((lVar1 != 0) && (pQVar3 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar3 = param_2;
  }
  uVar2 = FUN_100319390(pQVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  FUN_10035a890("CrystalIndicator::Indicators",0,0);
  FUN_100359a40(param_1);
  return;
}

