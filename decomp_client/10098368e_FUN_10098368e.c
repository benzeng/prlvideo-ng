
undefined4 FUN_10098368e(long param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x48) + 0x10),
                             (xmlChar *)"http://www.w3.org/1999/xhtml"), iVar1 != 0)) {
      if (*(long *)(param_1 + 0x18) == 0) {
        switch(**(undefined1 **)(param_1 + 0x10)) {
        case 0x61:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"area");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x62:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"br");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"base");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"basefont");
              if (iVar1 == 0) {
                local_14 = 0;
              }
              else {
                local_14 = 1;
              }
            }
            else {
              local_14 = 1;
            }
          }
          else {
            local_14 = 1;
          }
          break;
        case 99:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"col");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        default:
          local_14 = 0;
          break;
        case 0x66:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"frame");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x68:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"hr");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x69:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"img");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"input");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"isindex");
              if (iVar1 == 0) {
                local_14 = 0;
              }
              else {
                local_14 = 1;
              }
            }
            else {
              local_14 = 1;
            }
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x6c:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"link");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x6d:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"meta");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
          break;
        case 0x70:
          iVar1 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x10),(xmlChar *)"param");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
        }
      }
      else {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

