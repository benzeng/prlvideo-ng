
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlIsMainThread(void)

{
  pthread_t p_Var1;
  uint local_c;
  
  if (DAT_1011116c0 == -1) {
    _xmlInitThreads();
  }
  if (DAT_1011116c0 == 0) {
    local_c = 1;
  }
  else {
    _pthread_once((pthread_once_t *)&DAT_1011116d0,FUN_1001d6626);
    p_Var1 = _pthread_self();
    local_c = (uint)(p_Var1 == DAT_1011b8790);
  }
  return local_c;
}

