
undefined8 FUN_1001e4b70(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *param_1;
  QMutex::lock();
  cVar1 = *(char *)(*(long *)(lVar2 + 0x10) + 0x18);
  QMutex::unlock();
  if (cVar1 == '\0') {
    QMutex::lock();
    *(undefined1 *)(param_1 + 3) = 1;
    QMutex::unlock();
    FUN_1001e4c70(param_1);
    uVar3 = FUN_1001e6600();
    FUN_1001e50a0(param_1,9,uVar3);
    QMutex::lock();
    *(undefined1 *)(param_1 + 3) = 0;
    QMutex::unlock();
  }
  else {
    FUN_1001e4c70(param_1);
    uVar3 = FUN_1001e6600();
    FUN_1001e50a0(param_1,9,uVar3);
  }
  return 0;
}

