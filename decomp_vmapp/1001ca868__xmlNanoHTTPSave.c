
undefined4 _xmlNanoHTTPSave(long param_1,char *param_2)

{
  int iVar1;
  undefined4 local_3c;
  int local_1c;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    local_3c = 0xffffffff;
  }
  else {
    iVar1 = _strcmp(param_2,"-");
    if (iVar1 == 0) {
      local_c = 0;
    }
    else {
      local_c = _open(param_2,0x201);
      if (local_c < 0) {
        _xmlNanoHTTPClose(param_1);
        return 0xffffffff;
      }
    }
    FUN_1001caa5f(param_1,&local_18,&local_1c);
    if (0 < local_1c) {
      _write(local_c,local_18,(long)local_1c);
    }
    _xmlNanoHTTPClose(param_1);
    _close(local_c);
    local_3c = 0;
  }
  return local_3c;
}

