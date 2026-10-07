
undefined4 FUN_1001809f5(long param_1,ulong *param_2)

{
  xmlChar *pxVar1;
  bool bVar2;
  int iVar3;
  xmlChar *pxVar4;
  xmlChar *pxVar5;
  undefined8 uVar6;
  xmlChar *local_30;
  xmlChar *local_20;
  int local_10;
  
  if (param_2 == (ulong *)0x0) {
    return 0xffffffff;
  }
  local_30 = (xmlChar *)*param_2;
  while ((((((('`' < (char)*local_30 && ((char)*local_30 < '{')) ||
             (('@' < (char)*local_30 && ((char)*local_30 < '[')))) ||
            (((('/' < (char)*local_30 && ((char)*local_30 < ':')) || (*local_30 == '-')) ||
             ((*local_30 == '_' || (*local_30 == '.')))))) || (*local_30 == '!')) ||
          (((*local_30 == '~' || (*local_30 == '*')) ||
           ((*local_30 == '\'' || ((*local_30 == '(' || (*local_30 == ')')))))))) ||
         ((((*local_30 == '%' &&
            ((('/' < (char)local_30[1] && ((char)local_30[1] < ':')) ||
             ((('`' < (char)local_30[1] && ((char)local_30[1] < 'g')) ||
              (('@' < (char)local_30[1] && ((char)local_30[1] < 'G')))))))) &&
           ((('/' < (char)local_30[2] && ((char)local_30[2] < ':')) ||
            ((('`' < (char)local_30[2] && ((char)local_30[2] < 'g')) ||
             (('@' < (char)local_30[2] && ((char)local_30[2] < 'G')))))))) ||
          ((((((*local_30 == ';' || (*local_30 == ':')) || (*local_30 == '&')) ||
             ((*local_30 == '=' || (*local_30 == '+')))) || (*local_30 == '$')) ||
           (*local_30 == ','))))))) {
    if (*local_30 == '%') {
      local_30 = local_30 + 3;
    }
    else {
      local_30 = local_30 + 1;
    }
  }
  if (*local_30 == '@') {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
      }
      if ((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0) {
        uVar6 = _xmlURIUnescapeString(*param_2,(int)local_30 - (int)*param_2,0);
        *(undefined8 *)(param_1 + 0x20) = uVar6;
      }
      else {
        pxVar4 = _xmlStrndup((xmlChar *)*param_2,(int)local_30 - (int)*param_2);
        *(xmlChar **)(param_1 + 0x30) = pxVar4;
      }
    }
    local_30 = local_30 + 1;
  }
  else {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    local_30 = (xmlChar *)*param_2;
  }
  pxVar4 = local_30;
  if (*local_30 == '/') {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return 0;
  }
  iVar3 = (int)local_30;
  if (*local_30 == '[') {
    bVar2 = false;
    local_30 = local_30 + 1;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*local_30 == ':') {
        if (bVar2) {
          return 3;
        }
        if ((local_10 == 0) && (local_30 = local_30 + 1, *local_30 != ':')) {
          return 3;
        }
        bVar2 = true;
        local_30 = local_30 + 1;
      }
      else {
        for (; ((('/' < (char)*local_30 && ((char)*local_30 < ':')) ||
                (('`' < (char)*local_30 && ((char)*local_30 < 'g')))) ||
               (('@' < (char)*local_30 && ((char)*local_30 < 'G')))); local_30 = local_30 + 1) {
        }
        if (local_10 != 7) {
          if (*local_30 != ':') break;
          local_30 = local_30 + 1;
        }
      }
    }
    if ((!bVar2) && (local_10 != 8)) {
      return 3;
    }
    if (*local_30 != ']') {
      return 3;
    }
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
      }
      pxVar5 = _xmlStrndup(pxVar4 + 1,((int)local_30 - iVar3) + -1);
      *(xmlChar **)(param_1 + 0x18) = pxVar5;
    }
    local_30 = local_30 + 1;
  }
  else {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (*local_30 == '.') {
        return 3;
      }
      for (; ('/' < (char)*local_30 && ((char)*local_30 < ':')); local_30 = local_30 + 1) {
      }
      if (local_10 != 3) {
        if (*local_30 != '.') break;
        local_30 = local_30 + 1;
      }
    }
  }
  if ((*pxVar4 != '[') &&
     ((((local_10 < 4 ||
        ((*local_30 == '.' && (local_30 = local_30 + 1, local_30 != (xmlChar *)0x1)))) ||
       (('`' < (char)*local_30 && ((char)*local_30 < '{')))) ||
      (('@' < (char)*local_30 && ((char)*local_30 < '[')))))) {
    if ((((char)*local_30 < 'a') || ('z' < (char)*local_30)) &&
       ((((char)*local_30 < 'A' || ('Z' < (char)*local_30)) &&
        (((char)*local_30 < '0' || ('9' < (char)*local_30)))))) {
      return 4;
    }
    do {
      pxVar5 = local_30 + 1;
      if (((((char)*pxVar5 < 'a') || ('z' < (char)*pxVar5)) &&
          (((char)*pxVar5 < 'A' || ('Z' < (char)*pxVar5)))) &&
         (((char)*pxVar5 < '0' || ('9' < (char)*pxVar5)))) {
        if (*pxVar5 == '-') {
          if (*local_30 == '.') {
            return 5;
          }
        }
        else {
          if (*pxVar5 != '.') {
            pxVar1 = pxVar5;
            if (*local_30 == '.') {
              pxVar1 = local_30;
            }
            goto LAB_100181137;
          }
          if (*local_30 == '-') {
            return 6;
          }
          if (*local_30 == '.') {
            return 7;
          }
        }
      }
      local_30 = local_30 + 1;
    } while( true );
  }
LAB_1001811e1:
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*pxVar4 != '[') {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
      }
      if ((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0) {
        uVar6 = _xmlURIUnescapeString(pxVar4,(int)local_30 - iVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
      }
      else {
        pxVar4 = _xmlStrndup(pxVar4,(int)local_30 - iVar3);
        *(xmlChar **)(param_1 + 0x18) = pxVar4;
      }
    }
  }
  if (((*local_30 == ':') && (local_30 = local_30 + 1, '/' < (char)*local_30)) &&
     ((char)*local_30 < ':')) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    for (; ('/' < (char)*local_30 && ((char)*local_30 < ':')); local_30 = local_30 + 1) {
      if (param_1 != 0) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) * 10 + (int)(char)*local_30 + -0x30;
      }
    }
  }
  *param_2 = (ulong)local_30;
  return 0;
LAB_100181137:
  local_20 = pxVar1;
  pxVar1 = local_20 + -1;
  if (pxVar1 < pxVar4) goto LAB_10018118a;
  if (((((char)*pxVar1 < 'a') || ('z' < (char)*pxVar1)) &&
      (((char)*pxVar1 < 'A' || ('Z' < (char)*pxVar1)))) &&
     (((char)*pxVar1 < '0' || ('9' < (char)*pxVar1)))) goto LAB_10018118a;
  goto LAB_100181137;
LAB_10018118a:
  local_30 = pxVar5;
  if (((local_20 == pxVar4) || (local_20[-1] == '.')) &&
     ((((char)*local_20 < 'a' || ('z' < (char)*local_20)) &&
      (((char)*local_20 < 'A' || ('Z' < (char)*local_20)))))) {
    return 8;
  }
  goto LAB_1001811e1;
}

