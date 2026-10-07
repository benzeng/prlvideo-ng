
void _xmlFreeRMutex(xmlRMutexPtr tok)

{
  if (tok != (xmlRMutexPtr)0x0) {
    if (DAT_1011116c0 != 0) {
      _pthread_mutex_destroy((pthread_mutex_t *)tok);
    }
    _free(tok);
  }
  return;
}

