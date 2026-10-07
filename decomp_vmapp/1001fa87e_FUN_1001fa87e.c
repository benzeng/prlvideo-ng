
undefined8 FUN_1001fa87e(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_60;
  int *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_50 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_58 = *(int **)(param_1 + 0xa0);
    local_58[0x16] = local_58[0x16] | 4;
    for (local_48 = *(long *)(param_3 + 0x58); local_48 != 0; local_48 = *(long *)(local_48 + 0x30))
    {
      if (*(long *)(local_48 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"id");
        if ((iVar1 == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_48 + 0x10),(xmlChar *)"base"), iVar1 == 0)) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_48);
        }
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
        if (iVar1 != 0) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_48);
        }
      }
    }
    FUN_1001ef36d(param_1,0,0,param_3,"id");
    iVar1 = FUN_1001ef2dd(param_1,param_2,0,0,param_3,"base",local_58 + 0x1a,local_58 + 0x18);
    if (iVar1 == 0) {
      if ((*(long *)(local_58 + 0x18) == 0) && (*local_58 == 5)) {
        FUN_1001e9eb4(param_1,0xbdc,local_58,param_3,"base",0);
      }
      else if ((*(int *)(param_1 + 0xc4) != 0) && (((uint)local_58[0x16] >> 3 & 1) != 0)) {
        if (*(long *)(local_58 + 0x18) == 0) {
          FUN_1001e9eb4(param_1,0xbdc,local_58,param_3,"base",0);
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_58 + 0x18),*(xmlChar **)(local_58 + 4));
          if ((iVar1 == 0) ||
             (iVar1 = _xmlStrEqual(*(xmlChar **)(local_58 + 0x1a),*(xmlChar **)(local_58 + 0x34)),
             iVar1 == 0)) {
            local_60 = 0;
            local_40 = 0;
            uVar3 = FUN_1001e6d76(&local_60,*(undefined8 *)(local_58 + 0x34),
                                  *(undefined8 *)(local_58 + 4));
            uVar2 = FUN_1001e6d76(&local_60,*(undefined8 *)(local_58 + 0x1a),
                                  *(undefined8 *)(local_58 + 0x18));
            FUN_1001ea330(param_1,0xc09,0,0,param_3,
                          "This is a redefinition, but the QName value \'%s\' of the \'base\' attribute does not match the type\'s designation \'%s\'"
                          ,uVar2,uVar3,0);
            if (local_60 != 0) {
              (*(code *)_xmlFree)(local_60);
              local_60 = 0;
            }
            if (local_40 != 0) {
              (*(code *)_xmlFree)(local_40);
              local_40 = 0;
            }
          }
        }
      }
    }
    local_50 = *(long *)(param_3 + 0x18);
    if ((((local_50 != 0) && (*(long *)(local_50 + 0x48) != 0)) &&
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"annotation"), iVar1 != 0))
       && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)) {
      uVar3 = FUN_1001f020a(param_1,param_2,local_50);
      FUN_1001f31b2(local_58,uVar3);
      local_50 = *(long *)(local_50 + 0x30);
    }
    if (param_4 == 4) {
      if (((local_50 == 0) || (*(long *)(local_50 + 0x48) == 0)) ||
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"simpleType"), iVar1 == 0
          || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0))))
      {
        if (*(long *)(local_58 + 0x18) == 0) {
          FUN_1001eac65(param_1,0xbbd,0,0,param_3,local_50,
                        "Either the attribute \'base\' or a <simpleType> child must be present",0);
        }
      }
      else {
        if (*(long *)(local_58 + 0x18) == 0) {
          uVar3 = FUN_1001f5d6b(param_1,param_2,local_50,0);
          *(undefined8 *)(local_58 + 0x1c) = uVar3;
        }
        else {
          FUN_1001eac65(param_1,0xbbd,0,0,param_3,local_50,
                        "The attribute \'base\' and the <simpleType> child are mutually exclusive",0
                       );
        }
        local_50 = *(long *)(local_50 + 0x30);
      }
    }
    else if (param_4 == 10) {
      if ((((local_50 == 0) || (*(long *)(local_50 + 0x48) == 0)) ||
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"all"), iVar1 == 0)) ||
         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
        if (((local_50 == 0) || (*(long *)(local_50 + 0x48) == 0)) ||
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"choice"), iVar1 == 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0))))
        {
          if ((((local_50 == 0) || (*(long *)(local_50 + 0x48) == 0)) ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"sequence"),
              iVar1 == 0)) ||
             (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
            if ((((local_50 != 0) && (*(long *)(local_50 + 0x48) != 0)) &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"group"), iVar1 != 0
                )) && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                            PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                      iVar1 != 0)) {
              uVar3 = FUN_1001f657a(param_1,param_2,local_50);
              *(undefined8 *)(local_58 + 0xe) = uVar3;
              local_50 = *(long *)(local_50 + 0x30);
            }
          }
          else {
            uVar3 = FUN_1001f9f0b(param_1,param_2,local_50,6,1);
            *(undefined8 *)(local_58 + 0xe) = uVar3;
            local_50 = *(long *)(local_50 + 0x30);
          }
        }
        else {
          uVar3 = FUN_1001f9f0b(param_1,param_2,local_50,7,1);
          *(undefined8 *)(local_58 + 0xe) = uVar3;
          local_50 = *(long *)(local_50 + 0x30);
        }
      }
      else {
        uVar3 = FUN_1001f9f0b(param_1,param_2,local_50,8,1);
        *(undefined8 *)(local_58 + 0xe) = uVar3;
        local_50 = *(long *)(local_50 + 0x30);
      }
    }
    else if (((param_4 == 9) && (local_50 != 0)) &&
            ((*(long *)(local_50 + 0x48) != 0 &&
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"simpleType"),
              iVar1 != 0 &&
              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))
             ))) {
      uVar3 = FUN_1001f5d6b(param_1,param_2,local_50,0);
      *(undefined8 *)(local_58 + 0x30) = uVar3;
      if (*(long *)(local_58 + 0x30) == 0) {
        return 0;
      }
      local_50 = *(long *)(local_50 + 0x30);
    }
    if ((param_4 == 4) || (param_4 == 9)) {
      local_30 = 0;
      while (((((((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"minInclusive"),
                   iVar1 != 0)) &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                  iVar1 != 0)) ||
                 (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                  ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"minExclusive"),
                   iVar1 != 0 &&
                   (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                   iVar1 != 0)))))) ||
                (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                 ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"maxInclusive"),
                  iVar1 != 0 &&
                  (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                  iVar1 != 0)))))) ||
               ((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                 (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"maxExclusive"),
                 iVar1 != 0)) &&
                (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                      PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)
                ))) || (((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                          ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                 (xmlChar *)"totalDigits"), iVar1 != 0 &&
                           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                           iVar1 != 0)))) ||
                         (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                          ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                 (xmlChar *)"fractionDigits"), iVar1 != 0 &&
                           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                           iVar1 != 0)))))) ||
                        ((((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                            (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                  (xmlChar *)"pattern"), iVar1 != 0)) &&
                           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                           iVar1 != 0)) ||
                          (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                  (xmlChar *)"enumeration"), iVar1 != 0 &&
                            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                            iVar1 != 0)))))) ||
                         (((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                            (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                  (xmlChar *)"whiteSpace"), iVar1 != 0)) &&
                           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                           iVar1 != 0)) ||
                          (((((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                             (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                   (xmlChar *)"length"), iVar1 != 0)) &&
                            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                            iVar1 != 0)) ||
                           (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
                            ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),
                                                   (xmlChar *)"maxLength"), iVar1 != 0 &&
                             (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750)
                             , iVar1 != 0)))))))))))))) ||
             (((local_50 != 0 && (*(long *)(local_50 + 0x48) != 0)) &&
              ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"minLength"),
               iVar1 != 0 &&
               (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0))
              ))))) {
        local_38 = FUN_1001f0649(param_1,param_2,local_50);
        if (local_38 != 0) {
          if (local_30 == 0) {
            *(long *)(local_58 + 0x1e) = local_38;
          }
          else {
            *(long *)(local_30 + 8) = local_38;
          }
          *(undefined8 *)(local_38 + 8) = 0;
          local_30 = local_38;
        }
        local_50 = *(long *)(local_50 + 0x30);
      }
      if (*(long *)(local_58 + 0x1e) != 0) {
        local_20 = (undefined8 *)0x0;
        local_38 = *(long *)(local_58 + 0x1e);
        do {
          local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
          if (local_28 == (undefined8 *)0x0) {
            FUN_1001e8056(param_1,"allocating a facet link",0);
            (*(code *)_xmlFree)(local_28);
            return 0;
          }
          local_28[1] = local_38;
          *local_28 = 0;
          if (local_20 == (undefined8 *)0x0) {
            *(undefined8 **)(local_58 + 0x2c) = local_28;
          }
          else {
            *local_20 = local_28;
          }
          local_38 = *(long *)(local_38 + 8);
          local_20 = local_28;
        } while (local_38 != 0);
      }
    }
    if ((((*local_58 == 5) &&
         (local_50 = FUN_1001f001c(param_1,param_2,local_50,local_58), local_50 != 0)) &&
        (*(long *)(local_50 + 0x48) != 0)) &&
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"anyAttribute"), iVar1 != 0
        && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))) {
      uVar3 = FUN_1001f1773(param_1,param_2,local_50);
      *(undefined8 *)(local_58 + 0x26) = uVar3;
      local_50 = *(long *)(local_50 + 0x30);
    }
    if (local_50 != 0) {
      if (param_4 == 10) {
        FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_50,0,
                      "annotation?, (group | all | choice | sequence)?, ((attribute | attributeGroup)*, anyAttribute?))"
                     );
      }
      else if (param_4 == 9) {
        FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_50,0,
                      "(annotation?, (simpleType?, (minExclusive | minInclusive | maxExclusive | maxInclusive | totalDigits | fractionDigits | length | minLength | maxLength | enumeration | whiteSpace | pattern)*)?, ((attribute | attributeGroup)*, anyAttribute?))"
                     );
      }
      else {
        FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_50,0,
                      "(annotation?, (simpleType?, (minExclusive | minInclusive | maxExclusive | maxInclusive | totalDigits | fractionDigits | length | minLength | maxLength | enumeration | whiteSpace | pattern)*))"
                     );
      }
    }
  }
  return 0;
}

