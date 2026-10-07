
undefined8 FUN_00411e20(char *param_1,char *param_2,undefined8 *param_3)

{
  char *__s;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  
  do {
    while( true ) {
      if (*param_2 == '\0') {
        return 1;
      }
      if (*param_2 == '&') break;
      param_2 = param_2 + 1;
    }
    param_2 = param_2 + 1;
    sVar5 = strlen(param_1);
    iVar4 = strncmp(param_2,param_1,sVar5);
    if (iVar4 == 0) {
      return 0;
    }
    __s = (char *)*param_3;
    lVar3 = 0x10;
    lVar2 = 0;
    while (lVar1 = lVar3, __s != (char *)0x0) {
      sVar5 = strlen(__s);
      iVar4 = strncmp(__s,param_2,sVar5);
      if (iVar4 == 0) {
        iVar4 = FUN_00411e20(param_1,*(undefined8 *)((long)param_3 + lVar2 + 8),param_3);
        if (iVar4 == 0) {
          return 0;
        }
        break;
      }
      lVar3 = lVar1 + 0x10;
      lVar2 = lVar1;
      __s = *(char **)(lVar1 + (long)param_3);
    }
  } while( true );
}

