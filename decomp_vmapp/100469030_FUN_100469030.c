
void FUN_100469030(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 3) {
    FUN_1004683f0(param_1);
    QMutex::lock();
    lVar1 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    QMutex::unlock();
    if (lVar1 != 0) {
      FUN_1004c07d0(param_1 + 0x10,lVar1,0xf000001c);
      return;
    }
  }
  return;
}

