
xmlChar * FUN_1008e9c1c(long *param_1,undefined4 *param_2,int *param_3,undefined8 *param_4,
                       xmlChar *param_5)

{
  xmlGenericErrorFunc pxVar1;
  bool bVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  xmlChar *local_60;
  xmlChar *local_50;
  
  if (((param_2 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (undefined8 *)0x0))
  {
    ppxVar4 = ___xmlGenericError();
    pxVar1 = *ppxVar4;
    ppvVar5 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar5,"Internal error at %s:%d\n","xpath.c",0x21bc);
    local_60 = (xmlChar *)0x0;
  }
  else {
    *param_3 = 0;
    *param_2 = 0;
    *param_4 = 0;
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if ((param_5 == (xmlChar *)0x0) && (*(char *)*param_1 == '*')) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      *param_2 = 3;
      local_60 = (xmlChar *)0x0;
    }
    else {
      local_50 = param_5;
      if (param_5 == (xmlChar *)0x0) {
        local_50 = (xmlChar *)_xmlXPathParseNCName(param_1);
      }
      if (local_50 == (xmlChar *)0x0) {
        _xmlXPathErr(param_1,7);
        local_60 = (xmlChar *)0x0;
      }
      else {
        if ((*(char *)*param_1 == ' ') ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))
        {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
               || (*(char *)*param_1 == '\r'))) {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
        if (*(char *)*param_1 == '(') {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
          iVar3 = _xmlStrEqual(local_50,(xmlChar *)"comment");
          if (iVar3 == 0) {
            iVar3 = _xmlStrEqual(local_50,(xmlChar *)"node");
            if (iVar3 == 0) {
              iVar3 = _xmlStrEqual(local_50,(xmlChar *)"processing-instruction");
              if (iVar3 == 0) {
                iVar3 = _xmlStrEqual(local_50,(xmlChar *)"text");
                if (iVar3 == 0) {
                  if (local_50 != (xmlChar *)0x0) {
                    (*(code *)_xmlFree)(local_50);
                  }
                  _xmlXPathErr(param_1,7);
                  return (xmlChar *)0x0;
                }
                *param_3 = 3;
              }
              else {
                *param_3 = 7;
              }
            }
            else {
              *param_3 = 0;
            }
          }
          else {
            *param_3 = 8;
          }
          *param_2 = 1;
          while ((*(char *)*param_1 == ' ' ||
                 (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) ||
                  (*(char *)*param_1 == '\r'))))) {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
          }
          if (*param_3 == 7) {
            if (local_50 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_50);
            }
            local_50 = (xmlChar *)0x0;
            if (*(char *)*param_1 != ')') {
              local_50 = (xmlChar *)FUN_1008e6f7a(param_1);
              if ((int)param_1[2] != 0) {
                return (xmlChar *)0x0;
              }
              *param_2 = 2;
              while (((*(char *)*param_1 == ' ' ||
                      ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
                     (*(char *)*param_1 == '\r'))) {
                if (*(char *)*param_1 != '\0') {
                  *param_1 = *param_1 + 1;
                }
              }
            }
          }
          if (*(char *)*param_1 == ')') {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
            local_60 = local_50;
          }
          else {
            if (local_50 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_50);
            }
            _xmlXPathErr(param_1,8);
            local_60 = (xmlChar *)0x0;
          }
        }
        else {
          *param_2 = 5;
          if ((!bVar2) && (*(char *)*param_1 == ':')) {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
            *param_4 = local_50;
            if (*(char *)*param_1 == '*') {
              if (*(char *)*param_1 != '\0') {
                *param_1 = *param_1 + 1;
              }
              *param_2 = 3;
              return (xmlChar *)0x0;
            }
            local_50 = (xmlChar *)_xmlXPathParseNCName(param_1);
            if (local_50 == (xmlChar *)0x0) {
              _xmlXPathErr(param_1,7);
              return (xmlChar *)0x0;
            }
          }
          local_60 = local_50;
        }
      }
    }
  }
  return local_60;
}

