
int FUN_10092ad1d(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  int local_14;
  
  local_14 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return -1;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  local_28 = param_3;
  do {
    if (((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"include"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0)))) &&
        (((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"import"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))))))
       && (((((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"redefine"), iVar2 == 0
             )) || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                   iVar2 == 0)) &&
           (((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
            ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"),
             iVar2 == 0 ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))))
           )))) break;
    if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
       ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"), iVar2 == 0 ||
        (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0)))) {
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"import"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0)))) {
        if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"include"), iVar2 == 0))
           || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))
        {
          if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"redefine"),
              iVar2 != 0 &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 != 0)))
             ) {
            iVar2 = *(int *)(param_1 + 0x24);
            local_14 = FUN_10092d7a1(param_1,param_2,local_28);
            if (local_14 == -1) {
              return -1;
            }
            if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
            goto LAB_10092b509;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x24);
          local_14 = FUN_10092d7ec(param_1,param_2,local_28);
          if (local_14 == -1) {
            return -1;
          }
          if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
          goto LAB_10092b509;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x24);
        local_14 = FUN_10092c796(param_1,param_2,local_28);
        if (local_14 == -1) {
          return -1;
        }
        if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
        goto LAB_10092b509;
      }
    }
    else {
      uVar3 = FUN_100923b32(param_1,param_2,local_28);
      if (*(long *)(param_2 + 0x28) == 0) {
        *(undefined8 *)(param_2 + 0x28) = uVar3;
      }
      else {
        FUN_10091ef26(uVar3);
      }
    }
    local_28 = *(long *)(local_28 + 0x30);
  } while( true );
  while (local_28 != 0) {
    if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
       ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"complexType"), iVar2 == 0
        || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0)))) {
      if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"simpleType"), iVar2 == 0)
          ) || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))
      {
        if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
           ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"element"), iVar2 == 0
            || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))
           )) {
          if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"attribute"),
              iVar2 == 0 ||
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0)))
             ) {
            if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"attributeGroup"),
                iVar2 == 0)) ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 == 0))
            {
              if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                 ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"group"),
                  iVar2 == 0 ||
                  (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                  iVar2 == 0)))) {
                if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                   ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"notation"),
                    iVar2 == 0 ||
                    (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                    iVar2 == 0)))) {
                  FUN_10091e58d(param_1,0xbd9,0,0,*(undefined8 *)(local_28 + 0x28),local_28,0,
                                "((include | import | redefine | annotation)*, (((simpleType | complexType | group | attributeGroup) | element | attribute | notation), annotation*)*)"
                               );
                  local_28 = *(long *)(local_28 + 0x30);
                }
                else {
                  FUN_100924e6f(param_1,param_2,local_28);
                  local_28 = *(long *)(local_28 + 0x30);
                }
              }
              else {
                FUN_10092a265(param_1,param_2,local_28);
                local_28 = *(long *)(local_28 + 0x30);
              }
            }
            else {
              FUN_100925fe4(param_1,param_2,local_28,1);
              local_28 = *(long *)(local_28 + 0x30);
            }
          }
          else {
            FUN_1009252f5(param_1,param_2,local_28,1);
            local_28 = *(long *)(local_28 + 0x30);
          }
        }
        else {
          FUN_100927a24(param_1,param_2,local_28,1);
          local_28 = *(long *)(local_28 + 0x30);
        }
      }
      else {
        FUN_100929693(param_1,param_2,local_28,1);
        local_28 = *(long *)(local_28 + 0x30);
      }
    }
    else {
      FUN_10092fc0d(param_1,param_2,local_28,1);
      local_28 = *(long *)(local_28 + 0x30);
    }
    while ((((local_28 != 0 && (*(long *)(local_28 + 0x48) != 0)) &&
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"),
            iVar2 != 0)) &&
           (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 != 0))) {
      uVar3 = FUN_100923b32(param_1,param_2,local_28);
      if (*(long *)(param_2 + 0x28) == 0) {
        *(undefined8 *)(param_2 + 0x28) = uVar3;
      }
      else {
        FUN_10091ef26(uVar3);
      }
      local_28 = *(long *)(local_28 + 0x30);
    }
  }
LAB_10092b509:
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x24) != iVar1) {
    local_14 = *(int *)(param_1 + 0x20);
  }
  return local_14;
}

