
void FUN_100a299f0(long param_1)

{
  Data *pDVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x50));
  QMutex::lock();
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  pDVar1 = *(Data **)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = PTR_shared_null_1021e15e8;
  local_58 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar4 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + 1;
      local_31 = *(int *)pDVar1 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar2 = *(long **)local_50;
      QThread::wait((ulong)plVar2);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a29b42;
    }
    QListData::dispose(local_58);
  }
LAB_100a29b42:
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      local_31 = *(int *)pDVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a29b6a;
    }
    QListData::dispose(pDVar1);
  }
LAB_100a29b6a:
  QMutex::unlock();
  return;
}

