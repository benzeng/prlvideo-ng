
bool FUN_100537590(long param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = _strcmp((char *)(param_1 + 0x48),"smbfs");
  if (iVar1 == 0) {
    iVar1 = _strncmp((char *)(param_1 + 0x458),"//guest:@",9);
    if (iVar1 == 0) {
      pcVar2 = _strchr((char *)(param_1 + 0x461),0x3a);
      bVar3 = pcVar2 != (char *)0x0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

