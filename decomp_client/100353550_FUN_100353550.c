
void FUN_100353550(undefined8 *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1003535c0(param_1);
  return;
}

