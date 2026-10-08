
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int _xmlNanoFTPGetConnection(long param_1)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_stack_fffffffffffffdb8;
  undefined4 uVar6;
  undefined8 in_stack_fffffffffffffdc0;
  undefined4 uVar7;
  int local_214;
  char local_208 [60];
  socklen_t local_1cc;
  sockaddr local_1c8;
  undefined8 local_1b8;
  uint local_148;
  undefined1 auStack_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [12];
  uint local_128;
  char local_124 [12];
  char local_118 [199];
  undefined1 local_51;
  long local_48;
  char *local_40;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_20;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffdb8 >> 0x20);
  uVar7 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
  if (param_1 == 0) {
    local_214 = -1;
  }
  else {
    local_48 = param_1;
    _memset(&local_1c8,0,0x80);
    if (*(char *)(local_48 + 0x31) == '\x1e') {
      iVar2 = _socket(0x1e,1,6);
      *(int *)(local_48 + 0xb8) = iVar2;
      local_1c8.sa_family = '\x1e';
      local_1cc = 0x1c;
    }
    else {
      iVar2 = _socket(2,1,6);
      *(int *)(local_48 + 0xb8) = iVar2;
      local_1c8.sa_family = '\x02';
      local_1cc = 0x10;
    }
    if (*(int *)(local_48 + 0xb8) < 0) {
      ___xmlIOErr(9,0,"socket failed");
      local_214 = -1;
    }
    else {
      if (*(int *)(local_48 + 0xb0) == 0) {
        _getsockname(*(int *)(local_48 + 0xb8),&local_1c8,&local_1cc);
        local_1c8.sa_data[0] = '\0';
        local_1c8.sa_data[1] = '\0';
        iVar2 = _bind(*(int *)(local_48 + 0xb8),&local_1c8,local_1cc);
        if (iVar2 < 0) {
          ___xmlIOErr(9,0,"bind failed");
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return -1;
        }
        _getsockname(*(int *)(local_48 + 0xb8),&local_1c8,&local_1cc);
        iVar2 = _listen(*(int *)(local_48 + 0xb8),1);
        if (iVar2 < 0) {
          ___xmlIOErr(9,0,"listen failed");
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return -1;
        }
        if (*(char *)(local_48 + 0x31) == '\x1e') {
          _inet_ntop(0x1e,local_1c8.sa_data + 6,local_208,0x2e);
          local_28 = local_208;
          local_20 = local_1c8.sa_data;
          _snprintf(local_118,200,"EPRT |2|%s|%s|\r\n",local_28,local_20);
        }
        else {
          local_28 = local_1c8.sa_data + 2;
          local_20 = local_1c8.sa_data;
          _snprintf(local_118,200,"PORT %d,%d,%d,%d,%d,%d\r\n",(ulong)(byte)local_1c8.sa_data[2],
                    (ulong)(byte)local_1c8.sa_data[3],(ulong)(byte)local_1c8.sa_data[4],
                    CONCAT44(uVar6,(uint)local_1c8.sa_data._2_4_ >> 0x18),
                    CONCAT44(uVar7,(uint)(byte)local_1c8.sa_data[0]),
                    (uint)(byte)local_1c8.sa_data[1]);
        }
        local_51 = 0;
        lVar4 = -1;
        pcVar5 = local_118;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_34 = ~(uint)lVar4 - 1;
        sVar3 = _send(*(int *)(local_48 + 0xb4),local_118,(long)local_34,0);
        local_2c = (int)sVar3;
        if (local_2c < 0) {
          ___xmlIOErr(9,0,"send failed");
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return local_2c;
        }
        local_2c = _xmlNanoFTPGetResponse(local_48);
        if (local_2c != 2) {
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return -1;
        }
      }
      else {
        if (*(char *)(local_48 + 0x31) == '\x1e') {
          _snprintf(local_118,200,"EPSV\r\n");
        }
        else {
          _snprintf(local_118,200,"PASV\r\n");
        }
        lVar4 = -1;
        pcVar5 = local_118;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_34 = ~(uint)lVar4 - 1;
        sVar3 = _send(*(int *)(local_48 + 0xb4),local_118,(long)local_34,0);
        local_2c = (int)sVar3;
        if (local_2c < 0) {
          ___xmlIOErr(9,0,"send failed");
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return local_2c;
        }
        local_2c = FUN_1008ff1d2(param_1);
        if (local_2c != 2) {
          if (local_2c == 5) {
            _close(*(int *)(local_48 + 0xb8));
            *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
            return -1;
          }
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          *(undefined4 *)(local_48 + 0xb0) = 0;
        }
        for (local_40 = (char *)(local_48 + 0xc4 + (long)*(int *)(local_48 + 0x4d0));
            ((*local_40 < '0' || ('9' < *local_40)) && (*local_40 != '\0')); local_40 = local_40 + 1
            ) {
        }
        if (*(char *)(local_48 + 0x31) == '\x1e') {
          iVar2 = _sscanf(local_40,"%u",&local_148);
          if (iVar2 != 1) {
            ___xmlIOErr(9,0x7d1,"Invalid answer to EPSV\n");
            if (*(int *)(local_48 + 0xb8) != -1) {
              _close(*(int *)(local_48 + 0xb8));
              *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
            }
            return -1;
          }
          local_1c8.sa_data._6_8_ = *(undefined8 *)(local_48 + 0x38);
          local_1b8 = *(undefined8 *)(local_48 + 0x40);
          local_1c8.sa_data._0_2_ = FUN_100900561(local_148 & 0xffff);
        }
        else {
          iVar2 = _sscanf(local_40,"%u,%u,%u,%u,%u,%u",&local_148,auStack_144,local_140,local_13c,
                          local_138,local_134);
          if (iVar2 != 6) {
            ___xmlIOErr(9,2000,"Invalid answer to PASV\n");
            if (*(int *)(local_48 + 0xb8) != -1) {
              _close(*(int *)(local_48 + 0xb8));
              *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
            }
            return -1;
          }
          for (local_30 = 0; local_30 < 6; local_30 = local_30 + 1) {
            *(char *)((long)&local_128 + (long)local_30) =
                 (char)*(undefined4 *)(auStack_144 + (long)local_30 * 4 + -4);
          }
          local_1c8.sa_data[2] = (undefined1)local_128;
          local_1c8.sa_data[3] = local_128._1_1_;
          local_1c8.sa_data[4] = local_128._2_1_;
          local_1c8.sa_data[5] = local_128._3_1_;
          local_1c8.sa_data[0] = local_124[0];
          local_1c8.sa_data[1] = local_124[1];
        }
        iVar2 = _connect(*(int *)(local_48 + 0xb8),&local_1c8,local_1cc);
        if (iVar2 < 0) {
          ___xmlIOErr(9,0,"Failed to create a data connection");
          _close(*(int *)(local_48 + 0xb8));
          *(undefined4 *)(local_48 + 0xb8) = 0xffffffff;
          return -1;
        }
      }
      local_214 = *(int *)(local_48 + 0xb8);
    }
  }
  return local_214;
}

