
long _xmlNanoFTPConnectTo(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  
  _xmlNanoFTPInit();
  if (param_1 == 0) {
    local_30 = 0;
  }
  else if (param_2 < 1) {
    local_30 = 0;
  }
  else {
    local_30 = _xmlNanoFTPNewCtxt(0);
    uVar2 = (*(code *)_xmlMemStrdup)(param_1);
    *(undefined8 *)(local_30 + 8) = uVar2;
    if (param_2 != 0) {
      *(int *)(local_30 + 0x10) = param_2;
    }
    iVar1 = _xmlNanoFTPConnect(local_30);
    if (iVar1 < 0) {
      _xmlNanoFTPFreeCtxt(local_30);
      local_30 = 0;
    }
  }
  return local_30;
}

