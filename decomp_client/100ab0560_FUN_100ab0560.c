
void FUN_100ab0560(ulong param_1)

{
  long lVar1;
  timespec local_b0;
  pthread_cond_t local_a0;
  pthread_mutex_t local_70;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  _pthread_mutex_init(&local_70,(pthread_mutexattr_t *)0x0);
  _pthread_cond_init(&local_a0,(pthread_condattr_t *)0x0);
  local_b0.tv_sec = param_1 / 1000;
  local_b0.tv_nsec = (param_1 % 1000) * 1000000;
  _pthread_mutex_lock(&local_70);
  _pthread_cond_timedwait_relative_np(&local_a0,&local_70,&local_b0);
  _pthread_mutex_unlock(&local_70);
  _pthread_cond_destroy(&local_a0);
  _pthread_mutex_destroy(&local_70);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

