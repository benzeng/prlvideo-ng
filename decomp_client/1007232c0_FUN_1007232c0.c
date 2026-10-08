
void FUN_1007232c0(undefined8 *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4)

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
  *param_1 = &PTR_FUN_102274b70;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[5] = param_3;
  FUN_100724ca0("CAppShortcutData*",0,0);
  return;
}

