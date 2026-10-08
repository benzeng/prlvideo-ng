
int _xmlNanoFTPGetSocket(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  long lVar4;
  char *pcVar5;
  int local_15c;
  char local_148 [299];
  undefined1 local_1d;
  long local_18;
  int local_10;
  int local_c;
  
  if (param_1 == 0) {
    local_15c = -1;
  }
  else if ((param_2 == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    local_15c = -1;
  }
  else {
    local_18 = param_1;
    uVar2 = _xmlNanoFTPGetConnection(param_1);
    *(undefined4 *)(local_18 + 0xb8) = uVar2;
    if (*(int *)(local_18 + 0xb8) == -1) {
      local_15c = -1;
    }
    else {
      _snprintf(local_148,300,"TYPE I\r\n");
      lVar4 = -1;
      pcVar5 = local_148;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_c = ~(uint)lVar4 - 1;
      sVar3 = _send(*(int *)(local_18 + 0xb4),local_148,(long)local_c,0);
      local_10 = (int)sVar3;
      if (local_10 < 0) {
        ___xmlIOErr(9,0,"send failed");
        _close(*(int *)(local_18 + 0xb8));
        *(undefined4 *)(local_18 + 0xb8) = 0xffffffff;
        local_15c = local_10;
      }
      else {
        local_10 = FUN_1008ff1d2(local_18);
        if (local_10 == 2) {
          if (param_2 == 0) {
            _snprintf(local_148,300,"RETR %s\r\n",*(undefined8 *)(local_18 + 0x18));
          }
          else {
            _snprintf(local_148,300,"RETR %s\r\n",param_2);
          }
          local_1d = 0;
          lVar4 = -1;
          pcVar5 = local_148;
          do {
            if (lVar4 == 0) break;
            lVar4 = lVar4 + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          local_c = ~(uint)lVar4 - 1;
          sVar3 = _send(*(int *)(local_18 + 0xb4),local_148,(long)local_c,0);
          local_10 = (int)sVar3;
          if (local_10 < 0) {
            ___xmlIOErr(9,0,"send failed");
            _close(*(int *)(local_18 + 0xb8));
            *(undefined4 *)(local_18 + 0xb8) = 0xffffffff;
            local_15c = local_10;
          }
          else {
            local_10 = FUN_1008ff1d2(local_18);
            if (local_10 == 1) {
              local_15c = *(int *)(local_18 + 0xb8);
            }
            else {
              _close(*(int *)(local_18 + 0xb8));
              *(undefined4 *)(local_18 + 0xb8) = 0xffffffff;
              local_15c = -local_10;
            }
          }
        }
        else {
          _close(*(int *)(local_18 + 0xb8));
          *(undefined4 *)(local_18 + 0xb8) = 0xffffffff;
          local_15c = -local_10;
        }
      }
    }
  }
  return local_15c;
}

