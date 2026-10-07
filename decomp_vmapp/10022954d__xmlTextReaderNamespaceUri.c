
xmlChar * _xmlTextReaderNamespaceUri(long param_1)

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
      local_28 = _xmlStrdup((xmlChar *)"http://www.w3.org/2000/xmlns/");
    }
    else if ((*(int *)(local_10 + 8) == 1) || (*(int *)(local_10 + 8) == 2)) {
      if (*(long *)(local_10 + 0x48) == 0) {
        local_28 = (xmlChar *)0x0;
      }
      else {
        local_28 = _xmlStrdup(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10));
      }
    }
    else {
      local_28 = (xmlChar *)0x0;
    }
  }
  return local_28;
}

