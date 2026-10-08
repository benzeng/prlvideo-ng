
undefined4 FUN_100906c53(long param_1,byte *param_2,xmlChar *param_3,int param_4)

{
  int iVar1;
  undefined4 local_78;
  xmlChar *local_58;
  xmlChar *local_50;
  byte *local_48;
  xmlChar *local_40;
  int local_38;
  int local_34;
  xmlChar *local_30;
  long local_28;
  void *local_20;
  void *local_18;
  long local_10;
  
  local_40 = (xmlChar *)0x0;
  if ((param_2 == (byte *)0x0) || (param_3 == (xmlChar *)0x0)) {
    local_78 = 0xffffffff;
  }
  else {
    local_48 = param_2;
    local_40 = _xmlStrdup(param_3);
LAB_10090735e:
    do {
      if ((local_48 == (byte *)0x0) || (*local_48 == 0)) break;
      for (; (*local_48 == 0x20 || (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
          local_48 = local_48 + 1) {
      }
      if (*local_48 == 0) break;
      if ((*local_48 != 0x2d) || (local_48[1] != 0x2d)) {
        local_50 = (xmlChar *)0x0;
        local_58 = (xmlChar *)0x0;
        local_34 = 0;
        local_48 = (byte *)FUN_100906806(local_48,&local_58);
        if ((local_58 == (xmlChar *)0x0) ||
           (((*local_48 != 0x20 && ((*local_48 < 9 || (10 < *local_48)))) && (*local_48 != 0xd))))
        break;
        for (; (*local_48 == 0x20 || (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))))
            ; local_48 = local_48 + 1) {
        }
        iVar1 = _xmlStrEqual(local_58,(xmlChar *)"SYSTEM");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(local_58,(xmlChar *)"PUBLIC");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_58,(xmlChar *)"DELEGATE");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(local_58,(xmlChar *)"ENTITY");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(local_58,(xmlChar *)"DOCTYPE");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(local_58,(xmlChar *)"LINKTYPE");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(local_58,(xmlChar *)"NOTATION");
                    if (iVar1 == 0) {
                      iVar1 = _xmlStrEqual(local_58,(xmlChar *)"SGMLDECL");
                      if (iVar1 == 0) {
                        iVar1 = _xmlStrEqual(local_58,(xmlChar *)"DOCUMENT");
                        if (iVar1 == 0) {
                          iVar1 = _xmlStrEqual(local_58,(xmlChar *)"CATALOG");
                          if (iVar1 == 0) {
                            iVar1 = _xmlStrEqual(local_58,(xmlChar *)"BASE");
                            if (iVar1 == 0) {
                              iVar1 = _xmlStrEqual(local_58,(xmlChar *)"OVERRIDE");
                              if (iVar1 != 0) {
                                (*(code *)_xmlFree)(local_58);
                                local_48 = (byte *)FUN_100906806(local_48,&local_58);
                                if (local_58 == (xmlChar *)0x0) break;
                                (*(code *)_xmlFree)(local_58);
                                goto LAB_10090735e;
                              }
                            }
                            else {
                              local_34 = 0x15;
                            }
                          }
                          else {
                            local_34 = 0x16;
                          }
                        }
                        else {
                          local_34 = 0x17;
                        }
                      }
                      else {
                        local_34 = 0x18;
                      }
                    }
                    else {
                      local_34 = 0x13;
                    }
                  }
                  else {
                    local_34 = 0x12;
                  }
                }
                else {
                  local_34 = 0x11;
                }
              }
              else {
                local_34 = 0xf;
              }
            }
            else {
              local_34 = 0x14;
            }
          }
          else {
            local_34 = 0xe;
          }
        }
        else {
          local_34 = 0xd;
        }
        (*(code *)_xmlFree)(local_58);
        local_58 = (xmlChar *)0x0;
        switch(local_34) {
        case 0xd:
        case 0xe:
        case 0x14:
          local_48 = (byte *)FUN_1009065b9(local_48,&local_58);
          if (local_48 != (byte *)0x0) {
            if ((local_34 != 0xd) &&
               (local_30 = (xmlChar *)FUN_100903f86(local_58), local_30 != (xmlChar *)0x0)) {
              if (local_58 != (xmlChar *)0x0) {
                (*(code *)_xmlFree)(local_58);
              }
              if (*local_30 == '\0') {
                (*(code *)_xmlFree)(local_30);
                local_58 = (xmlChar *)0x0;
              }
              else {
                local_58 = local_30;
              }
            }
            if ((*local_48 == 0x20) ||
               (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd)))) {
              for (; (*local_48 == 0x20 ||
                     (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
                  local_48 = local_48 + 1) {
              }
              local_48 = (byte *)FUN_1009065b9(local_48,&local_50);
            }
          }
          break;
        case 0xf:
          if (*local_48 == 0x25) {
            local_34 = 0x10;
          }
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          local_48 = (byte *)FUN_100906806(local_48,&local_58);
          if ((local_48 != (byte *)0x0) &&
             (((*local_48 == 0x20 || ((8 < *local_48 && (*local_48 < 0xb)))) || (*local_48 == 0xd)))
             ) {
            for (; ((*local_48 == 0x20 || ((8 < *local_48 && (*local_48 < 0xb)))) ||
                   (*local_48 == 0xd)); local_48 = local_48 + 1) {
            }
            local_48 = (byte *)FUN_1009065b9(local_48,&local_50);
          }
          break;
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
          local_48 = (byte *)FUN_1009065b9(local_48,&local_50);
        }
        if (local_48 == (byte *)0x0) {
          if (local_58 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_58);
          }
          if (local_50 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_50);
          }
          break;
        }
        if (local_34 == 0x15) {
          if (local_40 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_40);
          }
          local_40 = _xmlStrdup(local_50);
        }
        else if ((local_34 == 0xe) || (local_34 == 0xd)) {
          local_28 = _xmlBuildURI(local_50,local_40);
          if (local_28 != 0) {
            local_20 = (void *)FUN_100902893(local_34,local_58,local_28,0,0,0);
            local_38 = _xmlHashAddEntry(*(xmlHashTablePtr *)(param_1 + 0x60),local_58,local_20);
            if (local_38 < 0) {
              FUN_100902a3c(local_20);
            }
            (*(code *)_xmlFree)(local_28);
          }
        }
        else if (local_34 == 0x16) {
          if (param_4 == 0) {
            local_10 = _xmlBuildURI(local_50,local_40);
            if (local_10 != 0) {
              FUN_1009077d0(param_1,local_10);
              (*(code *)_xmlFree)(local_10);
            }
          }
          else {
            local_18 = (void *)FUN_100902893(0x16,local_50,0,0,0,0);
            local_38 = _xmlHashAddEntry(*(xmlHashTablePtr *)(param_1 + 0x60),local_50,local_18);
            if (local_38 < 0) {
              FUN_100902a3c(local_18);
            }
          }
        }
        if (local_58 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_58);
        }
        if (local_50 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_50);
        }
        goto LAB_10090735e;
      }
      local_48 = (byte *)FUN_100906532(local_48);
    } while (local_48 != (byte *)0x0);
    if (local_40 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_40);
    }
    if (local_48 == (byte *)0x0) {
      local_78 = 0xffffffff;
    }
    else {
      local_78 = 0;
    }
  }
  return local_78;
}

