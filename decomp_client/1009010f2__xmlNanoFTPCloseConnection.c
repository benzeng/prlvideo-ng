
undefined4 _xmlNanoFTPCloseConnection(long param_1)

{
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  uint local_128 [32];
  uint local_a8 [34];
  long local_20;
  int local_14;
  int local_10;
  int local_c;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) {
    local_144 = 0xffffffff;
  }
  else {
    local_20 = param_1;
    _close(*(int *)(param_1 + 0xb8));
    *(undefined4 *)(local_20 + 0xb8) = 0xffffffff;
    local_138 = 0xf;
    local_130 = 0;
    _memset(local_a8,0,0x80);
    local_10 = *(int *)(local_20 + 0xb4);
    local_a8[(ulong)(long)local_10 >> 5] =
         1 << ((byte)local_10 & 0x1f) | local_a8[(ulong)(long)local_10 >> 5];
    _memset(local_128,0,0x80);
    local_c = *(int *)(local_20 + 0xb4);
    local_128[(ulong)(long)local_c >> 5] =
         1 << ((byte)local_c & 0x1f) | local_128[(ulong)(long)local_c >> 5];
    local_14 = _select_1050(*(int *)(local_20 + 0xb4) + 1,local_a8,0,local_128,&local_138);
    if (local_14 < 0) {
      _close(*(int *)(local_20 + 0xb4));
      *(undefined4 *)(local_20 + 0xb4) = 0xffffffff;
      local_144 = 0xffffffff;
    }
    else {
      if (local_14 == 0) {
        _close(*(int *)(local_20 + 0xb4));
        *(undefined4 *)(local_20 + 0xb4) = 0xffffffff;
      }
      else {
        local_14 = _xmlNanoFTPGetResponse(local_20);
        if (local_14 != 2) {
          _close(*(int *)(local_20 + 0xb4));
          *(undefined4 *)(local_20 + 0xb4) = 0xffffffff;
          return 0xffffffff;
        }
      }
      local_144 = 0;
    }
  }
  return local_144;
}

