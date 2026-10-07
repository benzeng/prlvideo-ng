
xmlChar * _xmlTextReaderLocatorBaseURI(long param_1)

{
  undefined8 local_38;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
      local_10 = *(long *)(param_1 + 0x38);
      if ((*(long *)(local_10 + 8) == 0) && (1 < *(int *)(param_1 + 0x40))) {
        local_10 = *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8 + -0x10)
        ;
      }
      if (local_10 == 0) {
        local_18 = (xmlChar *)0x0;
      }
      else {
        local_18 = _xmlStrdup(*(xmlChar **)(local_10 + 8));
      }
    }
    else {
      local_18 = _xmlNodeGetBase((xmlDocPtr)0x0,*(xmlNodePtr *)(param_1 + 0x50));
    }
    local_38 = local_18;
  }
  return local_38;
}

