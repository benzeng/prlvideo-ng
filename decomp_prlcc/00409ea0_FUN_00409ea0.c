
undefined8 FUN_00409ea0(void)

{
  FUN_00409c50();
  FUN_00409d90(&DAT_0061d7a0,1);
  FUN_00409d90(&DAT_0061d7a8,1);
  FUN_00409d90(&DAT_0061d7b0,1);
  pthread_mutex_destroy((pthread_mutex_t *)&DAT_0061d7c0);
  FUN_0040dc00("parallels.Coherence.guest.lin");
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: deinitialized");
  }
  return 1;
}

