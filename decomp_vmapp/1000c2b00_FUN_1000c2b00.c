
void FUN_1000c2b00(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x70;
  QSemaphore::acquire(iVar1);
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  QSemaphore::release(iVar1);
  return;
}

