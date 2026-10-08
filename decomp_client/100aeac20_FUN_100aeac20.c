
undefined1 FUN_100aeac20(long param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 uVar5;
  char local_78 [24];
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_44;
  undefined2 local_42;
  char local_38 [24];
  char *local_20;
  
  cVar1 = QIODevice::isOpen();
  if (cVar1 == '\0') {
    local_38[0] = '\x02';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_38[0xc] = '\0';
    local_38[0xd] = '\0';
    local_38[0xe] = '\0';
    local_38[0xf] = '\0';
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    local_20 = "default";
    uVar5 = 0;
    QMessageLogger::warning(local_38,"QtLockedFile::unlock(): file is not opened");
  }
  else {
    cVar1 = FUN_100aeaaa0(param_1);
    uVar5 = 1;
    if (cVar1 != '\0') {
      local_42 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_44 = 2;
      iVar2 = QFileDevice::handle();
      iVar2 = _fcntl(iVar2,9,&local_58);
      if (iVar2 == -1) {
        local_78[0] = '\x02';
        local_78[1] = '\0';
        local_78[2] = '\0';
        local_78[3] = '\0';
        local_78[0x14] = '\0';
        local_78[0x15] = '\0';
        local_78[0x16] = '\0';
        local_78[0x17] = '\0';
        local_78[0xc] = '\0';
        local_78[0xd] = '\0';
        local_78[0xe] = '\0';
        local_78[0xf] = '\0';
        local_78[0x10] = '\0';
        local_78[0x11] = '\0';
        local_78[0x12] = '\0';
        local_78[0x13] = '\0';
        local_78[4] = '\0';
        local_78[5] = '\0';
        local_78[6] = '\0';
        local_78[7] = '\0';
        local_78[8] = '\0';
        local_78[9] = '\0';
        local_78[10] = '\0';
        local_78[0xb] = '\0';
        local_60 = "default";
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        uVar5 = 0;
        QMessageLogger::warning(local_78,"QtLockedFile::lock(): fcntl: %s",pcVar4);
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return uVar5;
}

