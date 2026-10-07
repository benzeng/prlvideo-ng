
undefined4 _xmlNanoFTPCheckResponse(long param_1)

{
  int iVar1;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_98 [32];
  long local_18;
  int local_c;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) {
    local_b8 = 0xffffffff;
  }
  else {
    local_a8 = 0;
    local_a0 = 0;
    local_18 = param_1;
    _memset(local_98,0,0x80);
    local_c = *(int *)(local_18 + 0xb4);
    local_98[(ulong)(long)local_c >> 5] =
         1 << ((byte)local_c & 0x1f) | local_98[(ulong)(long)local_c >> 5];
    iVar1 = _select_1050(*(int *)(local_18 + 0xb4) + 1,local_98,0,0,&local_a8);
    if (iVar1 == -1) {
      ___xmlIOErr(9,0,"select");
      local_b8 = 0xffffffff;
    }
    else if (iVar1 == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_1001cb8aa(param_1);
    }
  }
  return local_b8;
}

