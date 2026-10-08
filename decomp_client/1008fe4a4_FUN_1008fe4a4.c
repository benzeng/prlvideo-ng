
bool FUN_1008fe4a4(void)

{
  int iVar1;
  
  iVar1 = _socket(0x1e,1,0);
  if (iVar1 != -1) {
    _close(iVar1);
  }
  return iVar1 != -1;
}

