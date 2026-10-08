
char * _xmlXPathNsLookup(long param_1,xmlChar *param_2)

{
  int iVar1;
  char *local_30;
  int local_c;
  
  if (param_1 == 0) {
    local_30 = (char *)0x0;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_30 = (char *)0x0;
  }
  else {
    iVar1 = _xmlStrEqual(param_2,(xmlChar *)"xml");
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        for (local_c = 0; local_c < *(int *)(param_1 + 0x58); local_c = local_c + 1) {
          if ((*(long *)(*(long *)(param_1 + 0x50) + (long)local_c * 8) != 0) &&
             (iVar1 = _xmlStrEqual(*(xmlChar **)
                                    (*(long *)(*(long *)(param_1 + 0x50) + (long)local_c * 8) + 0x18
                                    ),param_2), iVar1 != 0)) {
            return *(char **)(*(long *)(*(long *)(param_1 + 0x50) + (long)local_c * 8) + 0x10);
          }
        }
      }
      local_30 = _xmlHashLookup(*(xmlHashTablePtr *)(param_1 + 0x88),param_2);
    }
    else {
      local_30 = "http://www.w3.org/XML/1998/namespace";
    }
  }
  return local_30;
}

