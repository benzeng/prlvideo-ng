
void FUN_10097f211(long *param_1)

{
  int iVar1;
  long local_40;
  xmlChar *local_38;
  xmlChar *local_30;
  int local_1c;
  int local_c;
  
  local_40 = 0;
  local_38 = (xmlChar *)0x0;
  local_30 = (xmlChar *)0x0;
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '.') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    iVar1 = FUN_10097db38(param_1,param_1[4],2,0,0);
  }
  else {
    local_38 = (xmlChar *)FUN_10097ec1c(param_1);
    if (local_38 == (xmlChar *)0x0) {
      if (*(char *)*param_1 == '*') {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        iVar1 = FUN_10097db38(param_1,param_1[4],8,0,0);
      }
      else {
        if (*(char *)*param_1 != '@') {
          *(undefined4 *)(param_1 + 2) = 1;
          return;
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        FUN_10097ef53(param_1);
        iVar1 = (int)param_1[2];
      }
    }
    else {
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      if (*(char *)*param_1 == ':') {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        if (*(char *)*param_1 == ':') {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
          iVar1 = _xmlStrEqual(local_38,(xmlChar *)"child");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_38,(xmlChar *)"attribute");
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 2) = 1;
              goto LAB_10097f9ae;
            }
            (*(code *)_xmlFree)(local_38);
            local_38 = (xmlChar *)0x0;
            FUN_10097ef53(param_1);
            iVar1 = (int)param_1[2];
          }
          else {
            (*(code *)_xmlFree)(local_38);
            local_38 = (xmlChar *)FUN_10097e8df(param_1);
            if (local_38 == (xmlChar *)0x0) {
              if (*(char *)*param_1 != '*') {
                *(undefined4 *)(param_1 + 2) = 1;
                goto LAB_10097f9ae;
              }
              if (*(char *)*param_1 != '\0') {
                *param_1 = *param_1 + 1;
              }
              iVar1 = FUN_10097db38(param_1,param_1[4],8,0,0);
            }
            else if (*(char *)*param_1 == ':') {
              if (*(char *)*param_1 != '\0') {
                *param_1 = *param_1 + 1;
              }
              local_40 = FUN_10097e8df(param_1);
              if (((*local_38 == 'x') && (local_38[1] == 'm')) &&
                 ((local_38[2] == 'l' && (local_38[3] == '\0')))) {
                local_30 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
              }
              else {
                for (local_c = 0; local_c < (int)param_1[7]; local_c = local_c + 1) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[6] + (long)local_c * 0x10 + 8),local_38
                                      );
                  if (iVar1 != 0) {
                    local_30 = _xmlStrdup(*(xmlChar **)(param_1[6] + (long)local_c * 0x10));
                    break;
                  }
                }
                if ((int)param_1[7] <= local_c) {
                  *(undefined4 *)(param_1 + 2) = 1;
                  goto LAB_10097f9ae;
                }
              }
              (*(code *)_xmlFree)(local_38);
              if (local_40 == 0) {
                if (*(char *)*param_1 != '*') {
                  *(undefined4 *)(param_1 + 2) = 1;
                  goto LAB_10097f9ae;
                }
                if (*(char *)*param_1 != '\0') {
                  *param_1 = *param_1 + 1;
                }
                iVar1 = FUN_10097db38(param_1,param_1[4],7,local_30,0);
              }
              else {
                iVar1 = FUN_10097db38(param_1,param_1[4],3,local_40,local_30);
              }
            }
            else {
              iVar1 = FUN_10097db38(param_1,param_1[4],3,local_38,0);
            }
          }
        }
        else {
          local_40 = FUN_10097e8df(param_1);
          if ((((*local_38 == 'x') && (local_38[1] == 'm')) && (local_38[2] == 'l')) &&
             (local_38[3] == '\0')) {
            local_30 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
          }
          else {
            for (local_1c = 0; local_1c < (int)param_1[7]; local_1c = local_1c + 1) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[6] + (long)local_1c * 0x10 + 8),local_38);
              if (iVar1 != 0) {
                local_30 = _xmlStrdup(*(xmlChar **)(param_1[6] + (long)local_1c * 0x10));
                break;
              }
            }
            if ((int)param_1[7] <= local_1c) {
              *(undefined4 *)(param_1 + 2) = 1;
              goto LAB_10097f9ae;
            }
          }
          (*(code *)_xmlFree)(local_38);
          if (local_40 == 0) {
            if (*(char *)*param_1 != '*') {
              *(undefined4 *)(param_1 + 2) = 1;
              goto LAB_10097f9ae;
            }
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
            iVar1 = FUN_10097db38(param_1,param_1[4],7,local_30,0);
          }
          else {
            iVar1 = FUN_10097db38(param_1,param_1[4],2,local_40,local_30);
          }
        }
      }
      else if (*(char *)*param_1 == '*') {
        if (local_38 != (xmlChar *)0x0) {
          *(undefined4 *)(param_1 + 2) = 1;
          goto LAB_10097f9ae;
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        iVar1 = FUN_10097db38(param_1,param_1[4],8,0,0);
      }
      else {
        if (local_38 == (xmlChar *)0x0) {
          *(undefined4 *)(param_1 + 2) = 1;
          goto LAB_10097f9ae;
        }
        iVar1 = FUN_10097db38(param_1,param_1[4],2,local_38,0);
      }
    }
  }
  if (iVar1 == 0) {
    return;
  }
LAB_10097f9ae:
  if (local_30 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_30);
  }
  if (local_40 != 0) {
    (*(code *)_xmlFree)(local_40);
  }
  if (local_38 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_38);
  }
  return;
}

