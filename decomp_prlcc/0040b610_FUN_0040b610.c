
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b610(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  time_t tVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d840);
  if ((DAT_0061c760 == 0x14) && (FUN_0040c6c0(param_1), 1 < *(int *)PTR___log_level_0061bd30)) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Utility Tool: Cursor reinitialized");
  }
  DAT_0061c760 = 0xffffffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d840);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d880);
  if (DAT_0061d8a8 != '\0') goto LAB_0040b666;
  tVar5 = time((time_t *)0x0);
  if (tVar5 - _DAT_0061d8b0 < 0xb) {
    uVar1 = *param_1;
    cVar2 = FUN_0040b3c0(uVar1,"_NET_SUPPORTING_WM_CHECK");
    cVar3 = FUN_0040b3c0(uVar1,"_NET_WM_NAME");
    cVar4 = FUN_0040b3c0(uVar1,"_NET_CLIENT_LIST");
    if ((cVar2 == '\0') || (cVar3 == '\0')) {
      DAT_0061d8a8 = '\0';
      goto LAB_0040b666;
    }
    DAT_0061d8a8 = cVar4 != '\0';
    if (!(bool)DAT_0061d8a8) goto LAB_0040b666;
  }
  else {
    DAT_0061d8a8 = true;
  }
  pthread_cond_signal((pthread_cond_t *)&DAT_0061d8c0);
LAB_0040b666:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d880);
  return;
}

