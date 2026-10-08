
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlGetThreadId(void)

{
  pthread_t p_Var1;
  undefined4 local_c;
  
  if (DAT_1022797c0 == 0) {
    local_c = 0;
  }
  else {
    p_Var1 = _pthread_self();
    local_c = (int)p_Var1;
  }
  return local_c;
}

