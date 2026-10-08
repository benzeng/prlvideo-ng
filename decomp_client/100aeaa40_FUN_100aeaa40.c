
undefined1 FUN_100aeaa40(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  char local_30 [24];
  char *local_18;
  
  if ((param_2 & 8) == 0) {
    uVar1 = QFile::open();
  }
  else {
    local_30[0] = '\x02';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[0x14] = '\0';
    local_30[0x15] = '\0';
    local_30[0x16] = '\0';
    local_30[0x17] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    local_30[0x10] = '\0';
    local_30[0x11] = '\0';
    local_30[0x12] = '\0';
    local_30[0x13] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_18 = "default";
    uVar1 = 0;
    QMessageLogger::warning(local_30,"QtLockedFile::open(): Truncate mode not allowed.");
  }
  return uVar1;
}

