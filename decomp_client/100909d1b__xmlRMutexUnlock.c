
void _xmlRMutexUnlock(xmlRMutexPtr tok)

{
  if ((tok != (xmlRMutexPtr)0x0) && (DAT_1022797c0 != 0)) {
    _pthread_mutex_lock((pthread_mutex_t *)tok);
    *(int *)(tok + 0x40) = *(int *)(tok + 0x40) + -1;
    if (*(int *)(tok + 0x40) == 0) {
      if (*(int *)(tok + 0x44) != 0) {
        _pthread_cond_signal((pthread_cond_t *)(tok + 0x50));
      }
      *(undefined8 *)(tok + 0x48) = 0;
    }
    _pthread_mutex_unlock((pthread_mutex_t *)tok);
  }
  return;
}

