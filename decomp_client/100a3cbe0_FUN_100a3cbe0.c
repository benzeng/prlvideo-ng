
void FUN_100a3cbe0(long param_1,undefined8 *param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    QMutex::lock();
    FUN_100a3caf0(param_1,0,*param_2,0,1);
    FUN_100a3caf0(param_1,1,*param_2,0,1);
    FUN_100a3caf0(param_1,2,*param_2,0,1);
    FUN_100a3caf0(param_1,3,*param_2,0,1);
    FUN_100a3caf0(param_1,4,*param_2,0,1);
    FUN_100a3caf0(param_1,5,*param_2,0,1);
    FUN_100a40410((long *)(param_1 + 0x60),param_2);
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x14) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    QMutex::unlock();
    return;
  }
  return;
}

