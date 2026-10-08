
undefined4 _xmlNanoFTPGet(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_10dc;
  undefined8 local_10b8;
  undefined4 local_10b0;
  uint local_10a8 [32];
  undefined1 local_1028 [4104];
  long local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  if (param_1 == 0) {
    local_10dc = 0xffffffff;
  }
  else if ((param_4 == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    local_10dc = 0xffffffff;
  }
  else if (param_2 == (code *)0x0) {
    local_10dc = 0xffffffff;
  }
  else {
    local_20 = param_1;
    iVar1 = _xmlNanoFTPGetSocket(param_1,param_4);
    if (iVar1 < 0) {
      local_10dc = 0xffffffff;
    }
    else {
      do {
        local_10b8 = 1;
        local_10b0 = 0;
        _memset(local_10a8,0,0x80);
        local_c = *(int *)(local_20 + 0xb8);
        local_10a8[(ulong)(long)local_c >> 5] =
             1 << ((byte)local_c & 0x1f) | local_10a8[(ulong)(long)local_c >> 5];
        local_10 = _select_1050(*(int *)(local_20 + 0xb8) + 1,local_10a8,0,0,&local_10b8);
        if (local_10 < 0) {
          _close(*(int *)(local_20 + 0xb8));
          *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
          return 0xffffffff;
        }
        if (local_10 == 0) {
          local_10 = _xmlNanoFTPCheckResponse(local_20);
          if (local_10 < 0) {
            _close(*(int *)(local_20 + 0xb8));
            *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
            *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
            return 0xffffffff;
          }
          if (local_10 == 2) {
            _close(*(int *)(local_20 + 0xb8));
            *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
            return 0;
          }
        }
        else {
          uVar2 = _recv(*(int *)(local_20 + 0xb8),local_1028,0x1000,0);
          local_14 = (int)uVar2;
          if (local_14 < 0) {
            ___xmlIOErr(9,0,"recv failed");
            (*param_2)(param_3,local_1028,local_14);
            _close(*(int *)(local_20 + 0xb8));
            *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
            return 0xffffffff;
          }
          (*param_2)(param_3,local_1028,uVar2 & 0xffffffff);
        }
      } while (local_14 != 0);
      local_10dc = _xmlNanoFTPCloseConnection(local_20);
    }
  }
  return local_10dc;
}

