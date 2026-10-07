
xmlExpNodePtr
FUN_1001e3261(xmlExpCtxtPtr param_1,uint param_2,xmlExpNodePtr param_3,xmlExpNodePtr param_4,
             long param_5,int param_6,int param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  xmlExpNodePtr pxVar3;
  xmlExpNodePtr local_80;
  xmlExpNodePtr local_68;
  xmlExpNodePtr local_60;
  ushort local_44;
  xmlExpNodePtr local_38;
  
  if (param_1 == (xmlExpCtxtPtr)0x0) {
    return (xmlExpNodePtr)0x0;
  }
  local_68 = param_4;
  local_60 = param_3;
  if (param_2 == 2) {
    local_44 = FUN_1001e3041(param_5);
  }
  else if (param_2 == 5) {
    if (param_6 == param_7) {
      if (param_6 == 1) {
        return param_3;
      }
      if (param_6 == 0) {
        _xmlExpFree(param_1,param_3);
        return (xmlExpNodePtr)_emptyExp;
      }
    }
    if (param_6 < 0) {
      _xmlExpFree(param_1,param_3);
      return (xmlExpNodePtr)_forbiddenExp;
    }
    if (param_7 == -1) {
      local_44 = (short)param_6 + 0x4f;
    }
    else {
      local_44 = (short)param_7 - (short)param_6;
    }
    local_44 = local_44 + *(short *)(param_3 + 2);
  }
  else if (param_2 == 4) {
    if (*param_3 == (xmlExpNode)0x1) {
      _xmlExpFree(param_1,param_3);
      return param_4;
    }
    if (*param_4 == (xmlExpNode)0x1) {
      _xmlExpFree(param_1,param_4);
      return param_3;
    }
    if (param_3 == param_4) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + -1;
      return param_3;
    }
    if ((*param_3 == (xmlExpNode)0x4) && (*param_4 != (xmlExpNode)0x4)) {
      local_68 = param_3;
      local_60 = param_4;
    }
    pxVar3 = local_60;
    if ((*local_68 == (xmlExpNode)0x4) &&
       ((*(xmlExpNodePtr *)(local_68 + 0x10) == local_60 ||
        (*(xmlExpNodePtr *)(local_68 + 0x20) == local_60)))) {
      _xmlExpFree(param_1,local_60);
      return local_68;
    }
    if (*local_60 == (xmlExpNode)0x4) {
      if ((**(char **)(local_60 + 0x20) != '\x04') &&
         (*(ushort *)(*(long *)(local_60 + 0x20) + 2) < *(ushort *)(*(long *)(local_60 + 0x10) + 2))
         ) {
        uVar2 = *(undefined8 *)(local_60 + 0x20);
        *(undefined8 *)(local_60 + 0x20) = *(undefined8 *)(local_60 + 0x10);
        *(undefined8 *)(local_60 + 0x10) = uVar2;
      }
      *(int *)(*(long *)(local_60 + 0x20) + 4) = *(int *)(*(long *)(local_60 + 0x20) + 4) + 1;
      uVar2 = FUN_1001e3261(param_1,4,*(undefined8 *)(local_60 + 0x20),local_68,0,0,0);
      *(int *)(*(long *)(local_60 + 0x10) + 4) = *(int *)(*(long *)(local_60 + 0x10) + 4) + 1;
      pxVar3 = (xmlExpNodePtr)FUN_1001e3261(param_1,4,*(undefined8 *)(local_60 + 0x10),uVar2,0,0,0);
      _xmlExpFree(param_1,local_60);
      return pxVar3;
    }
    if (*local_68 == (xmlExpNode)0x4) {
      if (*(ushort *)(*(long *)(local_68 + 0x20) + 2) < *(ushort *)(local_60 + 2)) {
        *(int *)(*(long *)(local_68 + 0x20) + 4) = *(int *)(*(long *)(local_68 + 0x20) + 4) + 1;
        uVar2 = FUN_1001e3261(param_1,4,*(undefined8 *)(local_68 + 0x20),local_60,0,0,0);
        *(int *)(*(long *)(local_68 + 0x10) + 4) = *(int *)(*(long *)(local_68 + 0x10) + 4) + 1;
        pxVar3 = (xmlExpNodePtr)
                 FUN_1001e3261(param_1,4,*(undefined8 *)(local_68 + 0x10),uVar2,0,0,0);
        _xmlExpFree(param_1,local_68);
        return pxVar3;
      }
      if (*(ushort *)(*(long *)(local_68 + 0x10) + 2) < *(ushort *)(local_60 + 2)) {
        *(int *)(*(long *)(local_68 + 0x20) + 4) = *(int *)(*(long *)(local_68 + 0x20) + 4) + 1;
        uVar2 = FUN_1001e3261(param_1,4,local_60,*(undefined8 *)(local_68 + 0x20),0,0,0);
        *(int *)(*(long *)(local_68 + 0x10) + 4) = *(int *)(*(long *)(local_68 + 0x10) + 4) + 1;
        pxVar3 = (xmlExpNodePtr)
                 FUN_1001e3261(param_1,4,*(undefined8 *)(local_68 + 0x10),uVar2,0,0,0);
        _xmlExpFree(param_1,local_68);
        return pxVar3;
      }
    }
    else if (*(ushort *)(local_68 + 2) < *(ushort *)(local_60 + 2)) {
      local_60 = local_68;
      local_68 = pxVar3;
    }
    local_44 = FUN_1001e30bf(4,local_60,local_68);
  }
  else {
    if (param_2 != 3) {
      return (xmlExpNodePtr)0x0;
    }
    if (*param_3 == (xmlExpNode)0x1) {
      _xmlExpFree(param_1,param_4);
      return param_3;
    }
    if (*param_4 == (xmlExpNode)0x1) {
      _xmlExpFree(param_1,param_3);
      return param_4;
    }
    if (*param_4 == (xmlExpNode)0x0) {
      return param_3;
    }
    if (*param_3 == (xmlExpNode)0x0) {
      return param_4;
    }
    local_44 = FUN_1001e30bf(3,param_3,param_4);
  }
  uVar1 = (long)(ulong)local_44 % (long)*(int *)(param_1 + 0x10);
  if (*(long *)(*(long *)(param_1 + 8) + (uVar1 & 0xffff) * 8) != 0) {
    for (local_38 = *(xmlExpNodePtr *)(*(long *)(param_1 + 8) + (uVar1 & 0xffff) * 8);
        local_38 != (xmlExpNodePtr)0x0; local_38 = *(xmlExpNodePtr *)(local_38 + 0x18)) {
      if ((*(ushort *)(local_38 + 2) == local_44) && ((byte)*local_38 == param_2)) {
        if (param_2 == 2) {
          if (*(long *)(local_38 + 0x20) == param_5) {
            *(int *)(local_38 + 4) = *(int *)(local_38 + 4) + 1;
            return local_38;
          }
        }
        else if (param_2 == 5) {
          if (((*(int *)(local_38 + 0x20) == param_6) && (*(int *)(local_38 + 0x24) == param_7)) &&
             (*(xmlExpNodePtr *)(local_38 + 0x10) == local_60)) {
            *(int *)(local_38 + 4) = *(int *)(local_38 + 4) + 1;
            *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
            return local_38;
          }
        }
        else if ((*(xmlExpNodePtr *)(local_38 + 0x10) == local_60) &&
                (*(xmlExpNodePtr *)(local_38 + 0x20) == local_68)) {
          *(int *)(local_38 + 4) = *(int *)(local_38 + 4) + 1;
          *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
          *(int *)(local_68 + 4) = *(int *)(local_68 + 4) + -1;
          return local_38;
        }
      }
    }
  }
  local_80 = (xmlExpNodePtr)FUN_1001e319f(param_1,param_2);
  if (local_80 == (xmlExpNodePtr)0x0) {
    local_80 = (xmlExpNodePtr)0x0;
  }
  else {
    *(ushort *)(local_80 + 2) = local_44;
    if (param_2 == 2) {
      *(long *)(local_80 + 0x20) = param_5;
      *(undefined4 *)(local_80 + 8) = 1;
    }
    else if (param_2 == 5) {
      *(int *)(local_80 + 0x20) = param_6;
      *(int *)(local_80 + 0x24) = param_7;
      *(xmlExpNodePtr *)(local_80 + 0x10) = local_60;
      if ((param_6 == 0) || (((byte)local_60[1] & 1) != 0)) {
        local_80[1] = (xmlExpNode)((byte)local_80[1] | 1);
      }
      if (param_7 < 0) {
        *(undefined4 *)(local_80 + 8) = 0xffffffff;
      }
      else {
        *(int *)(local_80 + 8) = *(int *)(*(long *)(local_80 + 0x10) + 8) * param_7;
      }
    }
    else {
      *(xmlExpNodePtr *)(local_80 + 0x10) = local_60;
      *(xmlExpNodePtr *)(local_80 + 0x20) = local_68;
      if (param_2 == 4) {
        if ((((byte)local_60[1] & 1) != 0) || (((byte)local_68[1] & 1) != 0)) {
          local_80[1] = (xmlExpNode)((byte)local_80[1] | 1);
        }
        if ((*(int *)(*(long *)(local_80 + 0x10) + 8) == -1) ||
           (*(int *)(*(long *)(local_80 + 0x20) + 8) == -1)) {
          *(undefined4 *)(local_80 + 8) = 0xffffffff;
        }
        else if (*(int *)(*(long *)(local_80 + 0x20) + 8) < *(int *)(*(long *)(local_80 + 0x10) + 8)
                ) {
          *(undefined4 *)(local_80 + 8) = *(undefined4 *)(*(long *)(local_80 + 0x10) + 8);
        }
        else {
          *(undefined4 *)(local_80 + 8) = *(undefined4 *)(*(long *)(local_80 + 0x20) + 8);
        }
      }
      else {
        if ((((byte)local_60[1] & 1) != 0) && (((byte)local_68[1] & 1) != 0)) {
          local_80[1] = (xmlExpNode)((byte)local_80[1] | 1);
        }
        if ((*(int *)(*(long *)(local_80 + 0x10) + 8) == -1) ||
           (*(int *)(*(long *)(local_80 + 0x20) + 8) == -1)) {
          *(undefined4 *)(local_80 + 8) = 0xffffffff;
        }
        else {
          *(int *)(local_80 + 8) =
               *(int *)(*(long *)(local_80 + 0x10) + 8) + *(int *)(*(long *)(local_80 + 0x20) + 8);
        }
      }
    }
    *(undefined4 *)(local_80 + 4) = 1;
    if (*(long *)(*(long *)(param_1 + 8) + (uVar1 & 0xffff) * 8) != 0) {
      *(undefined8 *)(local_80 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 8) + (uVar1 & 0xffff) * 8);
    }
    *(xmlExpNodePtr *)(*(long *)(param_1 + 8) + (uVar1 & 0xffff) * 8) = local_80;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return local_80;
}

