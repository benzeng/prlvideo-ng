
int FUN_100c88b70(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
  pcVar1 = *(char **)*param_1;
  pcVar2 = *(char **)*param_2;
  if (pcVar1 == (char *)0x0) {
    bVar4 = pcVar2 != (char *)0x0;
  }
  else {
    if (pcVar2 != (char *)0x0) {
      iVar3 = _strcmp(pcVar1,pcVar2);
      return iVar3;
    }
    bVar4 = false;
  }
  return (uint)(pcVar1 != (char *)0x0) - (uint)bVar4;
}

