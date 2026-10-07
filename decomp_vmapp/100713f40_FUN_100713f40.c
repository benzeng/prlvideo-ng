
void * FUN_100713f40(char *param_1,char *param_2)

{
  void *pvVar1;
  char *pcVar2;
  
  pvVar1 = _malloc(0x20);
  if (pvVar1 != (void *)0x0) {
    pcVar2 = _strdup(param_1);
    *(char **)((long)pvVar1 + 0x10) = pcVar2;
    pcVar2 = _strdup(param_2);
    *(char **)((long)pvVar1 + 0x18) = pcVar2;
    if ((pcVar2 == (char *)0x0) || (*(long *)((long)pvVar1 + 0x10) == 0)) {
      FUN_100713fa0(pvVar1);
      pvVar1 = (void *)0x0;
    }
  }
  return pvVar1;
}

