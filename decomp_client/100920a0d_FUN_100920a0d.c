
void * FUN_100920a0d(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  int iVar1;
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  if (param_2 != (xmlChar *)0x0) {
    if (((((param_3 == (xmlChar *)0x0) ||
          (iVar1 = _xmlStrEqual(param_3,PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
          iVar1 == 0)) ||
         (local_18 = (void *)_xmlSchemaGetPredefinedType(param_2,param_3), local_18 == (void *)0x0))
        && (param_1 != 0)) &&
       (((iVar1 = _xmlStrEqual(param_3,*(xmlChar **)(param_1 + 8)), iVar1 == 0 ||
         (local_18 = _xmlHashLookup(*(xmlHashTablePtr *)(param_1 + 0x38),param_2),
         local_18 == (void *)0x0)) &&
        (iVar1 = _xmlHashSize(*(xmlHashTablePtr *)(param_1 + 0x60)), 1 < iVar1)))) {
      if (param_3 == (xmlChar *)0x0) {
        local_10 = _xmlHashLookup(*(xmlHashTablePtr *)(param_1 + 0x60),(xmlChar *)"##");
      }
      else {
        local_10 = _xmlHashLookup(*(xmlHashTablePtr *)(param_1 + 0x60),param_3);
      }
      if (local_10 != (void *)0x0) {
        local_18 = _xmlHashLookup(*(xmlHashTablePtr *)(*(long *)((long)local_10 + 0x50) + 0x38),
                                  param_2);
      }
    }
    if ((local_18 != (void *)0x0) && (*(long *)((long)local_18 + 0x80) != 0)) {
      local_18 = *(void **)((long)local_18 + 0x80);
    }
    return local_18;
  }
  return (void *)0x0;
}

