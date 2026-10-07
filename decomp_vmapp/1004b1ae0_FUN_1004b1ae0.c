
bool FUN_1004b1ae0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  
  QMutex::lock();
  bVar2 = (*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2;
  if (bVar2) {
    puVar1 = operator_new(0x18);
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 4) = 4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    FUN_1004ae8a0(param_1,puVar1,param_1 + 0xb8,0);
  }
  QMutex::unlock();
  return bVar2;
}

