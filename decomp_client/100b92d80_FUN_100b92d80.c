
void FUN_100b92d80(void *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  if (param_1 != (void *)0x0) {
    pcVar1 = *(char **)((long)param_1 + 0x10);
    if (pcVar1 != (char *)0x0) {
      sVar2 = _strlen(pcVar1);
      ___bzero(pcVar1,sVar2);
      _free(*(void **)((long)param_1 + 0x10));
    }
    pcVar1 = *(char **)((long)param_1 + 0x18);
    if (pcVar1 != (char *)0x0) {
      sVar2 = _strlen(pcVar1);
      ___bzero(pcVar1,sVar2);
      _free(*(void **)((long)param_1 + 0x18));
    }
    _free(param_1);
    return;
  }
  return;
}

