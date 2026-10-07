
undefined1 FUN_100041750(long param_1,undefined8 param_2)

{
  pthread_mutex_t *ppVar1;
  uint uVar2;
  bool bVar3;
  QThread *this;
  undefined1 uVar4;
  ulong uVar5;
  QThread *local_40;
  undefined8 local_38;
  
  uVar5 = param_1 + 0x80;
  local_38 = param_2;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    uVar4 = 0;
    goto LAB_10004188b;
  }
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x10);
  _pthread_mutex_lock(ppVar1);
  uVar2 = *(uint *)(param_1 + 0x8c);
  if (uVar2 == 0) {
LAB_1000417c4:
    *(uint *)(param_1 + 0x8c) = uVar2 + 1;
    bVar3 = true;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 0xc) == *(int *)(*(long *)(param_1 + 8) + 8)) {
    bVar3 = false;
  }
  else {
    if (uVar2 < *(uint *)(param_1 + 0x88)) goto LAB_1000417c4;
    bVar3 = false;
  }
  FUN_100041910(param_1 + 8);
  if (bVar3) {
    QMutex::lock();
    _pthread_mutex_unlock(ppVar1);
    this = operator_new(0x18);
    QThread::QThread(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_metaObject_100bef1b8;
    *(long *)(this + 0x10) = param_1;
    local_40 = this;
    FUN_100041d30(param_1 + 0xa0,&local_40);
    QThread::start(this,7);
    uVar4 = 1;
    QMutex::unlock();
  }
  else {
    _pthread_cond_signal((pthread_cond_t *)(param_1 + 0x50));
    uVar4 = 1;
    _pthread_mutex_unlock(ppVar1);
  }
LAB_10004188b:
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar4;
}

