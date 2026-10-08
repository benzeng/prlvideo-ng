
undefined4 _xmlNanoHTTPFetch(undefined8 param_1,char *param_2,long *param_3)

{
  int iVar1;
  undefined4 local_44;
  int local_24;
  void *local_20;
  long local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (void *)0x0;
  if (param_2 == (char *)0x0) {
    local_44 = 0xffffffff;
  }
  else {
    local_18 = _xmlNanoHTTPOpen(param_1,param_3);
    if (local_18 == 0) {
      local_44 = 0xffffffff;
    }
    else {
      iVar1 = _strcmp(param_2,"-");
      if (iVar1 == 0) {
        local_c = 0;
      }
      else {
        local_c = _open(param_2,0x201,0x1a4);
        if (local_c < 0) {
          _xmlNanoHTTPClose(local_18);
          if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
            (*(code *)_xmlFree)(*param_3);
            *param_3 = 0;
          }
          return 0xffffffff;
        }
      }
      FUN_1008fe387(local_18,&local_20,&local_24);
      if (0 < local_24) {
        _write(local_c,local_20,(long)local_24);
      }
      _xmlNanoHTTPClose(local_18);
      _close(local_c);
      local_44 = 0;
    }
  }
  return local_44;
}

