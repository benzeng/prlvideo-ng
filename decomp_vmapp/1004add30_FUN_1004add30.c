
undefined1 FUN_1004add30(long param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int *piVar4;
  undefined1 uVar5;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "COHERENCE STARTED: m_bSuspendFromChr=%d State=%d startInProgress=%d; stopInProgres=%d"
                  ,*(undefined1 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x88),
                  *(undefined1 *)(param_1 + 0x8c),*(undefined1 *)(param_1 + 0x8d));
  }
  piVar4 = (int *)(param_1 + 0x88);
  iVar1 = *piVar4;
  if (iVar1 == 3) {
    FUN_1004b4840(*(undefined8 *)(param_1 + 0x138));
    if (*(int *)(param_1 + 0x88) == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      "[SetCoherenceServerState] cannot set state %d (curr state=%d)",2,0);
      }
    }
    else {
      *piVar4 = 2;
    }
    if (*(int *)(*(long *)(param_1 + 0x120) + 4) == 0) {
      uVar5 = 0;
    }
    else if (*(char *)(param_1 + 0x8c) == '\0') {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2," Exit from fullscreen Coherence mode");
      }
      FUN_1004b6fa0(*(undefined8 *)(param_1 + 0xf0));
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      " >> Send ChrControl_CoherenceStarted to client (was in RESTARTED mode)");
      }
      lVar2 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
      local_30 = 1;
      if (*(long *)(lVar2 + 0x868) != 0) {
        local_30 = 2;
      }
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_38 = 0;
      FUN_1004b43e0(&local_38,1,&local_30,0x10);
      if (local_38 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  else if ((*(char *)(param_1 + 0x8c) == '\0') && (*(char *)(param_1 + 0x8d) == '\0')) {
    uVar5 = 0;
  }
  else if (iVar1 == 0) {
    if (DAT_1011b55f8 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "[SetCoherenceServerState] cannot set state %d (curr state=%d)",2,0);
    }
  }
  else {
    *piVar4 = 2;
    uVar5 = 1;
    if (iVar1 == 1) {
      FUN_1004b6d20(*(undefined8 *)(param_1 + 0xf0),param_1 + 0x120,1);
      if (*(char *)(param_1 + 0x8c) == '\0') {
        if (*(char *)(param_1 + 0x8d) != '\0') {
          FUN_10052acc0(param_1 + 0xf8);
          pvVar3 = operator_new(0x18);
          *(undefined4 *)((long)pvVar3 + 4) = 0;
          FUN_1004ae8a0(param_1,pvVar3,param_1 + 0x98,0);
        }
      }
      else {
        FUN_1004ae450(param_1,param_1 + 0xf8);
        FUN_1004bb550(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x30),
                      *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
      }
    }
  }
  return uVar5;
}

