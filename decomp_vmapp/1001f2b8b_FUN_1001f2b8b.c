
int FUN_1001f2b8b(byte *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int iVar1;
  xmlChar *str1;
  int local_4c;
  int local_24;
  byte *local_20;
  byte *local_18;
  
  local_24 = 0;
  if ((param_2 == (uint *)0x0) || (param_1 == (byte *)0x0)) {
    local_4c = -1;
  }
  else if (*param_1 == 0) {
    local_4c = 0;
  }
  else {
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"#all");
    local_18 = param_1;
    if (iVar1 == 0) {
      while( true ) {
        for (; (*local_18 == 0x20 || (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))))
            ; local_18 = local_18 + 1) {
        }
        for (local_20 = local_18;
            (((*local_20 != 0 && (*local_20 != 0x20)) && ((*local_20 < 9 || (10 < *local_20)))) &&
            (*local_20 != 0xd)); local_20 = local_20 + 1) {
        }
        if (local_20 == local_18) break;
        str1 = _xmlStrndup(local_18,(int)local_20 - (int)local_18);
        iVar1 = _xmlStrEqual(str1,(xmlChar *)"extension");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(str1,(xmlChar *)"restriction");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(str1,(xmlChar *)"substitution");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(str1,(xmlChar *)"list");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(str1,(xmlChar *)"union");
                if (iVar1 == 0) {
                  local_24 = 1;
                }
                else if (param_8 == 0xffffffff) {
                  local_24 = 1;
                }
                else if ((*param_2 & param_8) == 0) {
                  *param_2 = *param_2 | param_8;
                }
              }
              else if (param_7 == 0xffffffff) {
                local_24 = 1;
              }
              else if ((*param_2 & param_7) == 0) {
                *param_2 = *param_2 | param_7;
              }
            }
            else if (param_6 == 0xffffffff) {
              local_24 = 1;
            }
            else if ((*param_2 & param_6) == 0) {
              *param_2 = *param_2 | param_6;
            }
          }
          else if (param_5 == 0xffffffff) {
            local_24 = 1;
          }
          else if ((*param_2 & param_5) == 0) {
            *param_2 = *param_2 | param_5;
          }
        }
        else if (param_4 == 0xffffffff) {
          local_24 = 1;
        }
        else if ((*param_2 & param_4) == 0) {
          *param_2 = *param_2 | param_4;
        }
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        local_18 = local_20;
        if ((local_24 != 0) || (*local_20 == 0)) break;
      }
    }
    else if (param_3 == 0xffffffff) {
      if (param_4 != 0xffffffff) {
        *param_2 = *param_2 | param_4;
      }
      if (param_5 != 0xffffffff) {
        *param_2 = *param_2 | param_5;
      }
      if (param_6 != 0xffffffff) {
        *param_2 = *param_2 | param_6;
      }
      if (param_7 != 0xffffffff) {
        *param_2 = *param_2 | param_7;
      }
      if (param_8 != 0xffffffff) {
        *param_2 = *param_2 | param_8;
      }
    }
    else {
      *param_2 = *param_2 | param_3;
    }
    local_4c = local_24;
  }
  return local_4c;
}

