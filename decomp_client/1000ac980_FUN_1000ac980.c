
void FUN_1000ac980(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1021f8a10;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"CSharedAppsDsp_p destructor");
  }
  FUN_1000aaef0(&DAT_102310898,0);
  FUN_1000eefa0(param_1[6]);
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x20))();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_10003d6e0();
    if ((long *)param_1[0x10] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x10] + 0x20))();
    }
    param_1[0x10] = 0;
  }
  FUN_10005a0d0((long)param_1 + 0x95);
  piVar1 = (int *)param_1[0xf];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1000aca66;
      piVar1 = (int *)param_1[0xf];
    }
    FUN_1000b5840(param_1 + 0xf,piVar1);
  }
LAB_1000aca66:
  piVar1 = (int *)param_1[0xe];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1000aca8f;
      piVar1 = (int *)param_1[0xe];
    }
    FUN_1000b5840(param_1 + 0xe,piVar1);
  }
LAB_1000aca8f:
  FUN_1000b4540(param_1 + 0xd);
  FUN_1001000e0(param_1 + 7);
  FUN_1000a7d00(param_1);
  return;
}

