
long FUN_10092d833(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_80;
  long local_48;
  long local_40;
  long local_38;
  int local_30;
  int local_2c;
  long local_20;
  long local_18;
  long local_10;
  
  local_48 = 0;
  local_30 = 0;
  local_2c = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_100921ed1(param_1,param_2,param_4,param_3);
    if (local_80 == 0) {
      local_80 = 0;
    }
    else {
      if (param_5 == 0) {
        for (local_38 = *(long *)(param_3 + 0x58); local_38 != 0;
            local_38 = *(long *)(local_38 + 0x30)) {
          if (*(long *)(local_38 + 0x48) == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x10),(xmlChar *)"id");
            if (iVar1 == 0) {
              FUN_10091dac6(param_1,0xbdb,0,0,local_38);
            }
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_38 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
            if (iVar1 != 0) {
              FUN_10091dac6(param_1,0xbdb,0,0,local_38);
            }
          }
        }
      }
      else {
        if (param_4 == 8) {
          local_30 = FUN_1009230c5(param_1,param_3,0,1,1,"(0 | 1)");
          local_2c = FUN_100922e64(param_1,param_3,1,1,1,"1");
        }
        else {
          local_30 = FUN_1009230c5(param_1,param_3,0,0xffffffff,1,"xs:nonNegativeInteger");
          local_2c = FUN_100922e64(param_1,param_3,0,0x40000000,1,
                                   "(xs:nonNegativeInteger | unbounded)");
        }
        FUN_100924a3e(param_1,0,param_3,local_30,local_2c);
        local_48 = FUN_100921fad(param_1,param_2,param_3,local_30,local_2c);
        if (local_48 == 0) {
          return 0;
        }
        *(long *)(local_48 + 0x18) = local_80;
        for (local_38 = *(long *)(param_3 + 0x58); local_38 != 0;
            local_38 = *(long *)(local_38 + 0x30)) {
          if (*(long *)(local_38 + 0x48) == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x10),(xmlChar *)"id");
            if (((iVar1 == 0) &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x10),(xmlChar *)"maxOccurs"),
                iVar1 == 0)) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x10),(xmlChar *)"minOccurs"),
               iVar1 == 0)) {
              FUN_10091dac6(param_1,0xbdb,0,0,local_38);
            }
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_38 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
            if (iVar1 != 0) {
              FUN_10091dac6(param_1,0xbdb,0,0,local_38);
            }
          }
        }
      }
      FUN_100922c95(param_1,0,0,param_3,"id");
      local_40 = *(long *)(param_3 + 0x18);
      if (((local_40 != 0) && (*(long *)(local_40 + 0x48) != 0)) &&
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"annotation"), iVar1 != 0
          && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))
      {
        uVar2 = FUN_100923b32(param_1,param_2,local_40);
        *(undefined8 *)(local_80 + 8) = uVar2;
        local_40 = *(long *)(local_40 + 0x30);
      }
      if (param_4 == 8) {
        local_20 = 0;
        while (((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
               ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"element"),
                iVar1 != 0 &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                      PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)
                )))) {
          lVar3 = FUN_100927a24(param_1,param_2,local_40,0);
          if (lVar3 != 0) {
            if (1 < *(int *)(lVar3 + 0x20)) {
              FUN_10091dd92(param_1,0x6b7,0,0,local_40,
                            "Invalid value for minOccurs (must be 0 or 1)",0);
            }
            if (1 < *(int *)(lVar3 + 0x24)) {
              FUN_10091dd92(param_1,0x6b6,0,0,local_40,
                            "Invalid value for maxOccurs (must be 0 or 1)",0);
            }
            if (local_20 == 0) {
              *(long *)(local_80 + 0x18) = lVar3;
              local_20 = lVar3;
            }
            else {
              *(long *)(local_20 + 0x10) = lVar3;
              local_20 = lVar3;
            }
          }
          local_40 = *(long *)(local_40 + 0x30);
        }
        if (local_40 != 0) {
          FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_40,0,"(annotation?, (annotation?, element*)"
                       );
        }
      }
      else {
        local_18 = 0;
        local_10 = 0;
        while ((((((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"element"),
                  iVar1 != 0)) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                       PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0
                 )) || (((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
                        ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"group"),
                         iVar1 != 0 &&
                         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                         iVar1 != 0)))))) ||
               ((((((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"any"),
                   iVar1 != 0)) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                  iVar1 != 0)) ||
                 ((((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"choice"),
                   iVar1 != 0)) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                  iVar1 != 0)))) ||
                (((local_40 != 0 && (*(long *)(local_40 + 0x48) != 0)) &&
                 ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"sequence"),
                  iVar1 != 0 &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                  iVar1 != 0))))))))) {
          if (((local_40 == 0) || (*(long *)(local_40 + 0x48) == 0)) ||
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"element"), iVar1 == 0
              || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                       PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0
                 )))) {
            if ((((local_40 == 0) || (*(long *)(local_40 + 0x48) == 0)) ||
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"group"), iVar1 == 0
                )) || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                            PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                      iVar1 == 0)) {
              if (((local_40 == 0) || (*(long *)(local_40 + 0x48) == 0)) ||
                 ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"any"), iVar1 == 0
                  || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                           PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                     iVar1 == 0)))) {
                if (((local_40 == 0) || (*(long *)(local_40 + 0x48) == 0)) ||
                   ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"choice"),
                    iVar1 == 0 ||
                    (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                    iVar1 == 0)))) {
                  if ((((local_40 != 0) && (*(long *)(local_40 + 0x48) != 0)) &&
                      (iVar1 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),(xmlChar *)"sequence"),
                      iVar1 != 0)) &&
                     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_40 + 0x48) + 0x10),
                                           PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                     iVar1 != 0)) {
                    local_18 = FUN_10092d833(param_1,param_2,local_40,6,1);
                  }
                }
                else {
                  local_18 = FUN_10092d833(param_1,param_2,local_40,7,1);
                }
              }
              else {
                local_18 = FUN_100924b0e(param_1,param_2,local_40);
              }
            }
            else {
              local_18 = FUN_100929ea2(param_1,param_2,local_40);
            }
          }
          else {
            local_18 = FUN_100927a24(param_1,param_2,local_40,0);
          }
          if (local_18 != 0) {
            if (local_10 == 0) {
              *(long *)(local_80 + 0x18) = local_18;
            }
            else {
              *(long *)(local_10 + 0x10) = local_18;
            }
            local_10 = local_18;
          }
          local_40 = *(long *)(local_40 + 0x30);
        }
        if (local_40 != 0) {
          FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_40,0,
                        "(annotation?, (element | group | choice | sequence | any)*)");
        }
      }
      if (param_5 != 0) {
        if ((local_30 == 0) && (local_2c == 0)) {
          local_80 = 0;
        }
        else {
          local_80 = local_48;
        }
      }
    }
  }
  return local_80;
}

