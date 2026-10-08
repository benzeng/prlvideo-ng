
void FUN_100ab03f0(ulong *param_1)

{
  pthread_mutex_t *ppVar1;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  ppVar1 = (pthread_mutex_t *)(*param_1 & 0xfffffffffffffffe);
  *param_1 = (ulong)ppVar1;
  _pthread_mutex_lock(ppVar1);
  return;
}

