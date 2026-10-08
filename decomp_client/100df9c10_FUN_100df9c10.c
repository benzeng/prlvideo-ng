
void FUN_100df9c10(void)

{
  pthread_t p_Var1;
  
  p_Var1 = _pthread_self();
  _pthread_mach_thread_np(p_Var1);
  return;
}

