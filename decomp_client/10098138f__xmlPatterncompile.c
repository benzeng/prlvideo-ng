
long _xmlPatterncompile(xmlChar *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  xmlChar *cur;
  long lVar2;
  int iVar3;
  long lVar4;
  long local_70;
  long local_40;
  long local_38;
  long local_30;
  xmlChar *local_28;
  xmlChar *local_18;
  uint local_10;
  
  local_40 = 0;
  local_10 = 0;
  bVar1 = true;
  local_28 = param_1;
  if (param_1 == (xmlChar *)0x0) {
    local_70 = 0;
  }
  else {
    while (cur = local_28, local_30 = 0, *local_28 != '\0') {
      local_18 = (xmlChar *)0x0;
      for (; (*local_28 != '\0' && (*local_28 != '|')); local_28 = local_28 + 1) {
      }
      if (*local_28 == '\0') {
        local_30 = FUN_10097da1d(cur,param_2,param_4);
      }
      else {
        local_18 = _xmlStrndup(cur,(int)local_28 - (int)cur);
        if (local_18 != (xmlChar *)0x0) {
          local_30 = FUN_10097da1d(local_18,param_2,param_4);
        }
        local_28 = local_28 + 1;
      }
      if ((local_30 == 0) || (lVar4 = FUN_10097d7c0(), lVar4 == 0)) {
LAB_100981611:
        if (local_30 != 0) {
          FUN_10097db00(local_30);
        }
        if (local_40 != 0) {
          _xmlFreePattern(local_40);
        }
        if (local_18 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_18);
        }
        return 0;
      }
      lVar2 = lVar4;
      if (local_40 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(local_40 + 0x10);
        *(long *)(local_40 + 0x10) = lVar4;
        lVar2 = local_40;
      }
      local_40 = lVar2;
      *(undefined4 *)(lVar4 + 0x20) = param_3;
      *(long *)(local_30 + 0x20) = lVar4;
      FUN_10097f9f5(local_30);
      if (*(int *)(local_30 + 0x10) != 0) goto LAB_100981611;
      FUN_10097db00(local_30);
      local_30 = 0;
      if (bVar1) {
        if (local_10 == 0) {
          local_10 = *(uint *)(lVar4 + 0x20) & 0x300;
        }
        else if (local_10 == 0x100) {
          if ((*(uint *)(lVar4 + 0x20) >> 9 & 1) != 0) {
            bVar1 = false;
          }
        }
        else if ((local_10 == 0x200) && ((*(uint *)(lVar4 + 0x20) >> 8 & 1) != 0)) {
          bVar1 = false;
        }
      }
      if (bVar1) {
        FUN_100980171(lVar4);
      }
      iVar3 = FUN_10097dc62(lVar4);
      if (iVar3 < 0) goto LAB_100981611;
      if (local_18 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_18);
      }
    }
    if (!bVar1) {
      for (local_38 = local_40; local_38 != 0; local_38 = *(long *)(local_38 + 0x10)) {
        if (*(long *)(local_38 + 0x38) != 0) {
          FUN_100980028(*(undefined8 *)(local_38 + 0x38));
          *(undefined8 *)(local_38 + 0x38) = 0;
        }
      }
    }
    local_70 = local_40;
  }
  return local_70;
}

