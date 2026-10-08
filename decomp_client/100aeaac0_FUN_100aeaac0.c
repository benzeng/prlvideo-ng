
undefined1 FUN_100aeaac0(long param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char local_88 [24];
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_54;
  undefined2 local_52;
  char local_48 [24];
  char *local_30;
  
  cVar1 = QIODevice::isOpen();
  if (cVar1 == '\0') {
    local_48[0] = '\x02';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_30 = "default";
    uVar2 = 0;
    QMessageLogger::warning(local_48,"QtLockedFile::lock(): file is not opened");
  }
  else if (param_2 == 0) {
    uVar2 = FUN_100aeac20(param_1);
  }
  else {
    uVar2 = 1;
    if (*(int *)(param_1 + 0x10) != param_2) {
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_100aeac20(param_1);
      }
      local_52 = 0;
      local_54 = 3;
      if (param_2 == 1) {
        local_54 = 1;
      }
      local_68 = 0;
      uStack_60 = 0;
      iVar3 = QFileDevice::handle();
      iVar3 = _fcntl(iVar3,param_3 & 0xff | 8,&local_68);
      if (iVar3 == -1) {
        piVar4 = ___error();
        if (*piVar4 == 4) {
          uVar2 = 0;
        }
        else {
          piVar4 = ___error();
          if (*piVar4 == 0x23) {
            uVar2 = 0;
          }
          else {
            local_88[0] = '\x02';
            local_88[1] = '\0';
            local_88[2] = '\0';
            local_88[3] = '\0';
            local_88[0x14] = '\0';
            local_88[0x15] = '\0';
            local_88[0x16] = '\0';
            local_88[0x17] = '\0';
            local_88[0xc] = '\0';
            local_88[0xd] = '\0';
            local_88[0xe] = '\0';
            local_88[0xf] = '\0';
            local_88[0x10] = '\0';
            local_88[0x11] = '\0';
            local_88[0x12] = '\0';
            local_88[0x13] = '\0';
            local_88[4] = '\0';
            local_88[5] = '\0';
            local_88[6] = '\0';
            local_88[7] = '\0';
            local_88[8] = '\0';
            local_88[9] = '\0';
            local_88[10] = '\0';
            local_88[0xb] = '\0';
            local_70 = "default";
            piVar4 = ___error();
            pcVar5 = _strerror(*piVar4);
            uVar2 = 0;
            QMessageLogger::warning(local_88,"QtLockedFile::lock(): fcntl: %s",pcVar5);
          }
        }
      }
      else {
        *(int *)(param_1 + 0x10) = param_2;
      }
    }
  }
  return uVar2;
}

