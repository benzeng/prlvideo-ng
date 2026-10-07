
void FUN_100714d70(undefined8 *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = (char *)*param_1;
    if ((pcVar1 != (char *)0x0) && (pcVar1 != "")) {
      _free(pcVar1);
      *param_1 = 0;
    }
    pcVar1 = (char *)param_1[1];
    if ((pcVar1 != (char *)0x0) && (pcVar1 != "")) {
      _free(pcVar1);
      param_1[1] = 0;
    }
    pcVar1 = (char *)param_1[2];
    if ((pcVar1 != (char *)0x0) && (pcVar1 != "")) {
      sVar2 = _strlen(pcVar1);
      ___bzero(pcVar1,sVar2);
      _free((void *)param_1[2]);
    }
    _free(param_1);
    return;
  }
  return;
}

