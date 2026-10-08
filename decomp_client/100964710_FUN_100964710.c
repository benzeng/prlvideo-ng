
undefined4
FUN_100964710(undefined8 param_1,long param_2,xmlChar *param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_5c;
  
  if ((param_2 == 0) || (param_5 == 0)) {
    local_5c = 0xffffffff;
  }
  else {
    lVar2 = _xmlSchemaGetPredefinedType(param_2,"http://www.w3.org/2001/XMLSchema");
    if (lVar2 == 0) {
      local_5c = 0xffffffff;
    }
    else {
      puVar3 = (undefined4 *)_xmlSchemaNewFacet();
      if (puVar3 == (undefined4 *)0x0) {
        local_5c = 0xffffffff;
      }
      else {
        iVar1 = _xmlStrEqual(param_3,(xmlChar *)"minInclusive");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_3,(xmlChar *)"minExclusive");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(param_3,(xmlChar *)"maxInclusive");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(param_3,(xmlChar *)"maxExclusive");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(param_3,(xmlChar *)"totalDigits");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(param_3,(xmlChar *)"fractionDigits");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(param_3,(xmlChar *)"pattern");
                    if (iVar1 == 0) {
                      iVar1 = _xmlStrEqual(param_3,(xmlChar *)"enumeration");
                      if (iVar1 == 0) {
                        iVar1 = _xmlStrEqual(param_3,(xmlChar *)"whiteSpace");
                        if (iVar1 == 0) {
                          iVar1 = _xmlStrEqual(param_3,(xmlChar *)"length");
                          if (iVar1 == 0) {
                            iVar1 = _xmlStrEqual(param_3,(xmlChar *)"maxLength");
                            if (iVar1 == 0) {
                              iVar1 = _xmlStrEqual(param_3,(xmlChar *)"minLength");
                              if (iVar1 == 0) {
                                _xmlSchemaFreeFacet(puVar3);
                                return 0xffffffff;
                              }
                              *puVar3 = 0x3f3;
                            }
                            else {
                              *puVar3 = 0x3f2;
                            }
                          }
                          else {
                            *puVar3 = 0x3f1;
                          }
                        }
                        else {
                          *puVar3 = 0x3f0;
                        }
                      }
                      else {
                        *puVar3 = 0x3ef;
                      }
                    }
                    else {
                      *puVar3 = 0x3ee;
                    }
                  }
                  else {
                    *puVar3 = 0x3ed;
                  }
                }
                else {
                  *puVar3 = 0x3ec;
                }
              }
              else {
                *puVar3 = 0x3eb;
              }
            }
            else {
              *puVar3 = 0x3ea;
            }
          }
          else {
            *puVar3 = 0x3e9;
          }
        }
        else {
          *puVar3 = 1000;
        }
        *(undefined8 *)(puVar3 + 4) = param_4;
        iVar1 = _xmlSchemaCheckFacet(puVar3,lVar2,0,param_2);
        if (iVar1 == 0) {
          iVar1 = _xmlSchemaValidateFacet(lVar2,puVar3,param_5,param_6);
          _xmlSchemaFreeFacet(puVar3);
          if (iVar1 == 0) {
            local_5c = 0;
          }
          else {
            local_5c = 0xffffffff;
          }
        }
        else {
          _xmlSchemaFreeFacet(puVar3);
          local_5c = 0xffffffff;
        }
      }
    }
  }
  return local_5c;
}

