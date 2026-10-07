
undefined4 FUN_1005f20f0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  QMutex::lock();
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar1 == 0)) {
    uVar3 = 0;
    FUN_1008e3970("","vdisk",0,"Error: current snapshot is invalid!");
  }
  else {
    uVar2 = *(int *)(lVar1 + 0x240) - 0x5a;
    if (uVar2 < 4) {
      uVar3 = *(undefined4 *)(&DAT_100b477c0 + (long)(int)uVar2 * 4);
    }
    else {
      uVar3 = 0;
      FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u");
    }
  }
  QMutex::unlock();
  return uVar3;
}

