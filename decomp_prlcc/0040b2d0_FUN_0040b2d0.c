
undefined8 FUN_0040b2d0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_48 [20];
  uint local_34;
  
  puVar1 = PTR___log_level_0061bd30;
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Command thread started");
  }
  while( true ) {
    iVar3 = FUN_0040bd80(auStack_48,0);
    uVar2 = local_34;
    if (iVar3 == 0) break;
    if ((local_34 < 2) || (local_34 == 3)) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d7c0);
      DAT_0061c708 = uVar2;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d7c0);
      FUN_00403dc0(DAT_0061d818);
    }
    else if (1 < *(int *)puVar1) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Unknown command (%X) received",local_34);
    }
  }
  if (1 < *(int *)puVar1) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Command thread stopped");
  }
  return 0;
}

