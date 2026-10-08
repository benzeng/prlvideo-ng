
undefined4 * FUN_100927a24(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  xmlChar *in_stack_ffffffffffffff18;
  undefined4 *puVar3;
  undefined4 uVar5;
  xmlChar *pxVar4;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 *puVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  xmlChar *local_20;
  long local_18;
  long local_10;
  
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_44 = 0;
  local_40 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return (undefined4 *)0x0;
  }
  local_58 = FUN_100920729(param_3,"name");
  local_60 = FUN_100920729(param_3,"ref");
  if ((param_4 == 0) && (local_60 != 0)) {
    local_44 = 1;
  }
  else if (local_58 == 0) {
    FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
    return (undefined4 *)0x0;
  }
  FUN_100922c95(param_1,0,0,param_3,"id");
  local_68 = *(long *)(param_3 + 0x18);
  if (((local_68 != 0) && (*(long *)(local_68 + 0x48) != 0)) &&
     ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"annotation"), iVar1 != 0 &&
      (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                            PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)))) {
    local_70 = FUN_100923b32(param_1,param_2,local_68);
    local_68 = *(long *)(local_68 + 0x30);
  }
  if (param_4 == 0) {
    local_4c = FUN_1009230c5(param_1,param_3,0,0xffffffff,1,"xs:nonNegativeInteger");
    local_48 = FUN_100922e64(param_1,param_3,0,0x40000000,1,"(xs:nonNegativeInteger | unbounded)");
    FUN_100924a3e(param_1,0,param_3,local_4c,local_48);
    local_78 = (undefined4 *)FUN_100921fad(param_1,param_2,param_3,local_4c,local_48);
    if (local_78 == (undefined4 *)0x0) goto LAB_100928c90;
    if (local_44 != 0) {
      local_88 = 0;
      local_90 = 0;
      local_38 = 0;
      FUN_100922b92(param_1,param_2,0,0,local_60,&local_88,&local_90);
      FUN_100923805(param_1,param_2,param_3,0,local_88);
      if (local_58 != 0) {
        FUN_10091e0f4(param_1,0xbdf,0,0,local_58,"ref","name");
      }
      local_60 = *(long *)(param_3 + 0x58);
      while (local_60 != 0) {
        if (*(long *)(local_60 + 0x48) == 0) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"ref");
          if ((((iVar1 == 0) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"name"), iVar1 == 0))
              && (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"id"), iVar1 == 0))
             && ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"maxOccurs"),
                 iVar1 == 0 &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"minOccurs"),
                 iVar1 == 0)))) {
            FUN_10091d9af(param_1,0xbe0,0,0,local_60,
                          "Only the attributes \'minOccurs\', \'maxOccurs\' and \'id\' are allowed in addition to \'ref\'"
                         );
            break;
          }
          local_60 = *(long *)(local_60 + 0x30);
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_60 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
          if (iVar1 != 0) {
            FUN_10091dac6(param_1,0xbdb,0,0,local_60);
          }
          local_60 = *(long *)(local_60 + 0x30);
        }
      }
      if (local_68 != 0) {
        FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_68,0,"(annotation?)");
      }
      if (((local_4c != 0) || (local_48 != 0)) &&
         (local_38 = FUN_100921e20(param_1,0xe,local_90,local_88), local_38 != 0)) {
        *(long *)(local_78 + 6) = local_38;
        *(long *)(local_78 + 2) = local_70;
        FUN_10091eeca(*(long *)(param_1 + 0x30) + 0x20,local_78);
        return local_78;
      }
      goto LAB_100928c90;
    }
  }
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  uVar2 = _xmlSchemaGetBuiltInType(0x16);
  iVar1 = FUN_100923679(param_1,0,0,local_58,uVar2,&local_98);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      local_60 = FUN_100920729(param_3,"form");
      if (local_60 == 0) {
        if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
          local_30 = *(undefined8 *)(param_1 + 0xd0);
        }
      }
      else {
        local_20 = (xmlChar *)FUN_10092084c(param_1,local_60);
        iVar1 = _xmlStrEqual(local_20,(xmlChar *)"qualified");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(local_20,(xmlChar *)"unqualified");
          if (iVar1 == 0) {
            in_stack_ffffffffffffff20 = 0;
            in_stack_ffffffffffffff18 = local_20;
            FUN_10091e207(param_1,0xbdd,0,local_60,0,"(qualified | unqualified)",local_20,0,0,0);
          }
        }
        else {
          local_30 = *(undefined8 *)(param_1 + 0xd0);
        }
      }
    }
    else {
      local_30 = *(undefined8 *)(param_1 + 0xd0);
    }
    local_80 = (undefined4 *)FUN_100921843(param_1,param_2,local_98,local_30,param_3,param_4);
    if (local_80 != (undefined4 *)0x0) {
      *local_80 = 0xe;
      *(long *)(local_80 + 0x12) = param_3;
      *(undefined8 *)(local_80 + 0x18) = local_30;
      local_60 = *(long *)(param_3 + 0x58);
      while( true ) {
        uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
        uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 0x20);
        if (local_60 == 0) break;
        if (*(long *)(local_60 + 0x48) == 0) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"name");
          if (((((iVar1 == 0) &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"type"), iVar1 == 0)
                ) && (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"id"),
                     iVar1 == 0)) &&
              ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"default"),
               iVar1 == 0 &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"fixed"), iVar1 == 0)
               ))) && ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"block"),
                       iVar1 == 0 &&
                       (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"nillable"),
                       iVar1 == 0)))) {
            if (param_4 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"maxOccurs");
              if (((iVar1 == 0) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"minOccurs"),
                  iVar1 == 0)) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"form"), iVar1 == 0
                 )) {
                FUN_10091dac6(param_1,0xbdb,0,local_80,local_60);
              }
            }
            else {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"final");
              if (((iVar1 == 0) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"abstract"),
                  iVar1 == 0)) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_60 + 0x10),(xmlChar *)"substitutionGroup"
                                      ), iVar1 == 0)) {
                FUN_10091dac6(param_1,0xbdb,0,local_80,local_60);
              }
            }
          }
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_60 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
          if (iVar1 != 0) {
            FUN_10091dac6(param_1,0xbdb,0,local_80,local_60);
          }
        }
        local_60 = *(long *)(local_60 + 0x30);
      }
      if (param_4 != 0) {
        local_80[0x16] = local_80[0x16] | 2;
        local_80[0x16] = local_80[0x16] | 0x20;
        puVar6 = local_80 + 0x1e;
        puVar3 = local_80 + 0x20;
        FUN_100922c05(param_1,param_2,0,local_80,param_3,"substitutionGroup",puVar3,puVar6);
        uVar5 = (undefined4)((ulong)puVar3 >> 0x20);
        uVar8 = (undefined4)((ulong)puVar6 >> 0x20);
        iVar1 = FUN_1009233c7(param_1,0,local_80,param_3,"abstract",0);
        if (iVar1 != 0) {
          local_80[0x16] = local_80[0x16] | 0x10;
        }
        local_60 = FUN_100920729(param_3,"final");
        if (local_60 == 0) {
          if ((*(uint *)(param_2 + 0x30) >> 2 & 1) != 0) {
            local_80[0x16] = local_80[0x16] | 0x8000;
          }
          if ((*(uint *)(param_2 + 0x30) >> 3 & 1) != 0) {
            local_80[0x16] = local_80[0x16] | 0x10000;
          }
        }
        else {
          local_20 = (xmlChar *)FUN_10092084c(param_1,local_60);
          uVar7 = CONCAT44(uVar8,0xffffffff);
          uVar2 = CONCAT44(uVar5,0xffffffff);
          iVar1 = FUN_1009264b3(local_20,local_80 + 0x16,0xffffffff,0x8000,0x10000,0xffffffff,uVar2,
                                uVar7);
          uVar5 = (undefined4)((ulong)uVar2 >> 0x20);
          uVar8 = (undefined4)((ulong)uVar7 >> 0x20);
          if (iVar1 != 0) {
            uVar8 = 0;
            pxVar4 = local_20;
            FUN_10091e207(param_1,0xbdd,local_80,local_60,0,
                          "(#all | List of (extension | restriction))",local_20,0,0,0);
            uVar5 = (undefined4)((ulong)pxVar4 >> 0x20);
          }
        }
      }
      local_60 = FUN_100920729(param_3,"block");
      if (local_60 == 0) {
        if ((*(uint *)(param_2 + 0x30) >> 7 & 1) != 0) {
          local_80[0x16] = local_80[0x16] | 0x1000;
        }
        if ((*(uint *)(param_2 + 0x30) >> 6 & 1) != 0) {
          local_80[0x16] = local_80[0x16] | 0x800;
        }
        if ((*(uint *)(param_2 + 0x30) >> 8 & 1) != 0) {
          local_80[0x16] = local_80[0x16] | 0x2000;
        }
      }
      else {
        local_20 = (xmlChar *)FUN_10092084c(param_1,local_60);
        iVar1 = FUN_1009264b3(local_20,local_80 + 0x16,0xffffffff,0x800,0x1000,0x2000,
                              CONCAT44(uVar5,0xffffffff),CONCAT44(uVar8,0xffffffff));
        if (iVar1 != 0) {
          FUN_10091e207(param_1,0xbdd,local_80,local_60,0,
                        "(#all | List of (extension | restriction | substitution))",local_20,0,0,0);
        }
      }
      iVar1 = FUN_1009233c7(param_1,0,local_80,param_3,"nillable",0);
      if (iVar1 != 0) {
        local_80[0x16] = local_80[0x16] | 1;
      }
      local_60 = FUN_100920729(param_3,"type");
      if (local_60 != 0) {
        FUN_100922b92(param_1,param_2,0,local_80,local_60,local_80 + 0x1c,local_80 + 0x1a);
        FUN_100923805(param_1,param_2,param_3,local_80,*(undefined8 *)(local_80 + 0x1c));
      }
      uVar2 = FUN_1009208b3(param_1,param_3,"default");
      *(undefined8 *)(local_80 + 0x24) = uVar2;
      local_60 = FUN_100920729(param_3,"fixed");
      if (local_60 != 0) {
        local_28 = FUN_10092084c(param_1,local_60);
        if (*(long *)(local_80 + 0x24) == 0) {
          local_80[0x16] = local_80[0x16] | 8;
          *(undefined8 *)(local_80 + 0x24) = local_28;
        }
        else {
          FUN_10091e0f4(param_1,0xbde,0,local_80,local_60,"default","fixed");
        }
      }
      if (((local_68 == 0) || (*(long *)(local_68 + 0x48) == 0)) ||
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"complexType"), iVar1 == 0
          || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0))))
      {
        if (((local_68 != 0) && (*(long *)(local_68 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"simpleType"),
            iVar1 != 0 &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))
        {
          if (*(long *)(local_80 + 0x1a) == 0) {
            uVar2 = FUN_100929693(param_1,param_2,local_68,0);
            *(undefined8 *)(local_80 + 0xe) = uVar2;
          }
          else {
            FUN_10091e58d(param_1,0xbe1,0,local_80,param_3,local_68,
                          "The attribute \'type\' and the <simpleType> child are mutually exclusive"
                          ,0);
          }
          local_68 = *(long *)(local_68 + 0x30);
        }
      }
      else {
        if (*(long *)(local_80 + 0x1a) == 0) {
          uVar2 = FUN_10092fc0d(param_1,param_2,local_68,0);
          *(undefined8 *)(local_80 + 0xe) = uVar2;
        }
        else {
          FUN_10091e58d(param_1,0xbe1,0,local_80,param_3,local_68,
                        "The attribute \'type\' and the <complexType> child are mutually exclusive",
                        0);
        }
        local_68 = *(long *)(local_68 + 0x30);
      }
      while ((((((local_68 != 0 && (*(long *)(local_68 + 0x48) != 0)) &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"unique"),
                iVar1 != 0)) &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))
              || (((local_68 != 0 && (*(long *)(local_68 + 0x48) != 0)) &&
                  ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"key"),
                   iVar1 != 0 &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                   iVar1 != 0)))))) ||
             (((local_68 != 0 && (*(long *)(local_68 + 0x48) != 0)) &&
              ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"keyref"), iVar1 != 0
               && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                  iVar1 != 0))))))) {
        if ((((local_68 == 0) || (*(long *)(local_68 + 0x48) == 0)) ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"unique"), iVar1 == 0))
           || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0))
        {
          if (((local_68 == 0) || (*(long *)(local_68 + 0x48) == 0)) ||
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"key"), iVar1 == 0 ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0)))
             ) {
            if (((local_68 != 0) && (*(long *)(local_68 + 0x48) != 0)) &&
               ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x10),(xmlChar *)"keyref"),
                iVar1 != 0 &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_68 + 0x48) + 0x10),
                                      PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)
                ))) {
              local_18 = FUN_10092742e(param_1,param_2,local_68,0x18,
                                       *(undefined8 *)(local_80 + 0x18));
            }
          }
          else {
            local_18 = FUN_10092742e(param_1,param_2,local_68,0x17,*(undefined8 *)(local_80 + 0x18))
            ;
          }
        }
        else {
          local_18 = FUN_10092742e(param_1,param_2,local_68,0x16,*(undefined8 *)(local_80 + 0x18));
        }
        if (local_10 == 0) {
          *(long *)(local_80 + 0x30) = local_18;
        }
        else {
          *(long *)(local_10 + 0x10) = local_18;
        }
        local_10 = local_18;
        local_68 = *(long *)(local_68 + 0x30);
      }
      if (local_68 != 0) {
        FUN_10091e58d(param_1,0xbd9,0,local_80,param_3,local_68,0,
                      "(annotation?, ((simpleType | complexType)?, (unique | key | keyref)*))");
      }
      *(long *)(local_80 + 0xc) = local_70;
      if (local_40 != 0) {
        (*(code *)_xmlFree)(local_40);
      }
      if (param_4 != 0) {
        return local_80;
      }
      *(undefined4 **)(local_78 + 6) = local_80;
      return local_78;
    }
  }
LAB_100928c90:
  if (local_40 != 0) {
    (*(code *)_xmlFree)(local_40);
    local_40 = 0;
  }
  if (local_70 != 0) {
    if (local_78 != (undefined4 *)0x0) {
      *(undefined8 *)(local_78 + 2) = 0;
    }
    if (local_80 != (undefined4 *)0x0) {
      *(undefined8 *)(local_80 + 0xc) = 0;
    }
    FUN_10091ef26(local_70);
  }
  return (undefined4 *)0x0;
}

