
undefined1 FUN_100523930(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long *in_RAX;
  byte *pbVar4;
  char *pcVar5;
  long *local_18;
  
  local_18 = in_RAX;
  FUN_100521a50(&local_18,param_1,param_2,param_3);
  if (1 < DAT_1011b55f8) {
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    pcVar5 = "<null>";
    if ((local_18 != (long *)0x0) && (local_18[2] != 0)) {
      pbVar4 = (byte *)FUN_100521390();
      if ((*pbVar4 & 1) == 0) {
        pcVar5 = (char *)(pbVar4 + 1);
      }
      else {
        pcVar5 = *(char **)(pbVar4 + 0x10);
      }
    }
    FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",2,"Best fit for %s is %s",param_3,pcVar5);
  }
  if (local_18 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)local_18[2];
    if (plVar1 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (local_18 == (long *)0x0) {
        return uVar3;
      }
    }
    LOCK();
    plVar1 = local_18 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return uVar3;
}

