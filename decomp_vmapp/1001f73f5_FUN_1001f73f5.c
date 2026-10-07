
int FUN_1001f73f5(long param_1,long param_2,long param_3)

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
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) &&
        (((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"import"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))))))
       && (((((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"redefine"), iVar2 == 0
             )) || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                   iVar2 == 0)) &&
           (((local_28 == 0 || (*(long *)(local_28 + 0x48) == 0)) ||
            ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"),
             iVar2 == 0 ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))))
           )))) break;
    if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
       ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"), iVar2 == 0 ||
        (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) {
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"import"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) {
        if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"include"), iVar2 == 0))
           || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))
        {
          if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"redefine"),
              iVar2 != 0 &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))
             ) {
            iVar2 = *(int *)(param_1 + 0x24);
            local_14 = FUN_1001f9e79(param_1,param_2,local_28);
            if (local_14 == -1) {
              return -1;
            }
            if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
            goto LAB_1001f7be1;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x24);
          local_14 = FUN_1001f9ec4(param_1,param_2,local_28);
          if (local_14 == -1) {
            return -1;
          }
          if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
          goto LAB_1001f7be1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x24);
        local_14 = FUN_1001f8e6e(param_1,param_2,local_28);
        if (local_14 == -1) {
          return -1;
        }
        if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(param_1 + 0x24) != iVar2))
        goto LAB_1001f7be1;
      }
    }
    else {
      uVar3 = FUN_1001f020a(param_1,param_2,local_28);
      if (*(long *)(param_2 + 0x28) == 0) {
        *(undefined8 *)(param_2 + 0x28) = uVar3;
      }
      else {
        FUN_1001eb5fe(uVar3);
      }
    }
    local_28 = *(long *)(local_28 + 0x30);
  } while( true );
  while (local_28 != 0) {
    if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
       ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"complexType"), iVar2 == 0
        || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) {
      if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"simpleType"), iVar2 == 0)
          ) || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))
      {
        if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
           ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"element"), iVar2 == 0
            || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))
           )) {
          if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"attribute"),
              iVar2 == 0 ||
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))
             ) {
            if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"attributeGroup"),
                iVar2 == 0)) ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))
            {
              if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                 ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"group"),
                  iVar2 == 0 ||
                  (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                        PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                  iVar2 == 0)))) {
                if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
                   ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"notation"),
                    iVar2 == 0 ||
                    (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                    iVar2 == 0)))) {
                  FUN_1001eac65(param_1,0xbd9,0,0,*(undefined8 *)(local_28 + 0x28),local_28,0,
                                "((include | import | redefine | annotation)*, (((simpleType | complexType | group | attributeGroup) | element | attribute | notation), annotation*)*)"
                               );
                  local_28 = *(long *)(local_28 + 0x30);
                }
                else {
                  FUN_1001f1547(param_1,param_2,local_28);
                  local_28 = *(long *)(local_28 + 0x30);
                }
              }
              else {
                FUN_1001f693d(param_1,param_2,local_28);
                local_28 = *(long *)(local_28 + 0x30);
              }
            }
            else {
              FUN_1001f26bc(param_1,param_2,local_28,1);
              local_28 = *(long *)(local_28 + 0x30);
            }
          }
          else {
            FUN_1001f19cd(param_1,param_2,local_28,1);
            local_28 = *(long *)(local_28 + 0x30);
          }
        }
        else {
          FUN_1001f40fc(param_1,param_2,local_28,1);
          local_28 = *(long *)(local_28 + 0x30);
        }
      }
      else {
        FUN_1001f5d6b(param_1,param_2,local_28,1);
        local_28 = *(long *)(local_28 + 0x30);
      }
    }
    else {
      FUN_1001fc2e5(param_1,param_2,local_28,1);
      local_28 = *(long *)(local_28 + 0x30);
    }
    while ((((local_28 != 0 && (*(long *)(local_28 + 0x48) != 0)) &&
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"),
            iVar2 != 0)) &&
           (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0))) {
      uVar3 = FUN_1001f020a(param_1,param_2,local_28);
      if (*(long *)(param_2 + 0x28) == 0) {
        *(undefined8 *)(param_2 + 0x28) = uVar3;
      }
      else {
        FUN_1001eb5fe(uVar3);
      }
      local_28 = *(long *)(local_28 + 0x30);
    }
  }
LAB_1001f7be1:
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x24) != iVar1) {
    local_14 = *(int *)(param_1 + 0x20);
  }
  return local_14;
}

