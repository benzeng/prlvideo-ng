
int FUN_1001f9655(long param_1,long param_2,long param_3,int param_4)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  long local_40;
  undefined8 local_38;
  long local_30;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_40 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return -1;
  }
  local_28 = FUN_1001f9339(param_1,param_2,param_3,&local_38,param_4);
  if (local_28 != 0) {
    return local_28;
  }
  local_28 = FUN_1001f8651(param_1,param_4,local_38,0,0,0,param_3,*(undefined8 *)(param_1 + 0xd0),0,
                           &local_40);
  if (local_28 != 0) {
    return local_28;
  }
  if ((local_40 == 0) || (*(long *)(local_40 + 0x20) == 0)) {
    if (param_4 == 2) {
      local_28 = 0xbea;
      FUN_1001e8d5c(param_1,0xbea,param_3,0,"Failed to load the document \'%s\' for inclusion",
                    local_38,0);
    }
    else {
      local_28 = 0xc09;
      FUN_1001e8d5c(param_1,0xc09,param_3,0,"Failed to load the document \'%s\' for redefinition",
                    local_38,0);
    }
  }
  else {
    if (*(long *)(local_40 + 0x10) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        FUN_1001e8d5c(param_1,0xbea,param_3,0,
                      "The target namespace of the included/redefined schema \'%s\' has to be absent, since the including/redefining schema has no target namespace"
                      ,local_38,0);
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_40 + 0x10),*(xmlChar **)(param_1 + 0xd0));
        if (iVar2 != 0) goto LAB_1001f991c;
        FUN_1001ea330(param_1,0xbea,0,0,param_3,
                      "The target namespace \'%s\' of the included/redefined schema \'%s\' differs from \'%s\' of the including/redefining schema"
                      ,*(undefined8 *)(local_40 + 0x10),local_38,*(undefined8 *)(param_1 + 0xd0));
      }
      return *(int *)(param_1 + 0x20);
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      local_20 = 1;
      if ((*(int *)(local_40 + 0x34) != 0) &&
         (*(long *)(local_40 + 0x18) != *(long *)(param_1 + 0xd0))) {
        FUN_1001e8d2a(param_1,"xmlSchemaParseIncludeOrRedefine",
                      "trying to use an already parsed schema for a different targetNamespace");
        return -1;
      }
      *(undefined8 *)(local_40 + 0x18) = *(undefined8 *)(param_1 + 0xd0);
    }
  }
LAB_1001f991c:
  if (((local_40 != 0) && (*(int *)(local_40 + 0x34) == 0)) && (*(long *)(local_40 + 0x20) != 0)) {
    if (local_20 != 0) {
      if (((*(uint *)(param_2 + 0x30) >> 9 ^ 1) & 1) == 0) {
        local_1c = 1;
      }
      else {
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x200;
      }
    }
    FUN_1001f8383(param_1,param_2,local_40);
    if ((local_20 != 0) && (local_1c == 0)) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) ^ 0x200;
    }
  }
  local_30 = *(long *)(param_3 + 0x18);
  if (param_4 == 3) {
    *(undefined4 *)(param_1 + 0xc4) = 1;
    while ((((((local_30 != 0 && (*(long *)(local_30 + 0x48) != 0)) &&
              ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation"),
               iVar2 != 0 &&
               (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0))
              )) || ((((local_30 != 0 && (*(long *)(local_30 + 0x48) != 0)) &&
                      (iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"simpleType"),
                      iVar2 != 0)) &&
                     (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                     iVar2 != 0)))) ||
            (((local_30 != 0 && (*(long *)(local_30 + 0x48) != 0)) &&
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"complexType"),
              iVar2 != 0 &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))
             ))) || ((((local_30 != 0 && (*(long *)(local_30 + 0x48) != 0)) &&
                      ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"group"),
                       iVar2 != 0 &&
                       (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                             PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                       iVar2 != 0)))) ||
                     ((((local_30 != 0 && (*(long *)(local_30 + 0x48) != 0)) &&
                       (iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),
                                             (xmlChar *)"attributeGroup"), iVar2 != 0)) &&
                      (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                            PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                      iVar2 != 0))))))) {
      if ((((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
          ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation"), iVar2 == 0
           || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))
          ) && ((local_40 != 0 && (*(int *)(local_40 + 0x34) != 0)))) {
        if ((local_30 == 0) ||
           (((*(long *)(local_30 + 0x48) == 0 ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"simpleType"),
             iVar2 == 0)) ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))))
        {
          if (((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
             ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"complexType"),
              iVar2 == 0 ||
              (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))
             ) {
            if (((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
               ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"group"), iVar2 == 0
                || (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                   iVar2 == 0)))) {
              if ((((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
                  (iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"attributeGroup"),
                  iVar2 != 0)) &&
                 (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                       PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0
                 )) {
                ppxVar3 = ___xmlGenericError();
                pxVar1 = *ppxVar3;
                ppvVar4 = ___xmlGenericErrorContext();
                (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemas.c",0x27ef);
                local_24 = 1;
              }
            }
            else {
              ppxVar3 = ___xmlGenericError();
              pxVar1 = *ppxVar3;
              ppvVar4 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemas.c",0x27ea);
              local_24 = 1;
            }
          }
          else {
            FUN_1001fc2e5(param_1,param_2,local_30,1);
            local_24 = 1;
          }
        }
        else {
          FUN_1001f5d6b(param_1,param_2,local_30,1);
        }
      }
      local_30 = *(long *)(local_30 + 0x30);
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else if (((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
          ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation"), iVar2 != 0
           && (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))
          ) {
    local_30 = *(long *)(local_30 + 0x30);
  }
  if (local_30 != 0) {
    local_28 = 0xbd9;
    if (param_4 == 3) {
      FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_30,0,
                    "(annotation | (simpleType | complexType | group | attributeGroup))*");
    }
    else {
      FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_30,0,"(annotation?)");
    }
  }
  return local_28;
}

