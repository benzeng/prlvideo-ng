
xmlChar * _xmlBuildURI(xmlChar *param_1,long param_2)

{
  char cVar1;
  xmlGenericErrorFunc pxVar2;
  undefined8 uVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long lVar6;
  char *pcVar7;
  xmlChar *local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long *local_30;
  long *local_28;
  undefined8 *local_20;
  
  local_50 = (xmlChar *)0x0;
  local_30 = (long *)0x0;
  local_28 = (long *)0x0;
  local_20 = (undefined8 *)0x0;
  if (param_1 == (xmlChar *)0x0) {
    local_44 = -1;
  }
  else if (*param_1 == '\0') {
    local_44 = 0;
  }
  else {
    local_30 = (long *)_xmlCreateURI();
    if (local_30 == (long *)0x0) goto LAB_100183422;
    local_44 = _xmlParseURIReference(local_30,param_1);
  }
  if (local_44 == 0) {
    if ((local_30 == (long *)0x0) || (*local_30 == 0)) {
      if (param_2 == 0) {
        local_44 = -1;
      }
      else {
        local_28 = (long *)_xmlCreateURI();
        if (local_28 == (long *)0x0) goto LAB_100183422;
        local_44 = _xmlParseURIReference(local_28,param_2);
      }
      if (local_44 == 0) {
        if (local_30 == (long *)0x0) {
          if (local_28[8] != 0) {
            (*(code *)_xmlFree)(local_28[8]);
            local_28[8] = 0;
          }
          local_50 = (xmlChar *)_xmlSaveUri(local_28);
        }
        else {
          local_20 = (undefined8 *)_xmlCreateURI();
          if (local_20 != (undefined8 *)0x0) {
            if ((((*local_30 == 0) && (local_30[6] == 0)) && (local_30[2] == 0)) &&
               (local_30[3] == 0)) {
              if (*local_28 != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(*local_28);
                *local_20 = uVar3;
              }
              if (local_28[2] == 0) {
                if (local_28[3] != 0) {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_28[3]);
                  local_20[3] = uVar3;
                  if (local_28[4] != 0) {
                    uVar3 = (*(code *)_xmlMemStrdup)(local_28[4]);
                    local_20[4] = uVar3;
                  }
                  *(int *)(local_20 + 5) = (int)local_28[5];
                }
              }
              else {
                uVar3 = (*(code *)_xmlMemStrdup)(local_28[2]);
                local_20[2] = uVar3;
              }
              if (local_28[6] != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(local_28[6]);
                local_20[6] = uVar3;
              }
              if (local_30[7] == 0) {
                if (local_28[7] != 0) {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_28[7]);
                  local_20[7] = uVar3;
                }
              }
              else {
                uVar3 = (*(code *)_xmlMemStrdup)(local_30[7]);
                local_20[7] = uVar3;
              }
              if (local_30[8] != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(local_30[8]);
                local_20[8] = uVar3;
              }
            }
            else {
              if (*local_30 != 0) {
                local_50 = (xmlChar *)_xmlSaveUri(local_30);
                goto LAB_100183422;
              }
              if (*local_28 != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(*local_28);
                *local_20 = uVar3;
              }
              if (local_30[7] != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(local_30[7]);
                local_20[7] = uVar3;
              }
              if (local_30[8] != 0) {
                uVar3 = (*(code *)_xmlMemStrdup)(local_30[8]);
                local_20[8] = uVar3;
              }
              if ((local_30[2] == 0) && (local_30[3] == 0)) {
                if (local_28[2] == 0) {
                  if (local_28[3] != 0) {
                    uVar3 = (*(code *)_xmlMemStrdup)(local_28[3]);
                    local_20[3] = uVar3;
                    if (local_28[4] != 0) {
                      uVar3 = (*(code *)_xmlMemStrdup)(local_28[4]);
                      local_20[4] = uVar3;
                    }
                    *(int *)(local_20 + 5) = (int)local_28[5];
                  }
                }
                else {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_28[2]);
                  local_20[2] = uVar3;
                }
                if ((local_30[6] == 0) || (*(char *)local_30[6] != '/')) {
                  local_40 = 2;
                  if (local_30[6] != 0) {
                    lVar6 = -1;
                    pcVar7 = (char *)local_30[6];
                    do {
                      if (lVar6 == 0) break;
                      lVar6 = lVar6 + -1;
                      cVar1 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar1 != '\0');
                    local_40 = ~(uint)lVar6 + 1;
                  }
                  if (local_28[6] != 0) {
                    lVar6 = -1;
                    pcVar7 = (char *)local_28[6];
                    do {
                      if (lVar6 == 0) break;
                      lVar6 = lVar6 + -1;
                      cVar1 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar1 != '\0');
                    local_40 = (~(uint)lVar6 - 1) + local_40;
                  }
                  uVar3 = (*(code *)_xmlMallocAtomic)((long)local_40);
                  local_20[6] = uVar3;
                  if (local_20[6] == 0) {
                    ppxVar4 = ___xmlGenericError();
                    pxVar2 = *ppxVar4;
                    ppvVar5 = ___xmlGenericErrorContext();
                    (*pxVar2)(*ppvVar5,"xmlBuildURI: out of memory\n");
                    goto LAB_100183422;
                  }
                  *(undefined1 *)local_20[6] = 0;
                  local_38 = 0;
                  local_34 = 0;
                  if (local_28[6] != 0) {
                    while (*(char *)(local_28[6] + (long)local_38) != '\0') {
                      for (; (*(char *)(local_28[6] + (long)local_38) != '\0' &&
                             (*(char *)(local_28[6] + (long)local_38) != '/'));
                          local_38 = local_38 + 1) {
                      }
                      if (*(char *)(local_28[6] + (long)local_38) == '\0') break;
                      local_38 = local_38 + 1;
                      for (; local_34 < local_38; local_34 = local_34 + 1) {
                        *(undefined1 *)(local_20[6] + (long)local_34) =
                             *(undefined1 *)(local_28[6] + (long)local_34);
                      }
                    }
                  }
                  *(undefined1 *)(local_20[6] + (long)local_34) = 0;
                  if ((local_30[6] != 0) && (*(char *)local_30[6] != '\0')) {
                    local_3c = 0;
                    if ((local_34 == 0) && (local_28[3] != 0)) {
                      *(undefined1 *)local_20[6] = 0x2f;
                      local_34 = 1;
                    }
                    for (; *(char *)(local_30[6] + (long)local_3c) != '\0'; local_3c = local_3c + 1)
                    {
                      *(undefined1 *)(local_20[6] + (long)local_34) =
                           *(undefined1 *)(local_30[6] + (long)local_3c);
                      local_34 = local_34 + 1;
                    }
                  }
                  *(undefined1 *)(local_20[6] + (long)local_34) = 0;
                  _xmlNormalizeURIPath(local_20[6]);
                }
                else {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_30[6]);
                  local_20[6] = uVar3;
                }
              }
              else {
                if (local_30[2] == 0) {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_30[3]);
                  local_20[3] = uVar3;
                  if (local_30[4] != 0) {
                    uVar3 = (*(code *)_xmlMemStrdup)(local_30[4]);
                    local_20[4] = uVar3;
                  }
                  *(int *)(local_20 + 5) = (int)local_30[5];
                }
                else {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_30[2]);
                  local_20[2] = uVar3;
                }
                if (local_30[6] != 0) {
                  uVar3 = (*(code *)_xmlMemStrdup)(local_30[6]);
                  local_20[6] = uVar3;
                }
              }
            }
            local_50 = (xmlChar *)_xmlSaveUri(local_20);
          }
        }
      }
      else if (local_30 != (long *)0x0) {
        local_50 = (xmlChar *)_xmlSaveUri(local_30);
      }
    }
    else {
      local_50 = _xmlStrdup(param_1);
    }
  }
LAB_100183422:
  if (local_30 != (long *)0x0) {
    _xmlFreeURI(local_30);
  }
  if (local_28 != (long *)0x0) {
    _xmlFreeURI(local_28);
  }
  if (local_20 != (undefined8 *)0x0) {
    _xmlFreeURI(local_20);
  }
  return local_50;
}

