
bool FUN_1004b1a30(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  void *pvVar1;
  bool bVar2;
  
  QMutex::lock();
  bVar2 = (*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2;
  if (bVar2) {
    pvVar1 = operator_new(0x18);
    *(undefined4 *)((long)pvVar1 + 4) = 2;
    *(undefined4 *)((long)pvVar1 + 8) = param_2;
    *(undefined4 *)((long)pvVar1 + 0xc) = param_3;
    *(undefined8 *)((long)pvVar1 + 0x10) = *param_4;
    FUN_1004ae8a0(param_1,pvVar1,param_1 + 0xb8,0);
  }
  QMutex::unlock();
  return bVar2;
}

