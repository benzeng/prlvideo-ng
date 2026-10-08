
void FUN_1007229f0(undefined8 *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1021f5d38;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  param_1[1] = uVar1;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}

