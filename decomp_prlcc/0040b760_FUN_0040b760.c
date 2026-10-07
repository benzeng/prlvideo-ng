
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040b760(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  DAT_0061d868 = 0;
  if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_0040bab0(), iVar1 == 0)) {
    pcVar2 = "Error: Utility Tool: Can\'t initialize";
  }
  else {
    DAT_0061d8f0 = FUN_00403f30(g_UTService);
    if (DAT_0061d8f0 == 0) {
      pcVar2 = "Error: Utility Tool: Can\'t add pipe";
    }
    else {
      iVar1 = pthread_mutex_init((pthread_mutex_t *)&DAT_0061d840,(pthread_mutexattr_t *)0x0);
      pcVar2 = "Error: Utility Tool: Can\'t init mutex";
      if (iVar1 == 0) {
        iVar1 = pthread_create((pthread_t *)&DAT_0061d820,(pthread_attr_t *)0x0,FUN_0040b880,
                               (void *)0x0);
        if (iVar1 == 0) {
          if (1 < *(int *)PTR___log_level_0061bd30) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: initialized");
            return 1;
          }
          return 1;
        }
        _DAT_0061d820 = 0;
        pthread_mutex_destroy((pthread_mutex_t *)&DAT_0061d840);
        FUN_0040b490(&DAT_0061d820,1);
        pcVar2 = "Error: Utility Tool: Can\'t start commands thread";
      }
    }
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,pcVar2);
  return 0;
}

