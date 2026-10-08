
xmlChar * _xmlBuildRelativeURI(xmlChar *param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  long *plVar3;
  xmlChar *pxVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  long lVar7;
  xmlChar *local_58;
  int local_4c;
  int local_48;
  int local_44;
  long *local_38;
  char *local_30;
  xmlChar *local_28;
  xmlChar *local_20;
  
  local_58 = (xmlChar *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_38 = (long *)0x0;
  if ((param_1 == (xmlChar *)0x0) || (*param_1 == '\0')) {
    return (xmlChar *)0x0;
  }
  plVar3 = (long *)_xmlCreateURI();
  if (plVar3 == (long *)0x0) {
    return (xmlChar *)0x0;
  }
  if (*param_1 == '.') {
    pxVar4 = _xmlStrdup(param_1);
    plVar3[6] = (long)pxVar4;
  }
  else {
    iVar2 = _xmlParseURIReference(plVar3,param_1);
    if (iVar2 != 0) goto LAB_1008b71b6;
  }
  if ((param_2 == (xmlChar *)0x0) || (*param_2 == '\0')) {
    local_58 = _xmlStrdup(param_1);
  }
  else {
    local_38 = (long *)_xmlCreateURI();
    if (local_38 != (long *)0x0) {
      if (*param_2 == '.') {
        pxVar4 = _xmlStrdup(param_2);
        local_38[6] = (long)pxVar4;
      }
      else {
        iVar2 = _xmlParseURIReference(local_38,param_2);
        if (iVar2 != 0) goto LAB_1008b71b6;
      }
      if ((*plVar3 == 0) ||
         (((*local_38 != 0 &&
           (iVar2 = _xmlStrcmp((xmlChar *)*local_38,(xmlChar *)*plVar3), iVar2 == 0)) &&
          (iVar2 = _xmlStrcmp((xmlChar *)local_38[3],(xmlChar *)plVar3[3]), iVar2 == 0)))) {
        local_30 = (char *)local_38[6];
        if ((*(char *)plVar3[6] == '.') && (*(char *)(plVar3[6] + 1) == '/')) {
          local_48 = 2;
        }
        if ((*local_30 == '.') && (local_30[1] == '/')) {
          local_30 = local_30 + 2;
        }
        else if ((*local_30 == '/') && (*(char *)(plVar3[6] + (long)local_48) != '/')) {
          local_30 = local_30 + 1;
        }
        for (; ((uint)(byte)local_30[local_48] == (int)*(char *)(plVar3[6] + (long)local_48) &&
               (local_30[local_48] != '\0')); local_48 = local_48 + 1) {
        }
        if ((uint)(byte)local_30[local_48] == (int)*(char *)(plVar3[6] + (long)local_48)) {
          local_58 = (xmlChar *)0x0;
        }
        else {
          local_4c = local_48;
          if ((*(char *)(plVar3[6] + (long)local_48) == '/') && (0 < local_48)) {
            local_4c = local_48 + -1;
          }
          for (; (0 < local_4c && (*(char *)(plVar3[6] + (long)local_4c) != '/'));
              local_4c = local_4c + -1) {
          }
          if (local_4c == 0) {
            local_28 = (xmlChar *)plVar3[6];
          }
          else {
            local_4c = local_4c + 1;
            local_28 = (xmlChar *)(plVar3[6] + (long)local_4c);
          }
          if ((uint)(byte)local_30[local_48] != (int)*(char *)(plVar3[6] + (long)local_48)) {
            for (; local_30[local_4c] != '\0'; local_4c = local_4c + 1) {
              if (local_30[local_4c] == '/') {
                local_44 = local_44 + 1;
              }
            }
          }
          if (local_44 == 0) {
            local_58 = _xmlStrdup(local_28);
          }
          else {
            iVar2 = _xmlStrlen(local_28);
            local_58 = (xmlChar *)(*(code *)_xmlMalloc)((long)(local_44 * 3 + iVar2 + 1));
            local_20 = local_58;
            if (local_58 == (xmlChar *)0x0) {
              ppxVar5 = ___xmlGenericError();
              pxVar1 = *ppxVar5;
              ppvVar6 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar6,"xmlBuildRelativeURI: out of memory\n");
            }
            else {
              for (; 0 < local_44; local_44 = local_44 + -1) {
                *local_20 = '.';
                local_20[1] = '.';
                local_20[2] = '/';
                local_20 = local_20 + 3;
              }
              for (lVar7 = (long)(iVar2 + 1); lVar7 != 0; lVar7 = lVar7 + -1) {
                *local_20 = *local_28;
                local_28 = local_28 + 1;
                local_20 = local_20 + 1;
              }
            }
          }
        }
      }
      else {
        local_58 = _xmlStrdup(param_1);
      }
    }
  }
LAB_1008b71b6:
  if (plVar3 != (long *)0x0) {
    _xmlFreeURI(plVar3);
  }
  if (local_38 != (long *)0x0) {
    _xmlFreeURI(local_38);
  }
  return local_58;
}

