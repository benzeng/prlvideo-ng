
int FUN_10093cb49(long param_1)

{
  long lVar1;
  xmlChar *pxVar2;
  int local_44;
  byte *local_38;
  byte *local_30;
  xmlChar *local_28;
  int local_14;
  
  local_28 = (xmlChar *)0x0;
  local_14 = 0;
  lVar1 = FUN_10093cac5(param_1,3);
  if (lVar1 == 0) {
    FUN_10093cac5(param_1,4);
    local_44 = 0;
  }
  else {
    local_38 = *(byte **)(lVar1 + 0x28);
    do {
      if (*(int *)(lVar1 + 0x5c) == 3) {
        for (; (*local_38 == 0x20 || (((8 < *local_38 && (*local_38 < 0xb)) || (*local_38 == 0xd))))
            ; local_38 = local_38 + 1) {
        }
        for (local_30 = local_38;
            (((*local_30 != 0 && (*local_30 != 0x20)) && ((*local_30 < 9 || (10 < *local_30)))) &&
            (*local_30 != 0xd)); local_30 = local_30 + 1) {
        }
        if (local_30 == local_38) break;
        local_28 = _xmlDictLookup(*(xmlDictPtr *)(*(long *)(param_1 + 0x28) + 0x78),local_38,
                                  (int)local_30 - (int)local_38);
        local_38 = local_30;
      }
      for (; ((*local_38 == 0x20 || ((8 < *local_38 && (*local_38 < 0xb)))) || (*local_38 == 0xd));
          local_38 = local_38 + 1) {
      }
      for (local_30 = local_38;
          (((*local_30 != 0 && (*local_30 != 0x20)) && ((*local_30 < 9 || (10 < *local_30)))) &&
          (*local_30 != 0xd)); local_30 = local_30 + 1) {
      }
      if (local_30 == local_38) break;
      pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(*(long *)(param_1 + 0x28) + 0x78),local_38,
                              (int)local_30 - (int)local_38);
      local_38 = local_30;
      local_14 = FUN_10093c83c(param_1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 8),
                               local_28,pxVar2);
      if (local_14 == -1) {
        FUN_10091c652(param_1,"xmlSchemaAssembleByXSI","assembling schemata");
        return -1;
      }
    } while (*local_30 != 0);
    local_44 = local_14;
  }
  return local_44;
}

