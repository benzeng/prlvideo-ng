
undefined8 FUN_100763740(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  in_addr_t iVar4;
  int iVar5;
  ssize_t sVar6;
  undefined8 uVar7;
  undefined1 local_49;
  sockaddr local_48;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_49 = 0x71;
  local_30 = lVar1;
  iVar3 = _socket(2,1,0);
  uVar7 = 0xffffffff;
  if (-1 < iVar3) {
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_48.sa_len = '\0';
    local_48.sa_family = '\x02';
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    iVar4 = _inet_addr("127.0.0.1");
    uVar2 = *(ushort *)(param_1 + 0x40) << 8 | *(ushort *)(param_1 + 0x40) >> 8;
    local_48.sa_data[0] = (char)uVar2;
    local_48.sa_data[1] = (char)(uVar2 >> 8);
    local_48.sa_data[2] = (char)iVar4;
    local_48.sa_data[3] = (char)(iVar4 >> 8);
    local_48.sa_data[4] = (char)(iVar4 >> 0x10);
    local_48.sa_data[5] = (char)(iVar4 >> 0x18);
    iVar5 = _connect(iVar3,&local_48,0x10);
    if (-1 < iVar5) {
      sVar6 = _send(iVar3,&local_49,1,0);
      if (sVar6 == 1) {
        _close(iVar3);
        uVar7 = 0;
      }
    }
  }
  if (lVar1 == local_30) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

