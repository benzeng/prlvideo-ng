
void FUN_100a29760(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_102280d38;
  puVar1 = PTR_shared_null_1021e15e8;
  param_1[1] = PTR_shared_null_1021e15e8;
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 2),(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 10),(pthread_condattr_t *)0x0);
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x13),0);
  param_1[0x14] = puVar1;
  return;
}

