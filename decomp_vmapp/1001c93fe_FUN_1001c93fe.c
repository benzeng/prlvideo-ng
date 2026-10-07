
int FUN_1001c93fe(sockaddr *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int local_d8;
  socklen_t local_c0;
  uint local_bc;
  ulong local_b8;
  undefined4 local_b0;
  uint local_a8 [33];
  socklen_t local_24;
  int local_20;
  int local_1c;
  
  if (param_1->sa_family == '\x1e') {
    local_20 = _socket(0x1e,1,6);
    local_24 = 0x1c;
  }
  else {
    local_20 = _socket(2,1,6);
    local_24 = 0x10;
  }
  if (local_20 == -1) {
    ___xmlIOErr(10,0,"socket failed\n");
    local_d8 = -1;
  }
  else {
    local_bc = _fcntl(local_20,3,0);
    if (local_bc != 0xffffffff) {
      local_bc = local_bc | 4;
      local_bc = _fcntl(local_20,4,(ulong)local_bc);
    }
    if ((int)local_bc < 0) {
      ___xmlIOErr(10,0,"error setting non-blocking IO\n");
      _close(local_20);
      local_d8 = -1;
    }
    else {
      iVar2 = _connect(local_20,param_1,local_24);
      if ((iVar2 == -1) && (iVar2 = FUN_1001c7dc4(), 1 < iVar2 - 0x23U)) {
        ___xmlIOErr(10,0,"error connecting to HTTP server");
        _close(local_20);
        return -1;
      }
      local_b8 = (ulong)DAT_101111308;
      local_b0 = 0;
      _memset(local_a8,0,0x80);
      local_1c = local_20;
      local_a8[(ulong)(long)local_20 >> 5] =
           1 << ((byte)local_20 & 0x1f) | local_a8[(ulong)(long)local_20 >> 5];
      iVar2 = _select_1050(local_20 + 1,0,local_a8,0,&local_b8);
      if (iVar2 == -1) {
        ___xmlIOErr(10,0,"Connect failed");
        _close(local_20);
        local_d8 = -1;
      }
      else if (iVar2 == 0) {
        ___xmlIOErr(10,0,"Connect attempt timed out");
        _close(local_20);
        local_d8 = -1;
      }
      else {
        iVar2 = FUN_1001c9754(local_20,local_a8);
        if (iVar2 == 0) {
          ___xmlIOErr(10,0,"select failed\n");
          _close(local_20);
          local_d8 = -1;
        }
        else {
          local_c0 = 4;
          iVar2 = _getsockopt(local_20,0xffff,0x1007,&local_bc,&local_c0);
          if (iVar2 < 0) {
            ___xmlIOErr(10,0,"getsockopt failed\n");
            local_d8 = -1;
          }
          else if (local_bc == 0) {
            local_d8 = local_20;
          }
          else {
            ___xmlIOErr(10,0,"Error connecting to remote host");
            _close(local_20);
            uVar1 = local_bc;
            puVar3 = (uint *)___error();
            *puVar3 = uVar1;
            local_d8 = -1;
          }
        }
      }
    }
  }
  return local_d8;
}

