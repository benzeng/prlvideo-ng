
undefined4
FUN_10020c548(undefined8 param_1,undefined8 param_2,undefined4 param_3,xmlChar *param_4,long param_5
             ,int param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  long lVar2;
  undefined4 local_48;
  
  lVar2 = FUN_10020c310(param_1);
  if (lVar2 == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaPushAttribute","calling xmlSchemaGetFreshAttrInfo()");
    local_48 = 0xffffffff;
  }
  else {
    *(undefined8 *)(lVar2 + 8) = param_2;
    *(undefined4 *)(lVar2 + 0x10) = param_3;
    *(undefined4 *)(lVar2 + 0x58) = 1;
    *(xmlChar **)(lVar2 + 0x18) = param_4;
    *(long *)(lVar2 + 0x20) = param_5;
    if (param_6 != 0) {
      *(uint *)(lVar2 + 0x40) = *(uint *)(lVar2 + 0x40) | 1;
    }
    if (param_5 != 0) {
      iVar1 = _xmlStrEqual(param_4,(xmlChar *)"nil");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(param_4,(xmlChar *)"type");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_4,(xmlChar *)"schemaLocation");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(param_4,(xmlChar *)"noNamespaceSchemaLocation");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(lVar2 + 0x20),
                                   PTR_s_http___www_w3_org_2000_xmlns__101111760);
              if (iVar1 != 0) {
                *(undefined4 *)(lVar2 + 0x5c) = 5;
              }
            }
            else {
              iVar1 = _xmlStrEqual(*(xmlChar **)(lVar2 + 0x20),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111758);
              if (iVar1 != 0) {
                *(undefined4 *)(lVar2 + 0x5c) = 4;
              }
            }
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(lVar2 + 0x20),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111758);
            if (iVar1 != 0) {
              *(undefined4 *)(lVar2 + 0x5c) = 3;
            }
          }
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(lVar2 + 0x20),
                               PTR_s_http___www_w3_org_2001_XMLSchema_101111758);
          if (iVar1 != 0) {
            *(undefined4 *)(lVar2 + 0x5c) = 1;
          }
        }
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(lVar2 + 0x20),
                             PTR_s_http___www_w3_org_2001_XMLSchema_101111758);
        if (iVar1 != 0) {
          *(undefined4 *)(lVar2 + 0x5c) = 2;
        }
      }
    }
    *(undefined8 *)(lVar2 + 0x28) = param_7;
    if (param_8 != 0) {
      *(uint *)(lVar2 + 0x40) = *(uint *)(lVar2 + 0x40) | 2;
    }
    if (*(int *)(lVar2 + 0x5c) != 0) {
      *(undefined4 *)(lVar2 + 0x58) = 0x11;
    }
    local_48 = 0;
  }
  return local_48;
}

