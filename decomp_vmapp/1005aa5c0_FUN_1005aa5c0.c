
undefined4 FUN_1005aa5c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}

