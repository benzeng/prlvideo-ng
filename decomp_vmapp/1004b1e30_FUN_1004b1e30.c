
undefined8 FUN_1004b1e30(long param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  
  QMutex::lock();
  pvVar1 = operator_new(0x18);
  *(undefined4 *)((long)pvVar1 + 4) = 3;
  FUN_1004ae8a0(param_1,pvVar1,param_1 + 0x98,1);
  pvVar1 = operator_new(0x18);
  *(undefined4 *)((long)pvVar1 + 4) = 3;
  FUN_1004ae8a0(param_1,pvVar1,param_1 + 0xb8,1);
  if (*(long *)(param_1 + 0xd8) != 0) {
    lVar2 = FUN_1002a6010();
    *(undefined8 *)(lVar2 + 4) = 3;
    *(undefined4 *)(lVar2 + 0xc) = 0;
    FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(param_1 + 0xd8),0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(*(long *)(param_1 + 0xe8) + 0xc) != *(int *)(*(long *)(param_1 + 0xe8) + 8)) {
    do {
      lVar2 = FUN_1004d5c70((long *)(param_1 + 0xe8));
      if (lVar2 != 0) {
        FUN_1002a6010(lVar2);
        FUN_1004c07d0(param_1 + 0x10,lVar2,0);
      }
      lVar2 = *(long *)(param_1 + 0xe8);
    } while (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8));
  }
  FUN_1004b6cb0(*(undefined8 *)(param_1 + 0xf0),0);
  if (((param_2 & 0x4000000) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  QMutex::unlock();
  FUN_1004b3530(*(undefined8 *)(param_1 + 0xe0));
  return 0;
}

