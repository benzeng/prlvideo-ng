
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040b880(void)

{
  undefined *puVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  puVar1 = PTR___log_level_0061bd30;
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: Command thread started");
  }
LAB_0040b8d0:
  do {
    while( true ) {
      iVar2 = FUN_0040bbb0(&local_1c,&local_20);
      if (iVar2 != 0) break;
      iVar2 = FUN_00403c70();
      if ((iVar2 == 0) || (DAT_0061d868 != 0)) {
        if (1 < *(int *)puVar1) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: Command thread stopped");
        }
        return 0;
      }
      if (1 < *(int *)puVar1) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: resumed");
      }
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d840);
    DAT_0061c760 = local_1c;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d840);
    if (local_1c != 0x17) {
      if (local_1c != 0x18) {
        if (local_1c == 0x14) {
          FUN_00403dc0(DAT_0061d8f0);
        }
        else if (1 < *(int *)puVar1) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: Unknown command (%X) received",
                       local_1c);
        }
        goto LAB_0040b8d0;
      }
      local_20 = 0;
    }
    sleep(10);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d880);
    DAT_0061d8a8 = '\0';
    _DAT_0061d8b0 = time((time_t *)0x0);
    if (local_20 == 0) {
      while (DAT_0061d8a8 == '\0') {
        pthread_cond_wait((pthread_cond_t *)&DAT_0061d8c0,(pthread_mutex_t *)&DAT_0061d880);
      }
      system("/usr/bin/ptiagent --info &");
    }
    else if (local_20 == 1) {
      while (DAT_0061d8a8 == '\0') {
        pthread_cond_wait((pthread_cond_t *)&DAT_0061d8c0,(pthread_mutex_t *)&DAT_0061d880);
      }
      system("/usr/bin/ptiagent --install &");
    }
    else if (1 < *(int *)puVar1) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: Unknown command type (%X) received",
                   local_20);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d880);
  } while( true );
}

