
undefined8 FUN_100369db0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long local_20;
  
  if (2 < DAT_10230ffd0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar3 = FUN_100323e20(uVar5);
    FUN_100df99c0("","prl_client_app",3,"About to hide VM overlay for display %d",uVar3);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  pcVar1 = DAT_102311a80;
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar3 = (*DAT_1023119d8)();
    (*pcVar1)(uVar3,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
    }
    FUN_100323d50(&local_20,uVar5);
    lVar2 = local_20;
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar3 = FUN_100323e20(uVar5);
    iVar4 = _PrlDevDisplay_SyncSetScreenSurface
                      (lVar2,uVar3,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),0
                       ,0,0,0);
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
    if (iVar4 < 0) {
      uVar5 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "Hide VM overlay SetScreenSurface has failed with RC = %.8X, rc = [%s].",iVar4,
                    uVar5);
    }
  }
  if (*(char *)(param_1 + 0x8d) != '\0') {
    *(undefined1 *)(param_1 + 0x8d) = 0;
    FUN_100832cc0(*(undefined8 *)(param_1 + 0x10),0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}

