
long _xmlNanoFTPOpen(char *param_1)

{
  int iVar1;
  long local_28;
  
  _xmlNanoFTPInit();
  if (param_1 == (char *)0x0) {
    local_28 = 0;
  }
  else {
    iVar1 = _strncmp("ftp://",param_1,6);
    if (iVar1 == 0) {
      local_28 = _xmlNanoFTPNewCtxt(param_1);
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        iVar1 = _xmlNanoFTPConnect(local_28);
        if (iVar1 < 0) {
          _xmlNanoFTPFreeCtxt(local_28);
          local_28 = 0;
        }
        else {
          iVar1 = _xmlNanoFTPGetSocket(local_28,*(undefined8 *)(local_28 + 0x18));
          if (iVar1 < 0) {
            _xmlNanoFTPFreeCtxt(local_28);
            local_28 = 0;
          }
        }
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}

