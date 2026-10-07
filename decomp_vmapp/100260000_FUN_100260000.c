
void FUN_100260000(long *param_1)

{
  uint uVar1;
  undefined1 local_40 [24];
  
  QMutex::lock();
  if (param_1[0x15] != 0) {
    do {
      while( true ) {
        LOCK();
        uVar1 = *(uint *)(param_1[0x14] + 0x1c);
        *(uint *)(param_1[0x14] + 0x1c) = 0;
        UNLOCK();
        if (uVar1 == 0) break;
        if ((uVar1 & 1) != 0) {
          FUN_1002601a0(param_1);
        }
        if ((uVar1 & 0xe) != 0) {
          (**(code **)(*param_1 + 0x88))(param_1,local_40);
          (**(code **)(*(long *)param_1[0x15] + 0x28))((long *)param_1[0x15],local_40);
          if ((uVar1 & 4) != 0) {
            (**(code **)(*(long *)param_1[0x15] + 0x20))((long *)param_1[0x15],local_40);
            (**(code **)(*param_1 + 0x90))(param_1,local_40);
          }
        }
      }
      FUN_1002ef6b0(param_1[8]);
    } while (*(int *)(param_1[0x14] + 0x1c) != 0);
  }
  QMutex::unlock();
  return;
}

