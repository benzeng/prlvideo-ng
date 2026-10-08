
void FUN_10032e8e0(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  long *local_18;
  
  if (param_3 < 0x10) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    piVar4 = (int *)0x0;
    if (*param_2 != 0) {
      piVar4 = *(int **)(*param_2 + 0x10);
    }
    iVar5 = 0x10;
    pcVar3 = "Warning: bad size of UIEMU request: ptr=%p, size=%u (<%u)";
  }
  else {
    local_18 = (long *)*param_2;
    iVar5 = *(int *)local_18[2];
    if (iVar5 == 1) {
      if (local_18 != (long *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
      }
      FUN_10082d2e0(param_1,&local_18,param_3);
      if (local_18 == (long *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_18 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 != 1) {
        return;
      }
      (**(code **)(*local_18 + 0x10))();
      return;
    }
    if (DAT_10230ffd0 < 1) {
      return;
    }
    piVar4 = (int *)0x0;
    if (local_18 != (long *)0x0) {
      piVar4 = (int *)local_18[2];
    }
    pcVar3 = 
    "Warning: unsupported UIEMU request: ptr=%p, size=%u, ver={%u, %u} (must be {%u, [%u]})";
  }
  FUN_100df99c0("UIEMU","prl_client_app",1,pcVar3,piVar4,param_3,iVar5);
  return;
}

