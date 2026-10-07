
undefined8 FUN_100042ed0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long local_38;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x160) == param_2) {
    _free(*(void **)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    QMutex::unlock();
    uVar4 = 0xf0000000;
  }
  else {
    QMutex::unlock();
    local_38 = param_2;
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x88));
    iVar3 = FUN_100046530(param_1 + 0x80,&local_38);
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x88));
    uVar4 = 0xf0000000;
    if (iVar3 == 0) {
      QMutex::lock();
      if (*(long *)(param_1 + 0x180) == param_2) {
        *(undefined8 *)(param_1 + 0x180) = 0;
        puVar2 = *(undefined4 **)(param_1 + 0x188);
        *(undefined8 *)(param_1 + 0x188) = 0;
        uVar1 = *(undefined4 *)(param_1 + 400);
        QMutex::unlock();
        *puVar2 = 0x65;
        FUN_100043070(param_1,puVar2,uVar1);
        _free(puVar2);
      }
      else {
        QMutex::unlock();
        uVar4 = 0xffffffff;
      }
    }
  }
  return uVar4;
}

