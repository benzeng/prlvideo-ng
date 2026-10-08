
void FUN_100a298a0(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_102280d38;
  FUN_100a299f0();
  pDVar1 = (Data *)param_1[0x14];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100a298e9;
      pDVar1 = (Data *)param_1[0x14];
    }
    QListData::dispose(pDVar1);
  }
LAB_100a298e9:
  QMutex::~QMutex((QMutex *)(param_1 + 0x13));
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0x10));
  _pthread_cond_destroy((pthread_cond_t *)(param_1 + 10));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  pDVar1 = (Data *)param_1[1];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) {
        return;
      }
      pDVar1 = (Data *)param_1[1];
    }
    QListData::dispose(pDVar1);
  }
  return;
}

