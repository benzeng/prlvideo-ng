
undefined8 FUN_100aaf630(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_var;
  timespec local_40;
  
  _pthread_mutex_lock(param_1);
  if (-1 < *(int *)(param_1[1].__opaque + 0x28)) {
    do {
      if (param_2 < 0) {
        _pthread_cond_wait((pthread_cond_t *)(param_1 + 1),param_1);
      }
      else if ((param_2 == 0) ||
              (local_40.tv_sec = (long)(param_2 / 1000),
              local_40.tv_nsec = (long)((param_2 % 1000) * 1000000),
              iVar1 = _pthread_cond_timedwait_relative_np
                                ((pthread_cond_t *)(param_1 + 1),param_1,&local_40), iVar1 == 0x3c))
      {
        _pthread_mutex_unlock(param_1);
        return 0;
      }
    } while (-1 < *(int *)(param_1[1].__opaque + 0x28));
  }
  if ((*(uint *)(param_1[1].__opaque + 0x28) & 1) != 0) {
    param_1[1].__opaque[0x28] = '\x01';
    param_1[1].__opaque[0x29] = '\0';
    param_1[1].__opaque[0x2a] = '\0';
    param_1[1].__opaque[0x2b] = '\0';
  }
  iVar1 = _pthread_mutex_unlock(param_1);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
}

