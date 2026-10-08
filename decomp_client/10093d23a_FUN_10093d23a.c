
int FUN_10093d23a(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  xmlChar *pxVar1;
  int local_34;
  xmlChar *local_30;
  int local_c;
  
  pxVar1 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x100),param_2,-1);
  if (pxVar1 == (xmlChar *)0x0) {
    local_34 = -1;
  }
  else {
    local_30 = param_3;
    if ((param_3 != (xmlChar *)0x0) &&
       (local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x100),param_3,-1),
       local_30 == (xmlChar *)0x0)) {
      return -1;
    }
    for (local_c = 0; local_c < *(int *)(*(long *)(param_1 + 0x128) + 8); local_c = local_c + 2) {
      if ((*(xmlChar **)(**(long **)(param_1 + 0x128) + (long)local_c * 8) == pxVar1) &&
         (*(xmlChar **)(**(long **)(param_1 + 0x128) + (long)local_c * 8 + 8) == local_30)) {
        return local_c;
      }
    }
    local_34 = *(int *)(*(long *)(param_1 + 0x128) + 8);
    FUN_10091e8e0(*(undefined8 *)(param_1 + 0x128),pxVar1);
    FUN_10091e8e0(*(undefined8 *)(param_1 + 0x128),local_30);
  }
  return local_34;
}

