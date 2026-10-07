
void FUN_10051e9d0(long param_1,int param_2)

{
  long lVar1;
  long local_20;
  
  if (param_2 == 3) {
    LOCK();
    lVar1 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      FUN_1004c07d0(param_1 + 0x10,lVar1,0xf0000020);
    }
    local_20 = param_1 + 0x40;
    FUN_1007eaef0();
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_1007eaf10(&local_20);
    if (lVar1 != 0) {
      FUN_1004c07d0(param_1 + 0x10,lVar1,0xf0000020);
    }
    FUN_1007eaf10(&local_20);
  }
  return;
}

