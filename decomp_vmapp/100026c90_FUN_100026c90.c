
byte FUN_100026c90(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  if ((*(int *)(param_1 + 0x24) == 2) && (*(int *)(param_1 + 0x18) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x20) & 1 ^ 3;
  }
  else {
    local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
    uVar2 = FUN_10002f520();
    bVar1 = FUN_10002e820(uVar2,&local_20);
    bVar1 = bVar1 ^ 1;
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return bVar1;
        }
        local_12 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return bVar1;
}

