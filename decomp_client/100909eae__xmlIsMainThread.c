
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlIsMainThread(void)

{
  pthread_t p_Var1;
  uint local_c;
  
  if (DAT_1022797c0 == -1) {
    _xmlInitThreads();
  }
  if (DAT_1022797c0 == 0) {
    local_c = 1;
  }
  else {
    _pthread_once((pthread_once_t *)&DAT_1022797d0,FUN_100909f4e);
    p_Var1 = _pthread_self();
    local_c = (uint)(p_Var1 == DAT_102313510);
  }
  return local_c;
}

