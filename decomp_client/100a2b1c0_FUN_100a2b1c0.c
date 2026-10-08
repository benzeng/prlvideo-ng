
void FUN_100a2b1c0(long *param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x18))();
  ppVar1 = (pthread_mutex_t *)(param_1 + 2);
  _pthread_mutex_lock(ppVar1);
  while( true ) {
    while (lVar2 = param_1[1], *(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8)) {
      uVar3 = FUN_100a2b2a0(param_1 + 1);
      _pthread_mutex_unlock(ppVar1);
      (**(code **)(*param_1 + 0x10))(param_1,uVar3);
      _pthread_mutex_lock(ppVar1);
    }
    if ((int)param_1[0x12] != 0) break;
    _pthread_cond_wait((pthread_cond_t *)(param_1 + 10),ppVar1);
  }
  *(int *)((long)param_1 + 0x8c) = *(int *)((long)param_1 + 0x8c) + -1;
  *(int *)(param_1 + 0x12) = (int)param_1[0x12] + -1;
  _pthread_mutex_unlock(ppVar1);
  return;
}

