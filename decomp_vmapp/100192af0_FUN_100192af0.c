
xmlChar * FUN_100192af0(long param_1)

{
  xmlChar *pxVar1;
  int len;
  byte *local_20;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
  }
  local_20 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  if ((((0x60 < *local_20) && (*local_20 < 0x7b)) || ((0x40 < *local_20 && (*local_20 < 0x5b)))) ||
     ((*local_20 == 0x5f || (*local_20 == 0x3a)))) {
LAB_100192bb5:
    do {
      local_20 = local_20 + 1;
      if (0x60 < *local_20) {
        if (*local_20 < 0x7b) goto LAB_100192bb5;
      }
    } while ((((0x40 < *local_20) && (*local_20 < 0x5b)) ||
             ((0x2f < *local_20 && (*local_20 < 0x3a)))) ||
            ((((*local_20 == 0x5f || (*local_20 == 0x2d)) || (*local_20 == 0x3a)) ||
             (*local_20 == 0x2e))));
    if ((*local_20 != 0) && (-1 < (char)*local_20)) {
      len = (int)local_20 - (int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      pxVar1 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),
                              *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20),len);
      *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_20;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + (long)len;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + len;
      return pxVar1;
    }
  }
  pxVar1 = (xmlChar *)FUN_100192ce3(param_1);
  return pxVar1;
}

