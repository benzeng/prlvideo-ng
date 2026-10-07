
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040b150(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR___log_level_0061bd30;
  if (1 < *(int *)PTR___log_level_0061bd30) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Agent command thread started");
  }
  while( true ) {
    iVar3 = FUN_0040bd80(auStack_58,1);
    iVar2 = iStack_44;
    if (iVar3 == 0) break;
    bVar5 = iStack_44 == 4;
    if (((iStack_44 == 2) || (bVar5)) || (iStack_44 == 7)) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d7c0);
      _DAT_0061d800 = CONCAT44(iStack_44,local_48);
      DAT_0061c70c = iVar2;
      _DAT_0061d808 = local_40;
      _DAT_0061d810 = local_38;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d7c0);
      if (1 < *(int *)puVar1) {
        pcVar4 = " WINDOW_CTRL";
        if ((iVar2 != 2) && (pcVar4 = "WNDCONTENT_CHR", !bVar5)) {
          pcVar4 = "CFGCHANGED_CHR";
        }
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Agent command %s received",pcVar4);
      }
      FUN_00403dc0(DAT_0061d818);
    }
    else if (1 < *(int *)puVar1) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Unknown agent command (%X) received",
                   iStack_44);
    }
  }
  if (1 < *(int *)puVar1) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: Agent command thread stopped");
  }
  return 0;
}

