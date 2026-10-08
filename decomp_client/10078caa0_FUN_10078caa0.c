
void FUN_10078caa0(undefined8 *param_1,undefined8 param_2,QObject *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1021f7380;
  param_1[1] = param_2;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  param_1[2] = uVar1;
  param_1[3] = param_3;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

