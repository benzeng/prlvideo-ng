
void FUN_10014da9f(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  xmlChar *local_28;
  byte *local_20;
  
  local_28 = (xmlChar *)0x0;
  for (local_20 = param_2;
      (*local_20 == 0x20 || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))));
      local_20 = local_20 + 1) {
  }
  iVar3 = _xmlStrncmp(local_20,(xmlChar *)"catalog",7);
  if (iVar3 == 0) {
    for (local_20 = local_20 + 7;
        ((*local_20 == 0x20 || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd));
        local_20 = local_20 + 1) {
    }
    if (*local_20 != 0x3d) {
      return;
    }
    do {
      do {
        pbVar1 = local_20;
        local_20 = pbVar1 + 1;
      } while (*local_20 == 0x20);
    } while (((8 < *local_20) && (*local_20 < 0xb)) || (*local_20 == 0xd));
    bVar2 = *local_20;
    if ((bVar2 == 0x27) || (bVar2 == 0x22)) {
      pbVar1 = pbVar1 + 2;
      for (local_20 = pbVar1; (*local_20 != 0 && (*local_20 != bVar2)); local_20 = local_20 + 1) {
      }
      if (*local_20 != 0) {
        local_28 = _xmlStrndup(pbVar1,(int)local_20 - (int)pbVar1);
        do {
          do {
            local_20 = local_20 + 1;
          } while (*local_20 == 0x20);
        } while (((8 < *local_20) && (*local_20 < 0xb)) || (*local_20 == 0xd));
        if (*local_20 == 0) {
          if (local_28 == (xmlChar *)0x0) {
            return;
          }
          pvVar4 = _xmlCatalogAddLocal(*(void **)(param_1 + 0x1b8),local_28);
          *(void **)(param_1 + 0x1b8) = pvVar4;
          (*(code *)_xmlFree)(local_28);
          return;
        }
      }
    }
  }
  FUN_100144304(param_1,0x5d,"Catalog PI syntax error: %s\n",param_2,0);
  if (local_28 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_28);
  }
  return;
}

