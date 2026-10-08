
void _xmlFreeMutex(xmlMutexPtr tok)

{
  if (tok != (xmlMutexPtr)0x0) {
    if (DAT_1022797c0 != 0) {
      _pthread_mutex_destroy((pthread_mutex_t *)tok);
    }
    _free(tok);
  }
  return;
}

