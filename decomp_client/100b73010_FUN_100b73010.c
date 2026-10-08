
undefined8 FUN_100b73010(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  undefined4 *local_20;
  
  cVar5 = '\x04';
  cVar1 = FUN_100d879d0();
  if (cVar1 == '\0') {
    cVar5 = '\x01';
    cVar1 = FUN_100d879e0();
    if (cVar1 == '\0') {
      iVar2 = FUN_100d7e9e0();
      cVar5 = '\a';
      if (iVar2 != 2) {
        iVar2 = FUN_100d7e9e0();
        cVar5 = (iVar2 == 1) * '\x03' + '\x05';
      }
    }
  }
  *param_1 = 0;
  iVar2 = FUN_100b93cc0(cVar5,&DAT_102314290);
  if (iVar2 == 0) {
    local_20 = (undefined4 *)0x0;
    iVar2 = FUN_100b9c400(&local_20);
    if (0 < iVar2) {
      if ((0x57 < (uint)local_20[1]) && (local_20[2] == 1)) {
        *param_1 = *local_20;
        FUN_100b93740();
        return 1;
      }
      FUN_100b93740();
      return 0;
    }
    if (-1 < iVar2) {
      return 1;
    }
    uVar3 = FUN_100b9d570();
    pcVar4 = "lic_event_recv_wait failed - %s";
  }
  else {
    uVar3 = FUN_100b9d570();
    pcVar4 = "Can\'t initialize vzlic library %s";
  }
  FUN_100df99c0("","License",0,pcVar4,uVar3);
  return 0;
}

