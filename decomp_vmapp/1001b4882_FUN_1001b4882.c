
void FUN_1001b4882(long *param_1)

{
  bool bVar1;
  int iVar2;
  xmlChar *str;
  xmlChar *pxVar3;
  int local_c;
  
  bVar1 = true;
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (((((*(char *)*param_1 == '$') || (*(char *)*param_1 == '(')) ||
       ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a)))) ||
      ((*(char *)*param_1 == '\'' || (*(char *)*param_1 == '\"')))) ||
     ((*(char *)*param_1 == '.' &&
      ((0x2f < *(byte *)(*param_1 + 1) && (*(byte *)(*param_1 + 1) < 0x3a)))))) {
    bVar1 = false;
  }
  else if (*(char *)*param_1 == '*') {
    bVar1 = true;
  }
  else if (*(char *)*param_1 == '/') {
    bVar1 = true;
  }
  else if (*(char *)*param_1 == '@') {
    bVar1 = true;
  }
  else if (*(char *)*param_1 == '.') {
    bVar1 = true;
  }
  else {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    str = (xmlChar *)FUN_1001b4555(param_1);
    if ((str == (xmlChar *)0x0) ||
       (pxVar3 = _xmlStrstr(str,(xmlChar *)"::"), pxVar3 == (xmlChar *)0x0)) {
      if (str == (xmlChar *)0x0) {
        _xmlXPathErr(param_1,7);
        return;
      }
      for (local_c = _xmlStrlen(str); *(char *)(*param_1 + (long)local_c) != '\0';
          local_c = local_c + 1) {
        if (*(char *)(*param_1 + (long)local_c) == '/') {
          bVar1 = true;
          break;
        }
        if (((*(char *)(*param_1 + (long)local_c) != ' ') &&
            ((*(byte *)(*param_1 + (long)local_c) < 9 || (10 < *(byte *)(*param_1 + (long)local_c)))
            )) && (*(char *)(*param_1 + (long)local_c) != '\r')) {
          if (*(char *)(*param_1 + (long)local_c) == ':') {
            bVar1 = true;
          }
          else if (*(char *)(*param_1 + (long)local_c) == '(') {
            iVar2 = _xmlXPathIsNodeType(str);
            if (iVar2 == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          else if (*(char *)(*param_1 + (long)local_c) == '[') {
            bVar1 = true;
          }
          else if (((*(char *)(*param_1 + (long)local_c) == '<') ||
                   (*(char *)(*param_1 + (long)local_c) == '>')) ||
                  (*(char *)(*param_1 + (long)local_c) == '=')) {
            bVar1 = true;
          }
          else {
            bVar1 = true;
          }
          break;
        }
      }
      if (*(char *)(*param_1 + (long)local_c) == '\0') {
        bVar1 = true;
      }
      (*(code *)_xmlFree)(str);
    }
    else {
      bVar1 = true;
      (*(code *)_xmlFree)(str);
    }
  }
  if (bVar1) {
    if (*(char *)*param_1 == '/') {
      FUN_1001a5741(param_1[7],0xffffffff,0xffffffff,8,0,0,0,0,0);
    }
    else {
      FUN_1001a5741(param_1[7],0xffffffff,0xffffffff,9,0,0,0,0,0);
    }
    FUN_1001b75b3(param_1);
  }
  else {
    FUN_1001b445d(param_1);
    if ((int)param_1[2] != 0) {
      return;
    }
    if ((*(char *)*param_1 == '/') && (*(char *)(*param_1 + 1) == '/')) {
      *param_1 = *param_1 + 2;
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1001a5741(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xb,6,1,0,0,0);
      FUN_1001a5741(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,10,1,0,0,0,0);
      FUN_1001b718d(param_1);
    }
    else if (*(char *)*param_1 == '/') {
      FUN_1001b718d(param_1);
    }
  }
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

