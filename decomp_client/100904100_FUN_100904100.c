
undefined4 FUN_100904100(xmlChar *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = _xmlStrEqual(param_1,(xmlChar *)"system");
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"public");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_1,(xmlChar *)"rewriteSystem");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(param_1,(xmlChar *)"delegatePublic");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_1,(xmlChar *)"delegateSystem");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(param_1,(xmlChar *)"uri");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(param_1,(xmlChar *)"rewriteURI");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(param_1,(xmlChar *)"delegateURI");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(param_1,(xmlChar *)"nextCatalog");
                  if (iVar1 == 0) {
                    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"catalog");
                    if (iVar1 != 0) {
                      local_c = 1;
                    }
                  }
                  else {
                    local_c = 3;
                  }
                }
                else {
                  local_c = 0xc;
                }
              }
              else {
                local_c = 0xb;
              }
            }
            else {
              local_c = 10;
            }
          }
          else {
            local_c = 9;
          }
        }
        else {
          local_c = 8;
        }
      }
      else {
        local_c = 7;
      }
    }
    else {
      local_c = 5;
    }
  }
  else {
    local_c = 6;
  }
  return local_c;
}

