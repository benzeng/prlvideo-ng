
int _xmlACatalogRemove(xmlCatalogPtr catal,xmlChar *value)

{
  int local_2c;
  int local_c;
  
  if ((catal == (xmlCatalogPtr)0x0) || (value == (xmlChar *)0x0)) {
    local_2c = -1;
  }
  else {
    if (*(int *)catal == 1) {
      local_c = FUN_10090527a(*(undefined8 *)(catal + 0x70),value);
    }
    else {
      local_c = _xmlHashRemoveEntry(*(xmlHashTablePtr *)(catal + 0x60),value,FUN_100902a3c);
      if (local_c == 0) {
        local_c = 1;
      }
    }
    local_2c = local_c;
  }
  return local_2c;
}

