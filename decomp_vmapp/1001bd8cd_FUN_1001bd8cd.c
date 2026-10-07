
long FUN_1001bd8cd(long param_1,xmlChar *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  long local_28;
  int local_18;
  int local_14;
  
  local_30 = 0;
  local_28 = 0;
  pxVar2 = _xmlStrchr(param_2,'[');
  if (((pxVar2 == (xmlChar *)0x0) && (pxVar2 = _xmlStrchr(param_2,'('), pxVar2 == (xmlChar *)0x0))
     && (pxVar2 = _xmlStrchr(param_2,'@'), pxVar2 == (xmlChar *)0x0)) {
    pxVar2 = _xmlStrchr(param_2,':');
    if ((pxVar2 != (xmlChar *)0x0) && (pxVar2[1] == ':')) {
      return 0;
    }
    if ((param_1 != 0) &&
       (local_30 = *(undefined8 *)(param_1 + 0x148), 0 < *(int *)(param_1 + 0x58))) {
      local_28 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x58) * 0x10 + 0x10);
      if (local_28 == 0) {
        FUN_1001a4e9b(param_1,"allocating namespaces array\n");
        return 0;
      }
      local_18 = 0;
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0x58); local_14 = local_14 + 1) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_14 * 8);
        *(undefined8 *)((long)local_18 * 8 + local_28) = *(undefined8 *)(lVar3 + 0x10);
        *(undefined8 *)((long)(local_18 + 1) * 8 + local_28) = *(undefined8 *)(lVar3 + 0x18);
        local_18 = local_18 + 2;
      }
      *(undefined8 *)((long)local_18 * 8 + local_28) = 0;
      *(undefined8 *)((long)(local_18 + 1) * 8 + local_28) = 0;
    }
    lVar3 = _xmlPatterncompile(param_2,local_30,1,local_28);
    if ((lVar3 != 0) && (iVar1 = _xmlPatternStreamable(lVar3), iVar1 == 1)) {
      lVar4 = FUN_1001a545a();
      if (lVar4 == 0) {
        FUN_1001a4e9b(param_1,"allocating streamable expression\n");
        return 0;
      }
      *(long *)(lVar4 + 0x28) = lVar3;
      *(undefined8 *)(lVar4 + 0x20) = local_30;
      if (*(long *)(lVar4 + 0x20) == 0) {
        return lVar4;
      }
      _xmlDictReference(*(xmlDictPtr *)(lVar4 + 0x20));
      return lVar4;
    }
    _xmlFreePattern(lVar3);
  }
  return 0;
}

