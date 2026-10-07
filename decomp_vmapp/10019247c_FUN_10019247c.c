
undefined4 FUN_10019247c(long param_1,long param_2,int param_3)

{
  int iVar1;
  xmlDtdPtr pxVar2;
  undefined4 local_40;
  uint local_20;
  int local_1c;
  xmlNodePtr local_18;
  
  local_1c = 0;
  while( true ) {
    if (param_3 <= local_1c) {
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
        local_40 = 1;
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') {
        if (*(long *)(param_1 + 0x120) == 0) {
          local_40 = 1;
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x120),(xmlChar *)"html");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x120),(xmlChar *)"head");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x120),(xmlChar *)"body");
              if ((((iVar1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
                  ((pxVar2 = _xmlGetIntSubset(*(xmlDocPtr *)(param_1 + 0x10)),
                   pxVar2 == (xmlDtdPtr)0x0 || (pxVar2->ExternalID == (xmlChar *)0x0)))) ||
                 ((iVar1 = _xmlStrcasecmp(pxVar2->ExternalID,(xmlChar *)"-//W3C//DTD HTML 4.01//EN")
                  , iVar1 != 0 &&
                  (iVar1 = _xmlStrcasecmp(pxVar2->ExternalID,(xmlChar *)"-//W3C//DTD HTML 4//EN"),
                  iVar1 != 0)))) {
                if (*(long *)(param_1 + 0x50) == 0) {
                  local_40 = 0;
                }
                else {
                  for (local_18 = _xmlGetLastChild(*(xmlNodePtr *)(param_1 + 0x50));
                      (local_18 != (xmlNodePtr)0x0 && (local_18->type == XML_COMMENT_NODE));
                      local_18 = local_18->prev) {
                  }
                  if (local_18 == (xmlNodePtr)0x0) {
                    if ((*(int *)(*(long *)(param_1 + 0x50) + 8) != 1) &&
                       (*(long *)(*(long *)(param_1 + 0x50) + 0x50) != 0)) {
                      return 0;
                    }
                    for (local_20 = 0; local_20 < 0x35; local_20 = local_20 + 1) {
                      iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x120),
                                           (&PTR_s_a_101110f00)[local_20]);
                      if (iVar1 != 0) {
                        return 0;
                      }
                    }
                  }
                  else {
                    iVar1 = _xmlNodeIsText(local_18);
                    if (iVar1 != 0) {
                      return 0;
                    }
                    for (local_20 = 0; local_20 < 0x35; local_20 = local_20 + 1) {
                      iVar1 = _xmlStrEqual(local_18->name,(&PTR_s_a_101110f00)[local_20]);
                      if (iVar1 != 0) {
                        return 0;
                      }
                    }
                  }
                  local_40 = 1;
                }
              }
              else {
                local_40 = 1;
              }
            }
            else {
              local_40 = 1;
            }
          }
          else {
            local_40 = 1;
          }
        }
      }
      else {
        local_40 = 0;
      }
      return local_40;
    }
    if ((*(char *)(local_1c + param_2) != ' ') &&
       (((*(byte *)(local_1c + param_2) < 9 || (10 < *(byte *)(local_1c + param_2))) &&
        (*(char *)(local_1c + param_2) != '\r')))) break;
    local_1c = local_1c + 1;
  }
  return 0;
}

