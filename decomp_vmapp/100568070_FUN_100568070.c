
bool FUN_100568070(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = QThread::currentThread();
  return lVar1 == lVar2;
}

