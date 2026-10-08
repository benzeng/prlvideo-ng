
void FUN_10097ef53(long *param_1)

{
  int iVar1;
  xmlChar *str2;
  long local_30;
  xmlChar *local_20;
  int local_14;
  
  local_30 = 0;
  local_20 = (xmlChar *)0x0;
  str2 = (xmlChar *)FUN_10097ec1c(param_1);
  if (str2 == (xmlChar *)0x0) {
    if (*(char *)*param_1 != '*') {
      *(undefined4 *)(param_1 + 2) = 1;
      return;
    }
    iVar1 = FUN_10097db38(param_1,param_1[4],4,0,0);
    if (iVar1 == 0) {
      if (*(char *)*param_1 == '\0') {
        return;
      }
      *param_1 = *param_1 + 1;
      return;
    }
  }
  else {
    if (*(char *)*param_1 == ':') {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      local_30 = FUN_10097e8df(param_1);
      if ((((*str2 == 'x') && (str2[1] == 'm')) && (str2[2] == 'l')) && (str2[3] == '\0')) {
        local_20 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
      }
      else {
        for (local_14 = 0; local_14 < (int)param_1[7]; local_14 = local_14 + 1) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[6] + (long)local_14 * 0x10 + 8),str2);
          if (iVar1 != 0) {
            local_20 = _xmlStrdup(*(xmlChar **)(param_1[6] + (long)local_14 * 0x10));
            break;
          }
        }
        if ((int)param_1[7] <= local_14) {
          *(undefined4 *)(param_1 + 2) = 1;
          goto LAB_10097f1e1;
        }
      }
      (*(code *)_xmlFree)(str2);
      if (local_30 == 0) {
        if (*(char *)*param_1 != '*') {
          *(undefined4 *)(param_1 + 2) = 1;
          goto LAB_10097f1e1;
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        iVar1 = FUN_10097db38(param_1,param_1[4],4,0,local_20);
      }
      else {
        iVar1 = FUN_10097db38(param_1,param_1[4],4,local_30,local_20);
      }
    }
    else {
      iVar1 = FUN_10097db38(param_1,param_1[4],4,str2,0);
    }
    if (iVar1 == 0) {
      return;
    }
  }
LAB_10097f1e1:
  if (local_20 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_20);
  }
  if (local_30 != 0) {
    (*(code *)_xmlFree)(local_30);
  }
  return;
}

