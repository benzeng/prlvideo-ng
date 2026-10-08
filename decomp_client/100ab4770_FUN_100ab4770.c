
undefined8 FUN_100ab4770(pthread_mutex_t *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined1 uVar3;
  timespec local_40;
  
  while( true ) {
    if (param_2 < 0) {
      iVar2 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 1),param_1);
    }
    else {
      local_40.tv_sec = (long)(param_2 / 1000);
      local_40.tv_nsec = (long)((param_2 % 1000) * 1000000);
      iVar2 = _pthread_cond_timedwait_relative_np((pthread_cond_t *)(param_1 + 1),param_1,&local_40)
      ;
    }
    if (iVar2 != 0) break;
    lVar1 = *(long *)(param_1[1].__opaque + 0x30);
    if (lVar1 != 0) {
      *(long *)(param_1[1].__opaque + 0x28) = *(long *)(param_1[1].__opaque + 0x28) + -1;
      *(long *)(param_1[1].__opaque + 0x30) = lVar1 + -1;
      uVar3 = 1;
LAB_100ab480f:
      iVar2 = _pthread_mutex_unlock(param_1);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),uVar3);
    }
  }
  *(long *)(param_1[1].__opaque + 0x28) = *(long *)(param_1[1].__opaque + 0x28) + -1;
  uVar3 = 0;
  goto LAB_100ab480f;
}

