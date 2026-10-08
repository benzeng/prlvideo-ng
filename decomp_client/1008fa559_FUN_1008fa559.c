
int FUN_1008fa559(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  xmlChar *pxVar2;
  xmlNodePtr pxVar3;
  int local_40;
  int local_1c;
  
  local_1c = 0;
  if ((param_2 == 0) || (param_1 == (undefined8 *)0x0)) {
    local_40 = -1;
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x20) = 0;
      *(undefined4 *)(*(long *)(param_1[3] + (long)param_3 * 8) + 0x38) = 1;
    }
    else {
      lVar1 = _xmlXIncludeNewContext(*param_1);
      if (lVar1 == 0) {
        return -1;
      }
      pxVar2 = _xmlStrdup((xmlChar *)param_1[0xc]);
      *(xmlChar **)(lVar1 + 0x60) = pxVar2;
      _xmlXIncludeSetFlags(lVar1,*(undefined4 *)(param_1 + 0xb));
      local_1c = FUN_1008fb17a(lVar1,*param_1,*(undefined8 *)(param_2 + 0x18));
      if (*(int *)(param_1 + 10) < 1) {
        if (0 < local_1c) {
          local_1c = 0;
        }
      }
      else {
        local_1c = -1;
      }
      _xmlXIncludeFreeContext(lVar1);
      lVar1 = *(long *)(param_1[3] + (long)param_3 * 8);
      pxVar3 = _xmlDocCopyNodeList((xmlDocPtr)*param_1,*(xmlNodePtr *)(param_2 + 0x18));
      *(xmlNodePtr *)(lVar1 + 0x20) = pxVar3;
    }
    local_40 = local_1c;
  }
  return local_40;
}

