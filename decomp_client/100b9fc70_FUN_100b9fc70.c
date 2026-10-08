
undefined4 *
FUN_100b9fc70(char *param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    if (param_1 == (char *)0x0) {
      return (undefined4 *)0x0;
    }
    if (((param_3 != (char *)0x0) + 1) - (uint)(param_4 == (char *)0x0) == 1) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = _malloc(0x200);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  ___bzero(puVar1,0x200);
  *puVar1 = 1;
  pcVar2 = _strdup(param_1);
  *(char **)(puVar1 + 0x26) = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_100b9fdf9:
    FUN_100b9faf0(puVar1);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      pcVar2 = _strstr(param_2,"http://");
      if (pcVar2 != (char *)0x0) {
        if (pcVar2[7] == '\0') goto LAB_100b9fdb2;
        param_2 = pcVar2 + 7;
      }
      pcVar2 = _strdup(param_2);
      *(char **)(puVar1 + 2) = pcVar2;
      if (pcVar2 == (char *)0x0) goto LAB_100b9fdf9;
      if (param_3 == (char *)0x0) {
        param_3 = "";
      }
      ___snprintf_chk(puVar1 + 6,0x3f,0,0x1e8,"%s",param_3);
      pcVar2 = "";
      if (param_4 != (char *)0x0) {
        pcVar2 = param_4;
      }
      ___snprintf_chk(puVar1 + 0x16,0x3f,0,0x1a8,"%s",pcVar2);
      *(undefined8 *)(puVar1 + 0x3c) = param_5;
    }
LAB_100b9fdb2:
    *(undefined8 *)(puVar1 + 0x3a) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x36) = 0;
    *(undefined8 *)(puVar1 + 0x32) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
  }
  return puVar1;
}

