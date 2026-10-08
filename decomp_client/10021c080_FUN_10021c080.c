
void FUN_10021c080(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  QObject *param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100249ab0(param_1,param_2,0x3e9,param_4,0);
  *param_1 = &PTR_FUN_102201660;
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((long)param_1 + 0x4c) = param_6;
  if (param_5 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  param_1[10] = uVar1;
  param_1[0xb] = param_5;
  param_1[0xc] = PTR_shared_null_1021e12f0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}

