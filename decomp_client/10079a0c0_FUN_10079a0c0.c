
void FUN_10079a0c0(CContentProvider *param_1,undefined8 param_2,QObject *param_3,QObject *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = 0;
  CContentProvider::CContentProvider(param_1,param_4,(CContentModel *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222c520;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_3;
  pvVar2 = operator_new(0x48);
  FUN_100798f50(pvVar2,param_3,param_1);
  *(void **)(param_1 + 0x38) = pvVar2;
  return;
}

