
int _xmlNanoFTPList(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  long lVar5;
  char *pcVar6;
  int local_116c;
  undefined8 local_1148;
  undefined4 local_1140;
  uint local_1138 [32];
  uint local_10b8 [32];
  char local_1038 [4096];
  undefined1 local_38;
  long local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  if (param_1 == 0) {
    return -1;
  }
  local_28 = param_1;
  if (param_4 == (char *)0x0) {
    iVar2 = _xmlNanoFTPCwd(param_1,*(undefined8 *)(param_1 + 0x18));
    if (iVar2 < 1) {
      return -1;
    }
    uVar3 = _xmlNanoFTPGetConnection(local_28);
    *(undefined4 *)(local_28 + 0xb8) = uVar3;
    if (*(int *)(local_28 + 0xb8) == -1) {
      return -1;
    }
    _snprintf(local_1038,0x1001,"LIST -L\r\n");
  }
  else {
    if ((*param_4 != '/') &&
       (iVar2 = _xmlNanoFTPCwd(param_1,*(undefined8 *)(param_1 + 0x18)), iVar2 < 1)) {
      return -1;
    }
    uVar3 = _xmlNanoFTPGetConnection(local_28);
    *(undefined4 *)(local_28 + 0xb8) = uVar3;
    if (*(int *)(local_28 + 0xb8) == -1) {
      return -1;
    }
    _snprintf(local_1038,0x1001,"LIST -L %s\r\n",param_4);
  }
  local_38 = 0;
  lVar5 = -1;
  pcVar6 = local_1038;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_20 = ~(uint)lVar5 - 1;
  sVar4 = _send(*(int *)(local_28 + 0xb4),local_1038,(long)local_20,0);
  local_1c = (int)sVar4;
  if (local_1c < 0) {
    ___xmlIOErr(9,0,"send failed");
    _close(*(int *)(local_28 + 0xb8));
    *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
    local_116c = local_1c;
  }
  else {
    local_1c = FUN_1001cb8aa(local_28);
    if (local_1c == 1) {
      do {
        local_1148 = 1;
        local_1140 = 0;
        _memset(local_10b8,0,0x80);
        local_10 = *(int *)(local_28 + 0xb8);
        local_10b8[(ulong)(long)local_10 >> 5] =
             1 << ((byte)local_10 & 0x1f) | local_10b8[(ulong)(long)local_10 >> 5];
        _memset(local_1138,0,0x80);
        local_c = *(int *)(local_28 + 0xb8);
        local_1138[(ulong)(long)local_c >> 5] =
             1 << ((byte)local_c & 0x1f) | local_1138[(ulong)(long)local_c >> 5];
        local_1c = _select_1050(*(int *)(local_28 + 0xb8) + 1,local_10b8,0,local_1138,&local_1148);
        if (local_1c < 0) {
          _close(*(int *)(local_28 + 0xb8));
          *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
          return -1;
        }
        if (local_1c == 0) {
          local_1c = _xmlNanoFTPCheckResponse(local_28);
          if (local_1c < 0) {
            _close(*(int *)(local_28 + 0xb8));
            *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
            *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
            return -1;
          }
          if (local_1c == 2) {
            _close(*(int *)(local_28 + 0xb8));
            *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
            return 0;
          }
        }
        else {
          sVar4 = _recv(*(int *)(local_28 + 0xb8),local_1038 + local_18,
                        0x1001 - (long)(local_18 + 1),0);
          local_20 = (int)sVar4;
          if (local_20 < 0) {
            ___xmlIOErr(9,0,"recv");
            _close(*(int *)(local_28 + 0xb8));
            *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
            *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
            return -1;
          }
          local_18 = local_18 + local_20;
          local_1038[local_18] = '\0';
          local_14 = 0;
          do {
            local_1c = FUN_1001cd9ae(local_1038 + local_14,param_2,param_3);
            local_14 = local_14 + local_1c;
          } while (0 < local_1c);
          _memmove(local_1038,local_1038 + local_14,(long)(local_18 - local_14));
          local_18 = local_18 - local_14;
        }
      } while (local_20 != 0);
      _xmlNanoFTPCloseConnection(local_28);
      local_116c = 0;
    }
    else {
      _close(*(int *)(local_28 + 0xb8));
      *(undefined4 *)(local_28 + 0xb8) = 0xffffffff;
      local_116c = -local_1c;
    }
  }
  return local_116c;
}

