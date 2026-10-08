
undefined4 * FUN_1009252f5(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *local_90;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  xmlChar *local_48;
  xmlChar *local_40;
  undefined4 *local_38;
  long local_30;
  long local_28;
  long local_20;
  int local_14;
  undefined8 local_10;
  
  local_50 = 0;
  local_30 = 0;
  local_14 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_90 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_100920729(param_3,"ref");
    local_20 = FUN_100920729(param_3,"name");
    if ((local_28 == 0) && (local_20 == 0)) {
      FUN_10091d7dc(param_1,0xbed,0,param_3,0,
                    "One of the attributes \'ref\' or \'name\' must be present");
      local_90 = (undefined4 *)0x0;
    }
    else {
      if ((param_4 == 0) && (local_28 != 0)) {
        local_14 = 1;
      }
      else if (local_20 == 0) {
        FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
        return (undefined4 *)0x0;
      }
      if (local_14 == 0) {
        local_10 = 0;
        uVar2 = _xmlSchemaGetBuiltInType(0x16);
        iVar1 = FUN_100923679(param_1,&PTR_s_attribute_decl__102279870,0,local_20,uVar2,&local_48);
        if (iVar1 != 0) {
          return (undefined4 *)0x0;
        }
        iVar1 = _xmlStrEqual(local_48,(xmlChar *)"xmlns");
        if (iVar1 != 0) {
          uVar2 = _xmlSchemaGetBuiltInType(0x16);
          FUN_10091e207(param_1,0xbf0,0,local_20,uVar2,0,0,
                        "The value of type \'xs:NCName\' must not match \'xmlns\'",0,0);
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          return (undefined4 *)0x0;
        }
        if (param_4 == 0) {
          local_28 = FUN_100920729(param_3,"form");
          if (local_28 == 0) {
            if ((*(uint *)(param_2 + 0x30) >> 1 & 1) != 0) {
              local_10 = *(undefined8 *)(param_1 + 0xd0);
            }
          }
          else {
            local_40 = (xmlChar *)FUN_10092084c(param_1,local_28);
            iVar1 = _xmlStrEqual(local_40,(xmlChar *)"qualified");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(local_40,(xmlChar *)"unqualified");
              if (iVar1 == 0) {
                FUN_10091e207(param_1,0xbdd,0,local_28,0,"(qualified | unqualified)",local_40,0,0,0)
                ;
              }
            }
            else {
              local_10 = *(undefined8 *)(param_1 + 0xd0);
            }
          }
        }
        else {
          local_10 = *(undefined8 *)(param_1 + 0xd0);
        }
        local_38 = (undefined4 *)FUN_100921389(param_1,param_2,local_48,local_10,param_3,param_4);
        if (local_38 == (undefined4 *)0x0) {
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          return (undefined4 *)0x0;
        }
        *local_38 = 0xf;
        *(long *)(local_38 + 0x1a) = param_3;
        if (param_4 != 0) {
          local_38[0x1e] = local_38[0x1e] | 1;
        }
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x1c),
                             PTR_s_http___www_w3_org_2001_XMLSchema_102279858);
        if (iVar1 != 0) {
          FUN_10091dd92(param_1,0xbf1,&local_50,local_38,param_3,
                        "The target namespace must not match \'%s\'",
                        PTR_s_http___www_w3_org_2001_XMLSchema_102279858);
        }
        for (local_28 = *(long *)(param_3 + 0x58); local_28 != 0;
            local_28 = *(long *)(local_28 + 0x30)) {
          if (*(long *)(local_28 + 0x48) == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"id");
            if ((((iVar1 == 0) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"default"),
                 iVar1 == 0)) &&
                ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"fixed"),
                 iVar1 == 0 &&
                 ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"name"),
                  iVar1 == 0 &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"type"),
                  iVar1 == 0)))))) &&
               ((param_4 != 0 ||
                ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"form"), iVar1 == 0
                 && (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"use"),
                    iVar1 == 0)))))) {
              FUN_10091dac6(param_1,0xbdb,&local_50,local_38,local_28);
            }
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
            if (iVar1 != 0) {
              FUN_10091dac6(param_1,0xbdb,&local_50,local_38,local_28);
            }
          }
        }
        FUN_100922c05(param_1,param_2,&local_50,local_38,param_3,"type",local_38 + 0xe,
                      local_38 + 0xc);
      }
      else {
        local_58 = 0;
        local_60 = 0;
        iVar1 = FUN_100922b92(param_1,param_2,&PTR_s_attribute_use_102279878,0,local_28,&local_58,
                              &local_60);
        if (iVar1 != 0) {
          return (undefined4 *)0x0;
        }
        local_38 = (undefined4 *)FUN_100921389(param_1,param_2,0,0,param_3,0);
        if (local_38 == (undefined4 *)0x0) {
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
          return (undefined4 *)0x0;
        }
        *local_38 = 0xf;
        *(long *)(local_38 + 0x1a) = param_3;
        *(undefined8 *)(local_38 + 10) = local_58;
        *(undefined8 *)(local_38 + 8) = local_60;
        FUN_100923805(param_1,param_2,param_3,local_38,local_58);
        if (local_20 != 0) {
          FUN_10091e0f4(param_1,0xbed,&local_50,local_38,local_20,"ref","name");
        }
        for (local_28 = *(long *)(param_3 + 0x58); local_28 != 0;
            local_28 = *(long *)(local_28 + 0x30)) {
          if (*(long *)(local_28 + 0x48) == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"type");
            if ((iVar1 == 0) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"form"), iVar1 == 0))
            {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"ref");
              if (((((iVar1 == 0) &&
                    (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"use"),
                    iVar1 == 0)) &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"id"), iVar1 == 0
                   )) && ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"name"),
                          iVar1 == 0 &&
                          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"fixed"),
                          iVar1 == 0)))) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"default"),
                 iVar1 == 0)) {
                FUN_10091dac6(param_1,0xbdb,&local_50,local_38,local_28);
              }
            }
            else {
              FUN_10091dac6(param_1,0xbee,&local_50,local_38,local_28);
            }
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
            if (iVar1 != 0) {
              FUN_10091dac6(param_1,0xbdb,&local_50,local_38,local_28);
            }
          }
        }
      }
      FUN_100922c95(param_1,0,local_38,param_3,"id");
      uVar2 = FUN_1009208b3(param_1,param_3,"fixed");
      *(undefined8 *)(local_38 + 0x16) = uVar2;
      if (*(long *)(local_38 + 0x16) != 0) {
        local_38[0x1e] = local_38[0x1e] | 0x200;
      }
      local_28 = FUN_100920729(param_3,"default");
      if (local_28 != 0) {
        if (((uint)local_38[0x1e] >> 9 & 1) == 0) {
          uVar2 = FUN_10092084c(param_1,local_28);
          *(undefined8 *)(local_38 + 0x16) = uVar2;
        }
        else {
          FUN_10091e0f4(param_1,0xbeb,&local_50,local_38,local_28,"default","fixed");
        }
      }
      if (param_4 == 0) {
        local_28 = FUN_100920729(param_3,"use");
        if (local_28 == 0) {
          local_38[0x14] = 2;
        }
        else {
          local_40 = (xmlChar *)FUN_10092084c(param_1,local_28);
          iVar1 = _xmlStrEqual(local_40,(xmlChar *)"optional");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(local_40,(xmlChar *)"prohibited");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(local_40,(xmlChar *)"required");
              if (iVar1 == 0) {
                FUN_10091e207(param_1,0x6ee,local_38,local_28,0,"(optional | prohibited | required)"
                              ,local_40,0,0,0);
              }
              else {
                local_38[0x14] = 1;
              }
            }
            else {
              local_38[0x14] = 0;
            }
          }
          else {
            local_38[0x14] = 2;
          }
        }
        if (((local_38[0x14] != 2) && (*(long *)(local_38 + 0x16) != 0)) &&
           ((((uint)local_38[0x1e] >> 9 ^ 1) & 1) != 0)) {
          FUN_10091e207(param_1,0xbec,local_38,local_28,0,"(optional | prohibited | required)",0,
                        "The value must be \'optional\' if the attribute \'default\' is present as well"
                        ,0,0);
        }
      }
      local_30 = *(long *)(param_3 + 0x18);
      if ((((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation"), iVar1 != 0)
          ) && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))
      {
        uVar2 = FUN_100923b32(param_1,param_2,local_30);
        *(undefined8 *)(local_38 + 0x10) = uVar2;
        local_30 = *(long *)(local_30 + 0x30);
      }
      if (local_14 == 0) {
        if (((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"simpleType"),
            iVar1 != 0 &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))
        {
          if (*(long *)(local_38 + 0xc) == 0) {
            uVar2 = FUN_100929693(param_1,param_2,local_30,0);
            *(undefined8 *)(local_38 + 0x18) = uVar2;
          }
          else {
            FUN_10091e58d(param_1,0xbef,&local_50,local_38,param_3,local_30,
                          "The attribute \'type\' and the <simpleType> child are mutually exclusive"
                          ,0);
          }
          local_30 = *(long *)(local_30 + 0x30);
        }
        if (local_30 != 0) {
          FUN_10091e58d(param_1,0xbd9,&local_50,local_38,param_3,local_30,0,
                        "(annotation?, simpleType?)");
        }
      }
      else if (local_30 != 0) {
        if (((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"simpleType"),
            iVar1 == 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0))))
        {
          FUN_10091e58d(param_1,0xbd9,&local_50,local_38,param_3,local_30,0,"(annotation?)");
        }
        else {
          FUN_10091e58d(param_1,0xbee,&local_50,local_38,param_3,local_30,0,"(annotation?)");
        }
      }
      if (local_50 != 0) {
        (*(code *)_xmlFree)(local_50);
      }
      local_90 = local_38;
    }
  }
  return local_90;
}

