
void FUN_1005251d0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  switch(param_2) {
  case 1:
    FUN_1005253a0(param_1,local_24,4);
    break;
  case 2:
    uVar2 = 0x103;
    goto LAB_100525267;
  case 3:
    QMutex::lock();
    lVar1 = *(long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    QMutex::unlock();
    if (lVar1 != 0) {
      FUN_1004c07d0(param_1,lVar1,0xf0000020);
    }
    break;
  case 4:
    uVar2 = 0x101;
LAB_100525267:
    FUN_100524fb0(param_1,uVar2,0,0);
    return;
  }
  return;
}

