
undefined8 FUN_1001e5790(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  pthread_t local_30;
  
  uVar2 = 0x80000009;
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    QMutex::lock();
    cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x18);
    QMutex::unlock();
    if (cVar1 == '\0') {
      uVar2 = 0;
      _pthread_create(&local_30,(pthread_attr_t *)0x0,(void **)FUN_1001e4b70,
                      *(void **)(param_1 + 0x10));
      _pthread_detach(local_30);
    }
  }
  return uVar2;
}

