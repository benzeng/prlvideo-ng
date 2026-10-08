
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined4 _xmlTextReaderRead(int *param_1)

{
  xmlNodePtr pxVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int local_48;
  int local_44;
  xmlNodePtr local_40;
  int local_1c;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = (xmlNodePtr)0x0;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar2 = FUN_10095a36a(param_1);
    return uVar2;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x18) != 1) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    local_44 = param_1[6];
    local_48 = *(int *)(*(long *)(param_1 + 8) + 0x58);
    local_40 = *(xmlNodePtr *)(param_1 + 0x1c);
    goto LAB_1009591c0;
  }
  *param_1 = 1;
  do {
    iVar3 = FUN_100958280(param_1);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
  } while (((*(long *)(*(long *)(param_1 + 8) + 0x50) == 0) && (*param_1 != 3)) && (*param_1 != 5));
  if (*(long *)(*(long *)(param_1 + 8) + 0x50) == 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x1c) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x18);
    }
    if (*(long *)(param_1 + 0x1c) == 0) {
      return 0xffffffff;
    }
    param_1[6] = 1;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x1c) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x18);
    }
    if (*(long *)(param_1 + 0x1c) == 0) {
      *(undefined8 *)(param_1 + 0x1c) = **(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    }
    param_1[6] = 1;
  }
  param_1[0x20] = 0;
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x2b0) = 5;
  do {
    if ((((*(long *)(param_1 + 0x1c) != 0) && (*(long *)(*(long *)(param_1 + 0x1c) + 0x30) == 0)) &&
        ((*(int *)(*(long *)(param_1 + 0x1c) + 8) == 3 ||
         (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 4)))) &&
       (lVar4 = _xmlTextReaderExpand(param_1), lVar4 == 0)) {
      return 0xffffffff;
    }
    if (((param_1[0x44] != 0) && (*(long *)(param_1 + 0x1c) != 0)) &&
       (((*(int *)(*(long *)(param_1 + 0x1c) + 8) == 1 &&
         (*(long *)(*(long *)(param_1 + 0x1c) + 0x48) != 0)) &&
        ((iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)(param_1 + 0x1c) + 0x48) + 0x10),
                               (xmlChar *)"http://www.w3.org/2003/XInclude"), iVar3 != 0 ||
         (iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)(param_1 + 0x1c) + 0x48) + 0x10),
                               (xmlChar *)"http://www.w3.org/2001/XInclude"), iVar3 != 0)))))) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar5 = _xmlXIncludeNewContext(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        _xmlXIncludeSetFlags(*(undefined8 *)(param_1 + 0x48),param_1[0x51] & 0xffff7fff);
      }
      lVar4 = _xmlTextReaderExpand(param_1);
      if (lVar4 == 0) {
        return 0xffffffff;
      }
      _xmlXIncludeProcessNode(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x1c));
    }
    if (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0x13) {
      param_1[0x4a] = param_1[0x4a] + 1;
    }
    else if (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0x14) {
      param_1[0x4a] = param_1[0x4a] + -1;
    }
    else {
      if ((((*(long *)(param_1 + 0x1c) == 0) || (*(int *)(*(long *)(param_1 + 0x1c) + 8) != 5)) ||
          (*(long *)(param_1 + 8) == 0)) || (*(int *)(*(long *)(param_1 + 8) + 0x1c) != 1)) {
        if (((*(long *)(param_1 + 0x1c) != 0) && (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 5)) &&
           ((*(long *)(param_1 + 8) != 0 && (param_1[4] != 0)))) {
          FUN_100958afa(param_1);
        }
      }
      else {
        if (((*(long *)(*(long *)(param_1 + 0x1c) + 0x18) == 0) && (**(long **)(param_1 + 8) != 0))
           && (*(long *)(**(long **)(param_1 + 8) + 0x28) != 0)) {
          lVar4 = *(long *)(param_1 + 0x1c);
          uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x28))
                            (*(undefined8 *)(param_1 + 8),
                             *(undefined8 *)(*(long *)(param_1 + 0x1c) + 0x10));
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
        }
        if (((*(long *)(*(long *)(param_1 + 0x1c) + 0x18) != 0) &&
            (*(int *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x18) + 8) == 0x11)) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x18) + 0x18) != 0)) {
          FUN_100957ccc(param_1,*(undefined8 *)(param_1 + 0x1c));
          *(undefined8 *)(param_1 + 0x1c) =
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x18) + 0x18);
        }
      }
      if (((*(long *)(param_1 + 0x1c) == 0) || (*(int *)(*(long *)(param_1 + 0x1c) + 8) != 0x11)) ||
         ((*(long *)(param_1 + 0x2a) == 0 ||
          (*(long *)(*(long *)(param_1 + 0x2a) + 0x18) != *(long *)(param_1 + 0x1c))))) {
        if ((param_1[4] != 0) && (*(long *)(param_1 + 0x1c) != 0)) {
          lVar4 = *(long *)(param_1 + 0x1c);
          if ((*(int *)(lVar4 + 8) == 1) && ((param_1[6] != 2 && (param_1[6] != 4)))) {
            FUN_1009585d6(param_1);
          }
          else if ((*(int *)(lVar4 + 8) == 3) || (*(int *)(lVar4 + 8) == 4)) {
            iVar3 = _xmlStrlen(*(xmlChar **)(lVar4 + 0x50));
            FUN_100958817(param_1,*(undefined8 *)(lVar4 + 0x50),iVar3);
          }
        }
        if (((param_1[0x4b] < 1) || (param_1[6] == 2)) || (param_1[6] == 4)) goto LAB_100959cad;
        local_1c = 0;
        break;
      }
      uVar5 = FUN_100957e5c(param_1);
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
      param_1[0x20] = param_1[0x20] + 1;
    }
LAB_1009591c0:
    if (*(long *)(param_1 + 0x1c) == 0) {
      if (*param_1 == 5) {
        return 0;
      }
      return 0xffffffff;
    }
    while (((((*(long *)(param_1 + 0x1c) != 0 && (*(long *)(*(long *)(param_1 + 0x1c) + 0x30) == 0))
             && (*(int *)(*(long *)(param_1 + 8) + 0x58) == local_48)) &&
            (((((local_44 == 4 || (*(long *)(*(long *)(param_1 + 0x1c) + 0x18) == 0)) ||
               (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 5)) ||
              (((*(long *)(*(long *)(param_1 + 0x1c) + 0x18) != 0 &&
                (*(int *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x18) + 8) == 3)) &&
               (*(long *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x18) + 0x30) == 0)))) ||
             (((*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0xe ||
               (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 9)) ||
              (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0xd)))))) &&
           ((((*(long *)(*(long *)(param_1 + 8) + 0x50) == 0 ||
              (*(long *)(*(long *)(param_1 + 8) + 0x50) == *(long *)(param_1 + 0x1c))) ||
             (*(long *)(*(long *)(param_1 + 8) + 0x50) ==
              *(long *)(*(long *)(param_1 + 0x1c) + 0x28))) &&
            (*(int *)(*(long *)(param_1 + 8) + 0x110) != -1))))) {
      iVar3 = FUN_100958280(param_1);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      if (*(long *)(param_1 + 0x1c) == 0) goto LAB_100959757;
    }
    if (((local_44 == 4) || (*(long *)(*(long *)(param_1 + 0x1c) + 0x18) == 0)) ||
       ((*(int *)(*(long *)(param_1 + 0x1c) + 8) == 5 ||
        ((*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0x13 ||
         (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0xe)))))) {
      if (*(long *)(*(long *)(param_1 + 0x1c) + 0x30) == 0) {
        if ((((local_44 == 1) && (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 1)) &&
            (*(long *)(*(long *)(param_1 + 0x1c) + 0x18) == 0)) &&
           ((((byte)*(undefined2 *)(*(long *)(param_1 + 0x1c) + 0x72) ^ 1) & 1) != 0)) {
          param_1[6] = 2;
        }
        else {
          if ((param_1[4] != 0) && (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 1)) {
            FUN_100958900(param_1);
          }
          if ((0 < param_1[0x50]) && ((*(ushort *)(*(long *)(param_1 + 0x1c) + 0x72) >> 2 & 1) != 0)
             ) {
            param_1[0x50] = param_1[0x50] + -1;
          }
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(long *)(param_1 + 0x1c) + 0x28);
          if ((((*(long *)(param_1 + 0x1c) == 0) || (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 9))
              || (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0x15)) ||
             (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 0xd)) {
            if (*param_1 != 5) {
              iVar3 = _xmlParseChunk(*(xmlParserCtxtPtr *)(param_1 + 8),"",0,1);
              *param_1 = 5;
              if (iVar3 != 0) {
                return 0xffffffff;
              }
            }
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            param_1[0x20] = -1;
            if ((((param_1[0x50] == 0) && (param_1[0x4a] == 0)) &&
                ((param_1[0x2c] == 0 &&
                 ((local_40->type != XML_DTD_NODE && (((local_40->extra >> 1 ^ 1) & 1) != 0)))))) &&
               (param_1[0x2c] == 0)) {
              _xmlUnlinkNode(local_40);
              FUN_1009577bc(param_1,local_40);
            }
LAB_100959757:
            *param_1 = 5;
            return 0;
          }
          if ((((param_1[0x50] == 0) && (param_1[0x4a] == 0)) && (param_1[0x2c] == 0)) &&
             ((*(long *)(*(long *)(param_1 + 0x1c) + 0x20) != 0 &&
              (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x20) + 0x72) >> 1 ^ 1) & 1) != 0
              )))) {
            pxVar1 = *(xmlNodePtr *)(*(long *)(param_1 + 0x1c) + 0x20);
            _xmlUnlinkNode(pxVar1);
            FUN_1009577bc(param_1,pxVar1);
          }
          param_1[0x20] = param_1[0x20] + -1;
          param_1[6] = 4;
        }
      }
      else if (((local_44 == 1) && (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 1)) &&
              ((*(long *)(*(long *)(param_1 + 0x1c) + 0x18) == 0 &&
               (((((byte)*(undefined2 *)(*(long *)(param_1 + 0x1c) + 0x72) ^ 1) & 1) != 0 &&
                (param_1[0x4a] < 1)))))) {
        param_1[6] = 2;
      }
      else {
        if ((param_1[4] != 0) && (*(int *)(*(long *)(param_1 + 0x1c) + 8) == 1)) {
          FUN_100958900(param_1);
        }
        if ((0 < param_1[0x50]) && ((*(ushort *)(*(long *)(param_1 + 0x1c) + 0x72) >> 2 & 1) != 0))
        {
          param_1[0x50] = param_1[0x50] + -1;
        }
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(long *)(param_1 + 0x1c) + 0x30);
        param_1[6] = 1;
        if ((((param_1[0x50] == 0) && (param_1[0x4a] == 0)) && (param_1[0x2c] == 0)) &&
           (((*(long *)(*(long *)(param_1 + 0x1c) + 0x38) != 0 &&
             (*(int *)(*(long *)(*(long *)(param_1 + 0x1c) + 0x38) + 8) != 0xe)) &&
            ((param_1[0x2c] == 0 &&
             (pxVar1 = *(xmlNodePtr *)(*(long *)(param_1 + 0x1c) + 0x38),
             ((pxVar1->extra >> 1 ^ 1) & 1) != 0)))))) {
          _xmlUnlinkNode(pxVar1);
          FUN_1009577bc(param_1,pxVar1);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(long *)(param_1 + 0x1c) + 0x18);
      param_1[0x20] = param_1[0x20] + 1;
      param_1[6] = 1;
    }
  } while( true );
LAB_100959c9e:
  if (param_1[0x4b] <= local_1c) {
LAB_100959cad:
    if (((param_1[4] == 4) && (param_1[0x40] == 0)) && (*(long *)(param_1 + 0x3e) != 0)) {
      iVar3 = _xmlSchemaIsValid(*(undefined8 *)(param_1 + 0x3e));
      param_1[0x40] = (uint)(iVar3 == 0);
    }
    return 1;
  }
  iVar3 = _xmlPatternMatch(*(undefined8 *)(*(long *)(param_1 + 0x4e) + (long)local_1c * 8),
                           *(undefined8 *)(param_1 + 0x1c));
  if (iVar3 == 1) {
    _xmlTextReaderPreserve(param_1);
    goto LAB_100959cad;
  }
  local_1c = local_1c + 1;
  goto LAB_100959c9e;
}

