
void FUN_00404500(void)

{
  pthread_t pVar1;
  
  DAT_0061c698 = 0;
  pVar1 = pthread_self();
  if (pVar1 != DAT_0061d500) {
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: XIOError received, nothing to do");
    }
                    /* WARNING: Subroutine does not return */
    pthread_exit((void *)0x0);
  }
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: XIOError received, performing cleanup...")
    ;
  }
  FUN_00403e30();
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}

