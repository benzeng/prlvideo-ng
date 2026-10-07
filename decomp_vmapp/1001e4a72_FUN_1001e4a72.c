
xmlExpNodePtr FUN_1001e4a72(xmlExpCtxtPtr param_1,xmlExpNodePtr param_2,xmlExpNodePtr param_3)

{
  int iVar1;
  xmlExpNodePtr pxVar2;
  xmlExpNodePtr local_80;
  xmlExpNodePtr local_58;
  xmlExpNodePtr local_50;
  xmlExpNodePtr local_48;
  xmlExpNodePtr local_40;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  if ((param_2 == param_3) && (-1 < *(int *)(param_2 + 8))) {
    return (xmlExpNodePtr)_emptyExp;
  }
  if (*param_3 == (xmlExpNode)0x0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    return param_2;
  }
  if (*param_3 == (xmlExpNode)0x3) {
    local_58 = (xmlExpNodePtr)FUN_1001e4a72(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
    if (local_58 == (xmlExpNodePtr)0x0) {
      return (xmlExpNodePtr)0x0;
    }
    if (local_58 == (xmlExpNodePtr)_forbiddenExp) {
      return local_58;
    }
    local_50 = (xmlExpNodePtr)FUN_1001e4a72(param_1,local_58,*(undefined8 *)(param_3 + 0x20));
    _xmlExpFree(param_1,local_58);
    return local_50;
  }
  if (*param_3 == (xmlExpNode)0x4) {
    local_58 = (xmlExpNodePtr)FUN_1001e4a72(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
    if (local_58 == (xmlExpNodePtr)_forbiddenExp) {
      return local_58;
    }
    if (local_58 == (xmlExpNodePtr)0x0) {
      return (xmlExpNodePtr)0x0;
    }
    local_50 = (xmlExpNodePtr)FUN_1001e4a72(param_1,param_2,*(undefined8 *)(param_3 + 0x20));
    if ((local_50 != (xmlExpNodePtr)0x0) && (local_50 != (xmlExpNodePtr)_forbiddenExp)) {
      pxVar2 = (xmlExpNodePtr)FUN_1001e3261(param_1,4,local_58,local_50,0,0,0);
      return pxVar2;
    }
    _xmlExpFree(param_1,local_58);
    return local_50;
  }
  iVar1 = FUN_1001e4830(param_2,param_3);
  if (iVar1 == 0) {
    return (xmlExpNodePtr)_forbiddenExp;
  }
  switch(*param_2) {
  case (xmlExpNode)0x0:
    if (param_3 == (xmlExpNodePtr)_emptyExp) {
      local_80 = (xmlExpNodePtr)_emptyExp;
    }
    else {
      local_80 = (xmlExpNodePtr)_forbiddenExp;
    }
    break;
  case (xmlExpNode)0x1:
    local_80 = (xmlExpNodePtr)_forbiddenExp;
    break;
  case (xmlExpNode)0x2:
    if (*param_3 == (xmlExpNode)0x2) {
      if (*(long *)(param_2 + 0x20) == *(long *)(param_3 + 0x20)) {
        local_80 = (xmlExpNodePtr)_emptyExp;
      }
      else {
        local_80 = (xmlExpNodePtr)_forbiddenExp;
      }
    }
    else if (((*param_3 == (xmlExpNode)0x5) && (*(int *)(param_3 + 0x24) == 1)) &&
            (**(char **)(param_3 + 0x10) == '\x02')) {
      if (*(long *)(param_2 + 0x20) == *(long *)(*(long *)(param_3 + 0x10) + 0x20)) {
        local_80 = (xmlExpNodePtr)_emptyExp;
      }
      else {
        local_80 = (xmlExpNodePtr)_forbiddenExp;
      }
    }
    else {
      local_80 = (xmlExpNodePtr)_forbiddenExp;
    }
    break;
  case (xmlExpNode)0x3:
    iVar1 = FUN_1001e4830(*(undefined8 *)(param_2 + 0x10),param_3);
    if (((iVar1 != 0) &&
        (local_50 = (xmlExpNodePtr)FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x10),param_3),
        local_50 != (xmlExpNodePtr)_forbiddenExp)) && (local_50 != (xmlExpNodePtr)0x0)) {
      *(int *)(*(long *)(param_2 + 0x20) + 4) = *(int *)(*(long *)(param_2 + 0x20) + 4) + 1;
      pxVar2 = (xmlExpNodePtr)
               FUN_1001e3261(param_1,3,local_50,*(undefined8 *)(param_2 + 0x20),0,0,0);
      return pxVar2;
    }
    if (*param_3 == (xmlExpNode)0x5) {
      local_50 = (xmlExpNodePtr)
                 FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_3 + 0x10));
      if (local_50 == (xmlExpNodePtr)0x0) {
        return (xmlExpNodePtr)0x0;
      }
      if (local_50 != (xmlExpNodePtr)_forbiddenExp) {
        if (*(int *)(param_3 + 0x24) < 0) {
          local_20 = -1;
        }
        else {
          local_20 = *(int *)(param_3 + 0x24) + -1;
        }
        if (*(int *)(param_3 + 0x20) < 1) {
          local_24 = 0;
        }
        else {
          local_24 = *(int *)(param_3 + 0x20) + -1;
        }
        *(int *)(*(long *)(param_2 + 0x20) + 4) = *(int *)(*(long *)(param_2 + 0x20) + 4) + 1;
        local_58 = (xmlExpNodePtr)
                   FUN_1001e3261(param_1,3,local_50,*(undefined8 *)(param_2 + 0x20),0,0,0);
        if (local_58 == (xmlExpNodePtr)0x0) {
          return (xmlExpNodePtr)0x0;
        }
        *(int *)(*(long *)(param_3 + 0x10) + 4) = *(int *)(*(long *)(param_3 + 0x10) + 4) + 1;
        local_48 = (xmlExpNodePtr)
                   FUN_1001e3261(param_1,5,*(undefined8 *)(param_3 + 0x10),0,0,local_24,local_20);
        if (local_48 == (xmlExpNodePtr)0x0) {
          _xmlExpFree(param_1,local_58);
          return (xmlExpNodePtr)0x0;
        }
        local_50 = (xmlExpNodePtr)FUN_1001e4a72(param_1,local_58,local_48);
        _xmlExpFree(param_1,local_58);
        _xmlExpFree(param_1,local_48);
        return local_50;
      }
    }
  default:
    if (((byte)param_3[1] & 1) == 0) {
      local_50 = (xmlExpNodePtr)0x0;
    }
    else {
      if (((byte)param_2[1] & 1) == 0) {
        return (xmlExpNodePtr)_forbiddenExp;
      }
      local_50 = (xmlExpNodePtr)_emptyExp;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0x28;
    }
    local_38 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x34) * 8);
    if (local_38 == 0) {
      local_80 = (xmlExpNodePtr)0x0;
    }
    else {
      local_2c = FUN_1001e4193(param_1,param_3,local_38,*(undefined4 *)(param_1 + 0x34),0);
      while (local_2c < 0) {
        local_10 = (*(code *)_xmlRealloc)(local_38,(long)*(int *)(param_1 + 0x34) << 4);
        if (local_10 == 0) {
          (*(code *)_xmlFree)(local_38);
          return (xmlExpNodePtr)0x0;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) * 2;
        local_38 = local_10;
        local_2c = FUN_1001e4193(param_1,param_3,local_10,*(undefined4 *)(param_1 + 0x34),0);
      }
      for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
        local_58 = (xmlExpNodePtr)
                   FUN_1001e444a(param_1,param_2,*(undefined8 *)((long)local_28 * 8 + local_38));
        if ((local_58 == (xmlExpNodePtr)0x0) || (local_58 == (xmlExpNodePtr)_forbiddenExp)) {
          _xmlExpFree(param_1,local_50);
          (*(code *)_xmlFree)(local_38);
          return local_58;
        }
        local_48 = (xmlExpNodePtr)
                   FUN_1001e444a(param_1,param_3,*(undefined8 *)((long)local_28 * 8 + local_38));
        if ((local_48 == (xmlExpNodePtr)0x0) || (local_48 == (xmlExpNodePtr)_forbiddenExp)) {
          _xmlExpFree(param_1,local_58);
          _xmlExpFree(param_1,local_50);
          (*(code *)_xmlFree)(local_38);
          return local_58;
        }
        local_40 = (xmlExpNodePtr)FUN_1001e4a72(param_1,local_58,local_48);
        _xmlExpFree(param_1,local_58);
        _xmlExpFree(param_1,local_48);
        if ((local_40 == (xmlExpNodePtr)0x0) || (local_40 == (xmlExpNodePtr)_forbiddenExp)) {
          _xmlExpFree(param_1,local_50);
          (*(code *)_xmlFree)(local_38);
          return local_40;
        }
        if (local_50 == (xmlExpNodePtr)0x0) {
          local_50 = local_40;
        }
        else {
          local_50 = (xmlExpNodePtr)FUN_1001e3261(param_1,4,local_50,local_40,0,0,0);
          if (local_50 == (xmlExpNodePtr)0x0) {
            (*(code *)_xmlFree)(local_38);
            return (xmlExpNodePtr)0x0;
          }
        }
      }
      (*(code *)_xmlFree)(local_38);
      local_80 = local_50;
    }
    break;
  case (xmlExpNode)0x4:
    local_50 = (xmlExpNodePtr)FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    if (local_50 == (xmlExpNodePtr)0x0) {
      local_80 = (xmlExpNodePtr)0x0;
    }
    else {
      local_58 = (xmlExpNodePtr)FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      if (local_58 == (xmlExpNodePtr)0x0) {
        _xmlExpFree(param_1,local_50);
        local_80 = (xmlExpNodePtr)0x0;
      }
      else {
        local_80 = (xmlExpNodePtr)FUN_1001e3261(param_1,4,local_50,local_58,0,0,0);
      }
    }
    break;
  case (xmlExpNode)0x5:
    if (*param_3 == (xmlExpNode)0x5) {
      local_58 = (xmlExpNodePtr)
                 FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_3 + 0x10));
      if (local_58 == (xmlExpNodePtr)0x0) {
        local_80 = (xmlExpNodePtr)0x0;
      }
      else {
        if (local_58 == (xmlExpNodePtr)_forbiddenExp) {
          local_14 = FUN_1001e488d(param_1,*(undefined8 *)(param_3 + 0x10),
                                   *(undefined8 *)(param_2 + 0x10),0,&local_58);
          if (local_14 < 1) {
            return (xmlExpNodePtr)_forbiddenExp;
          }
          if (*(int *)(param_3 + 0x24) == -1) {
            local_18 = -1;
            if (*(int *)(param_2 + 0x24) != -1) {
              _xmlExpFree(param_1,local_58);
              return (xmlExpNodePtr)_forbiddenExp;
            }
            if (*(int *)(param_3 + 0x20) * local_14 < *(int *)(param_2 + 0x20)) {
              local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x20) * local_14;
            }
            else {
              local_1c = 0;
            }
          }
          else if (*(int *)(param_2 + 0x24) == -1) {
            if (*(int *)(param_3 + 0x20) * local_14 < *(int *)(param_2 + 0x20)) {
              local_18 = -1;
              local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x20) * local_14;
            }
            else {
              local_18 = -1;
              local_1c = 0;
            }
          }
          else {
            if (*(int *)(param_2 + 0x24) < *(int *)(param_3 + 0x24) * local_14) {
              _xmlExpFree(param_1,local_58);
              return (xmlExpNodePtr)_forbiddenExp;
            }
            if (*(int *)(param_2 + 0x20) < *(int *)(param_3 + 0x24) * local_14) {
              local_1c = 0;
            }
            else {
              local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x24) * local_14;
            }
            local_18 = *(int *)(param_2 + 0x24) - *(int *)(param_3 + 0x24) * local_14;
          }
        }
        else {
          if (((byte)local_58[1] & 1) == 0) {
            _xmlExpFree(param_1,local_58);
            return (xmlExpNodePtr)_forbiddenExp;
          }
          if (*(int *)(param_3 + 0x24) == -1) {
            if (*(int *)(param_2 + 0x24) == -1) {
              if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
                local_18 = -1;
                local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x20);
              }
              else {
                local_18 = -1;
                local_1c = 0;
              }
            }
            else {
              if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
                _xmlExpFree(param_1,local_58);
                return (xmlExpNodePtr)_forbiddenExp;
              }
              local_18 = -1;
              local_1c = 0;
            }
          }
          else if (*(int *)(param_2 + 0x24) == -1) {
            if (*(int *)(param_3 + 0x20) < *(int *)(param_2 + 0x20)) {
              local_18 = -1;
              local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x20);
            }
            else {
              local_18 = -1;
              local_1c = 0;
            }
          }
          else {
            if (*(int *)(param_2 + 0x24) < *(int *)(param_3 + 0x24)) {
              _xmlExpFree(param_1,local_58);
              return (xmlExpNodePtr)_forbiddenExp;
            }
            if (*(int *)(param_2 + 0x20) < *(int *)(param_3 + 0x24)) {
              local_1c = 0;
            }
            else {
              local_1c = *(int *)(param_2 + 0x20) - *(int *)(param_3 + 0x24);
            }
            local_18 = *(int *)(param_2 + 0x24) - *(int *)(param_3 + 0x24);
          }
        }
        *(int *)(*(long *)(param_2 + 0x10) + 4) = *(int *)(*(long *)(param_2 + 0x10) + 4) + 1;
        local_48 = (xmlExpNodePtr)
                   FUN_1001e3261(param_1,5,*(undefined8 *)(param_2 + 0x10),0,0,local_1c,local_18);
        if (local_48 == (xmlExpNodePtr)0x0) {
          local_80 = (xmlExpNodePtr)0x0;
        }
        else {
          local_80 = (xmlExpNodePtr)FUN_1001e3261(param_1,3,local_58,local_48,0,0,0);
        }
      }
    }
    else {
      local_58 = (xmlExpNodePtr)FUN_1001e4a72(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
      if (local_58 == (xmlExpNodePtr)0x0) {
        local_80 = (xmlExpNodePtr)0x0;
      }
      else if (local_58 == (xmlExpNodePtr)_forbiddenExp) {
        local_80 = (xmlExpNodePtr)_forbiddenExp;
      }
      else {
        if (*(int *)(param_2 + 0x20) < 1) {
          local_1c = 0;
        }
        else {
          local_1c = *(int *)(param_2 + 0x20) + -1;
        }
        if (*(int *)(param_2 + 0x24) < 0) {
          local_18 = -1;
        }
        else {
          local_18 = *(int *)(param_2 + 0x24) + -1;
        }
        *(int *)(*(long *)(param_2 + 0x10) + 4) = *(int *)(*(long *)(param_2 + 0x10) + 4) + 1;
        local_48 = (xmlExpNodePtr)
                   FUN_1001e3261(param_1,5,*(undefined8 *)(param_2 + 0x10),0,0,local_1c,local_18);
        if (local_48 == (xmlExpNodePtr)0x0) {
          local_80 = (xmlExpNodePtr)0x0;
        }
        else {
          local_80 = (xmlExpNodePtr)FUN_1001e3261(param_1,3,local_58,local_48,0,0,0);
        }
      }
    }
  }
  return local_80;
}

