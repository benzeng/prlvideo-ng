
void FUN_1005f5f70(int param_1)

{
  QSemaphore::acquire(param_1 + 0x28);
  QSemaphore::release(param_1 + 0x28);
  return;
}

