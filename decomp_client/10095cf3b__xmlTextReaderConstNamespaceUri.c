
xmlChar * _xmlTextReaderConstNamespaceUri(long param_1)

{
  xmlChar *local_28;
  long local_10;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    if (*(int *)(local_10 + 8) == 0x12) {
      local_28 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),
                                (xmlChar *)"http://www.w3.org/2000/xmlns/",-1);
    }
    else if ((*(int *)(local_10 + 8) == 1) || (*(int *)(local_10 + 8) == 2)) {
      if (*(long *)(local_10 + 0x48) == 0) {
        local_28 = (xmlChar *)0x0;
      }
      else {
        local_28 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),
                                  *(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),-1);
      }
    }
    else {
      local_28 = (xmlChar *)0x0;
    }
  }
  return local_28;
}

