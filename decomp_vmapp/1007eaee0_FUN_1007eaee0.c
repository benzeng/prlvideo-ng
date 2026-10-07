
bool FUN_1007eaee0(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_trylock(param_1);
  return iVar1 == 0;
}

