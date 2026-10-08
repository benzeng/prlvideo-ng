
void _xmlMutexUnlock(xmlMutexPtr tok)

{
  if ((tok != (xmlMutexPtr)0x0) && (DAT_1022797c0 != 0)) {
    _pthread_mutex_unlock((pthread_mutex_t *)tok);
  }
  return;
}

