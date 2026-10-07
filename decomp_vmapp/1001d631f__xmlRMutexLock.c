
void _xmlRMutexLock(xmlRMutexPtr tok)

{
  int iVar1;
  pthread_t p_Var2;
  
  if ((tok != (xmlRMutexPtr)0x0) && (DAT_1011116c0 != 0)) {
    _pthread_mutex_lock((pthread_mutex_t *)tok);
    if (*(int *)(tok + 0x40) != 0) {
      p_Var2 = _pthread_self();
      iVar1 = _pthread_equal(*(pthread_t *)(tok + 0x48),p_Var2);
      if (iVar1 != 0) {
        *(int *)(tok + 0x40) = *(int *)(tok + 0x40) + 1;
        _pthread_mutex_unlock((pthread_mutex_t *)tok);
        return;
      }
      *(int *)(tok + 0x44) = *(int *)(tok + 0x44) + 1;
      while (*(int *)(tok + 0x40) != 0) {
        _pthread_cond_wait((pthread_cond_t *)(tok + 0x50),(pthread_mutex_t *)tok);
      }
      *(int *)(tok + 0x44) = *(int *)(tok + 0x44) + -1;
    }
    p_Var2 = _pthread_self();
    *(pthread_t *)(tok + 0x48) = p_Var2;
    *(undefined4 *)(tok + 0x40) = 1;
    _pthread_mutex_unlock((pthread_mutex_t *)tok);
  }
  return;
}

