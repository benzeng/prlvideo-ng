
void FUN_10070fa60(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t local_28;
  
  local_28 = 0;
  iVar1 = _sysctl(param_1,2,(void *)0x0,&local_28,(void *)0x0,0);
  if (iVar1 == 0) {
    pcVar2 = _malloc(local_28);
    if (pcVar2 != (char *)0x0) {
      iVar1 = _sysctl(param_1,2,pcVar2,&local_28,(void *)0x0,0);
      if (iVar1 == 0) {
        _strncpy(param_2,pcVar2,0x40);
        param_2[0x3f] = '\0';
      }
      _free(pcVar2);
    }
  }
  return;
}

