
xmlChar * FUN_1001571ad(long param_1)

{
  xmlChar *pxVar1;
  int len;
  byte *local_20;
  
  local_20 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  if ((((0x60 < *local_20) && (*local_20 < 0x7b)) || ((0x40 < *local_20 && (*local_20 < 0x5b)))) ||
     (*local_20 == 0x5f)) {
LAB_10015721b:
    do {
      local_20 = local_20 + 1;
      if (0x60 < *local_20) {
        if (*local_20 < 0x7b) goto LAB_10015721b;
      }
    } while (((0x40 < *local_20) && (*local_20 < 0x5b)) ||
            (((0x2f < *local_20 && (*local_20 < 0x3a)) ||
             (((*local_20 == 0x5f || (*local_20 == 0x2d)) || (*local_20 == 0x2e))))));
    if ((*local_20 != 0) && (-1 < (char)*local_20)) {
      len = (int)local_20 - (int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      pxVar1 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),
                              *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20),len);
      *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_20;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + (long)len;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + len;
      if (pxVar1 != (xmlChar *)0x0) {
        return pxVar1;
      }
      _xmlErrMemory(param_1,0);
      return (xmlChar *)0x0;
    }
  }
  pxVar1 = (xmlChar *)FUN_100156c9c(param_1);
  return pxVar1;
}

