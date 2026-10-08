
xmlChar * _xmlTextReaderConstXmlVersion(long param_1)

{
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 == 0) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        local_10 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      }
    }
    else {
      local_10 = *(long *)(param_1 + 8);
    }
    if (local_10 == 0) {
      local_28 = (xmlChar *)0x0;
    }
    else if (*(long *)(local_10 + 0x68) == 0) {
      local_28 = (xmlChar *)0x0;
    }
    else {
      local_28 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),*(xmlChar **)(local_10 + 0x68),-1);
    }
  }
  return local_28;
}

