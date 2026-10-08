
void FUN_10036acd0(QObject *param_1,undefined8 param_2,undefined4 param_3,QObject *param_4,
                  QObject *param_5)

{
  undefined8 uVar1;
  QObject *pQVar2;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_10220e2c0;
  *(QObject **)(param_1 + 0x10) = param_5;
  uVar1 = FUN_100152280();
  pQVar2 = (QObject *)FUN_1001548f0(uVar1,param_2);
  uVar1 = 0;
  if (pQVar2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = pQVar2;
  uVar1 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  return;
}

