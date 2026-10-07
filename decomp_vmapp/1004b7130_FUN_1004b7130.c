
void FUN_1004b7130(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  QMutex::lock();
  FUN_1004bdc30(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4,param_5,param_6,param_7,
                param_8);
  QMutex::unlock();
  return;
}

