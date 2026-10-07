
void FUN_1001c8c3a(long param_1,xmlChar *param_2)

{
  int iVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlChar *local_58;
  int local_4c;
  xmlChar *local_40;
  xmlChar *local_28;
  
  if (param_2 != (xmlChar *)0x0) {
    iVar1 = _strncmp((char *)param_2,"HTTP/",5);
    if (iVar1 == 0) {
      local_4c = 0;
      for (local_58 = param_2 + 5; ('/' < (char)*local_58 && ((char)*local_58 < ':'));
          local_58 = local_58 + 1) {
      }
      if (*local_58 == '.') {
        pxVar3 = local_58 + 1;
        if (('/' < (char)*pxVar3) && ((char)*pxVar3 < ':')) {
          pxVar3 = local_58 + 2;
        }
        while ((local_58 = pxVar3, '/' < (char)*local_58 && ((char)*local_58 < ':'))) {
          pxVar3 = local_58 + 1;
        }
      }
      if ((*local_58 == ' ') || (*local_58 == '\t')) {
        for (; (*local_58 == ' ' || (*local_58 == '\t')); local_58 = local_58 + 1) {
        }
        if (('/' < (char)*local_58) && ((char)*local_58 < ':')) {
          for (; ('/' < (char)*local_58 && ((char)*local_58 < ':')); local_58 = local_58 + 1) {
            local_4c = (int)(char)*local_58 + local_4c * 10 + -0x30;
          }
          if (((*local_58 == '\0') || (*local_58 == ' ')) || (*local_58 == '\t')) {
            *(int *)(param_1 + 0x68) = local_4c;
          }
        }
      }
    }
    else {
      iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"Content-Type:",0xd);
      if (iVar1 == 0) {
        for (local_58 = param_2 + 0xd; (*local_58 == ' ' || (*local_58 == '\t'));
            local_58 = local_58 + 1) {
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x70));
        }
        uVar2 = (*(code *)_xmlMemStrdup)(local_58);
        *(undefined8 *)(param_1 + 0x70) = uVar2;
        for (local_40 = local_58;
            (((*local_40 != '\0' && (*local_40 != ' ')) && (*local_40 != '\t')) &&
            ((*local_40 != ';' && (*local_40 != ',')))); local_40 = local_40 + 1) {
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x90));
        }
        pxVar3 = _xmlStrndup(local_58,(int)local_40 - (int)local_58);
        *(xmlChar **)(param_1 + 0x90) = pxVar3;
        pxVar3 = _xmlStrstr(*(xmlChar **)(param_1 + 0x70),(xmlChar *)"charset=");
        if (pxVar3 != (xmlChar *)0x0) {
          pxVar3 = pxVar3 + 8;
          for (local_40 = pxVar3;
              ((*local_40 != '\0' && (*local_40 != ' ')) &&
              ((*local_40 != '\t' && ((*local_40 != ';' && (*local_40 != ','))))));
              local_40 = local_40 + 1) {
          }
          if (*(long *)(param_1 + 0x88) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x88));
          }
          pxVar3 = _xmlStrndup(pxVar3,(int)local_40 - (int)pxVar3);
          *(xmlChar **)(param_1 + 0x88) = pxVar3;
        }
      }
      else {
        iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"ContentType:",0xc);
        if (iVar1 == 0) {
          local_58 = param_2 + 0xc;
          if (*(long *)(param_1 + 0x70) == 0) {
            for (; (*local_58 == ' ' || (*local_58 == '\t')); local_58 = local_58 + 1) {
            }
            uVar2 = (*(code *)_xmlMemStrdup)(local_58);
            *(undefined8 *)(param_1 + 0x70) = uVar2;
            for (local_28 = local_58;
                (((*local_28 != '\0' && (*local_28 != ' ')) && (*local_28 != '\t')) &&
                ((*local_28 != ';' && (*local_28 != ',')))); local_28 = local_28 + 1) {
            }
            if (*(long *)(param_1 + 0x90) != 0) {
              (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x90));
            }
            pxVar3 = _xmlStrndup(local_58,(int)local_28 - (int)local_58);
            *(xmlChar **)(param_1 + 0x90) = pxVar3;
            pxVar3 = _xmlStrstr(*(xmlChar **)(param_1 + 0x70),(xmlChar *)"charset=");
            if (pxVar3 != (xmlChar *)0x0) {
              pxVar3 = pxVar3 + 8;
              for (local_28 = pxVar3;
                  ((*local_28 != '\0' && (*local_28 != ' ')) &&
                  ((*local_28 != '\t' && ((*local_28 != ';' && (*local_28 != ','))))));
                  local_28 = local_28 + 1) {
              }
              if (*(long *)(param_1 + 0x88) != 0) {
                (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x88));
              }
              pxVar3 = _xmlStrndup(pxVar3,(int)local_28 - (int)pxVar3);
              *(xmlChar **)(param_1 + 0x88) = pxVar3;
            }
          }
        }
        else {
          iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"Location:",9);
          if (iVar1 == 0) {
            for (local_58 = param_2 + 9; (*local_58 == ' ' || (*local_58 == '\t'));
                local_58 = local_58 + 1) {
            }
            if (*(long *)(param_1 + 0x78) != 0) {
              (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x78));
            }
            if (*local_58 == '/') {
              pxVar3 = _xmlStrdup((xmlChar *)"http://");
              pxVar3 = _xmlStrcat(pxVar3,*(xmlChar **)(param_1 + 8));
              pxVar3 = _xmlStrcat(pxVar3,local_58);
              *(xmlChar **)(param_1 + 0x78) = pxVar3;
            }
            else {
              uVar2 = (*(code *)_xmlMemStrdup)(local_58);
              *(undefined8 *)(param_1 + 0x78) = uVar2;
            }
          }
          else {
            iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"WWW-Authenticate:",0x11);
            if (iVar1 == 0) {
              for (local_58 = param_2 + 0x11; (*local_58 == ' ' || (*local_58 == '\t'));
                  local_58 = local_58 + 1) {
              }
              if (*(long *)(param_1 + 0x80) != 0) {
                (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x80));
              }
              uVar2 = (*(code *)_xmlMemStrdup)(local_58);
              *(undefined8 *)(param_1 + 0x80) = uVar2;
            }
            else {
              iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"Proxy-Authenticate:",0x13);
              if (iVar1 == 0) {
                for (local_58 = param_2 + 0x13; (*local_58 == ' ' || (*local_58 == '\t'));
                    local_58 = local_58 + 1) {
                }
                if (*(long *)(param_1 + 0x80) != 0) {
                  (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x80));
                }
                uVar2 = (*(code *)_xmlMemStrdup)(local_58);
                *(undefined8 *)(param_1 + 0x80) = uVar2;
              }
              else {
                iVar1 = _xmlStrncasecmp(param_2,(xmlChar *)"Content-Length:",0xf);
                if (iVar1 == 0) {
                  lVar4 = _strtol((char *)(param_2 + 0xf),(char **)0x0,10);
                  *(int *)(param_1 + 0x6c) = (int)lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

