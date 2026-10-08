
void FUN_100bc0980(int *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  
  _close(*param_1);
  pcVar1 = *(char **)(param_1 + 2);
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    pcVar3 = _malloc(sVar2 + 0x15);
    if (pcVar3 != (char *)0x0) {
      ___snprintf_chk(pcVar3,sVar2 + 0x15,0,0xffffffffffffffff,"%s/%s","/var/run/lic_events",pcVar1)
      ;
      _unlink(pcVar3);
      _free(pcVar3);
      return;
    }
  }
  return;
}

