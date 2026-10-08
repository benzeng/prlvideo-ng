
void FUN_1008f380a(long *param_1,xmlChar *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  xmlChar *local_68;
  char *local_50;
  int local_44;
  
  local_68 = param_2;
  if (param_2 == (xmlChar *)0x0) {
    local_68 = (xmlChar *)_xmlXPathParseName(param_1);
  }
  if (local_68 == (xmlChar *)0x0) {
    _xmlXPathErr(param_1,7);
  }
  else if (*(char *)*param_1 == '(') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    local_44 = 1;
    iVar2 = _xmlStrlen((xmlChar *)*param_1);
    pcVar3 = (char *)(*(code *)_xmlMallocAtomic)((long)(iVar2 + 1));
    local_50 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      FUN_1008f21a1("allocating buffer");
    }
    else {
      while (*(char *)*param_1 != '\0') {
        if (*(char *)*param_1 == ')') {
          local_44 = local_44 + -1;
          if (local_44 == 0) {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
            break;
          }
          *local_50 = *(char *)*param_1;
          local_50 = local_50 + 1;
        }
        else if (*(char *)*param_1 == '(') {
          local_44 = local_44 + 1;
          *local_50 = *(char *)*param_1;
          local_50 = local_50 + 1;
        }
        else if (*(char *)*param_1 == '^') {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
          if (((*(char *)*param_1 == ')') || (*(char *)*param_1 == '(')) ||
             (*(char *)*param_1 == '^')) {
            *local_50 = *(char *)*param_1;
            local_50 = local_50 + 1;
          }
          else {
            *local_50 = '^';
            local_50[1] = *(char *)*param_1;
            local_50 = local_50 + 2;
          }
        }
        else {
          *local_50 = *(char *)*param_1;
          local_50 = local_50 + 1;
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      *local_50 = '\0';
      if ((local_44 == 0) || (*(char *)*param_1 != '\0')) {
        iVar2 = _xmlStrEqual(local_68,(xmlChar *)"xpointer");
        if (iVar2 == 0) {
          iVar2 = _xmlStrEqual(local_68,(xmlChar *)"element");
          if (iVar2 == 0) {
            iVar2 = _xmlStrEqual(local_68,(xmlChar *)"xmlns");
            if (iVar2 == 0) {
              FUN_1008f2239(param_1,0x76c,"unsupported scheme \'%s\'\n",local_68);
            }
            else {
              lVar1 = *param_1;
              *param_1 = (long)pcVar3;
              lVar4 = _xmlXPathParseNCName(param_1);
              if (lVar4 == 0) {
                (*(code *)_xmlFree)(pcVar3);
                (*(code *)_xmlFree)(local_68);
                _xmlXPathErr(param_1,0x10);
                return;
              }
              while (((*(char *)*param_1 == ' ' ||
                      ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
                     (*(char *)*param_1 == '\r'))) {
                if (*(char *)*param_1 != '\0') {
                  *param_1 = *param_1 + 1;
                }
              }
              if (*(char *)*param_1 != '=') {
                (*(code *)_xmlFree)(lVar4);
                (*(code *)_xmlFree)(pcVar3);
                (*(code *)_xmlFree)(local_68);
                _xmlXPathErr(param_1,0x10);
                return;
              }
              if (*(char *)*param_1 != '\0') {
                *param_1 = *param_1 + 1;
              }
              while ((*(char *)*param_1 == ' ' ||
                     (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) ||
                      (*(char *)*param_1 == '\r'))))) {
                if (*(char *)*param_1 != '\0') {
                  *param_1 = *param_1 + 1;
                }
              }
              lVar5 = _xmlParseURI(*param_1);
              if (lVar5 == 0) {
                (*(code *)_xmlFree)(lVar4);
                (*(code *)_xmlFree)(pcVar3);
                (*(code *)_xmlFree)(local_68);
                _xmlXPathErr(param_1,0x10);
                return;
              }
              lVar6 = _xmlSaveUri(lVar5);
              _xmlFreeURI(lVar5);
              if (lVar6 == 0) {
                (*(code *)_xmlFree)(lVar4);
                (*(code *)_xmlFree)(pcVar3);
                (*(code *)_xmlFree)(local_68);
                _xmlXPathErr(param_1,0xf);
                return;
              }
              _xmlXPathRegisterNs(param_1[3],lVar4,lVar6);
              *param_1 = lVar1;
              (*(code *)_xmlFree)(lVar6);
              (*(code *)_xmlFree)(lVar4);
            }
          }
          else {
            lVar1 = *param_1;
            *param_1 = (long)pcVar3;
            if (*pcVar3 == '/') {
              _xmlXPathRoot(param_1);
              FUN_1008f4004(param_1,0);
            }
            else {
              lVar4 = _xmlXPathParseName(param_1);
              if (lVar4 == 0) {
                *param_1 = lVar1;
                (*(code *)_xmlFree)(pcVar3);
                _xmlXPathErr(param_1,7);
                return;
              }
              FUN_1008f4004(param_1,lVar4);
            }
            *param_1 = lVar1;
          }
        }
        else {
          lVar1 = *param_1;
          *param_1 = (long)pcVar3;
          *(undefined8 *)(param_1[3] + 8) = *(undefined8 *)param_1[3];
          *(undefined4 *)(param_1[3] + 0x6c) = 1;
          *(undefined4 *)(param_1[3] + 0x68) = 1;
          _xmlXPathEvalExpr(param_1);
          *param_1 = lVar1;
        }
        (*(code *)_xmlFree)(pcVar3);
        (*(code *)_xmlFree)(local_68);
      }
      else {
        (*(code *)_xmlFree)(pcVar3);
        _xmlXPathErr(param_1,0x10);
      }
    }
  }
  else {
    _xmlXPathErr(param_1,7);
  }
  return;
}

