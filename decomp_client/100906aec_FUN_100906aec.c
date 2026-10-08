
undefined4 FUN_100906aec(xmlChar *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = _xmlStrEqual(param_1,(xmlChar *)"SYSTEM");
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"PUBLIC");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_1,(xmlChar *)"DELEGATE");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(param_1,(xmlChar *)"ENTITY");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_1,(xmlChar *)"DOCTYPE");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(param_1,(xmlChar *)"LINKTYPE");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(param_1,(xmlChar *)"NOTATION");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(param_1,(xmlChar *)"SGMLDECL");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(param_1,(xmlChar *)"DOCUMENT");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"CATALOG");
                    if (iVar1 == 0) {
                      iVar1 = _xmlStrEqual(param_1,(xmlChar *)"BASE");
                      if (iVar1 != 0) {
                        local_c = 0x15;
                      }
                    }
                    else {
                      local_c = 0x16;
                    }
                  }
                  else {
                    local_c = 0x17;
                  }
                }
                else {
                  local_c = 0x18;
                }
              }
              else {
                local_c = 0x13;
              }
            }
            else {
              local_c = 0x12;
            }
          }
          else {
            local_c = 0x11;
          }
        }
        else {
          local_c = 0xf;
        }
      }
      else {
        local_c = 0x14;
      }
    }
    else {
      local_c = 0xe;
    }
  }
  else {
    local_c = 0xd;
  }
  return local_c;
}

