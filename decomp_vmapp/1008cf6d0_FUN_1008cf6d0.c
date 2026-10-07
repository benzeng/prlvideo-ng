
char * FUN_1008cf6d0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  
  if (param_3 == (char *)0x0) {
    return (char *)0x0;
  }
  if (param_1 == 0) {
    pcVar3 = _getenv(param_3);
    return pcVar3;
  }
  if (param_2 != (char *)0x0) {
    local_48 = param_2;
    local_40 = param_3;
    lVar2 = FUN_100885dc0(*(undefined8 *)(param_1 + 0x10),&local_48);
    if (lVar2 != 0) {
      return *(char **)(lVar2 + 0x10);
    }
    iVar1 = _strcmp(param_2,"ENV");
    if ((iVar1 == 0) && (pcVar3 = _getenv(param_3), pcVar3 != (char *)0x0)) {
      return pcVar3;
    }
  }
  local_48 = "default";
  local_40 = param_3;
  lVar2 = FUN_100885dc0(*(undefined8 *)(param_1 + 0x10),&local_48);
  pcVar3 = (char *)0x0;
  if (lVar2 != 0) {
    pcVar3 = *(char **)(lVar2 + 0x10);
  }
  return pcVar3;
}

