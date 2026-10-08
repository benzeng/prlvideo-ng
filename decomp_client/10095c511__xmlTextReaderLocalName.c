
xmlChar * _xmlTextReaderLocalName(long param_1)

{
  xmlChar *local_28;
  long local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_18 = *(long *)(param_1 + 0x70);
    }
    else {
      local_18 = *(long *)(param_1 + 0x78);
    }
    if (*(int *)(local_18 + 8) == 0x12) {
      if (*(long *)(local_18 + 0x18) == 0) {
        local_28 = _xmlStrdup((xmlChar *)"xmlns");
      }
      else {
        local_28 = _xmlStrdup(*(xmlChar **)(local_18 + 0x18));
      }
    }
    else if ((*(int *)(local_18 + 8) == 1) || (*(int *)(local_18 + 8) == 2)) {
      local_28 = _xmlStrdup(*(xmlChar **)(local_18 + 0x10));
    }
    else {
      local_28 = (xmlChar *)_xmlTextReaderName(param_1);
    }
  }
  return local_28;
}

