
xmlChar * _xmlTextReaderPrefix(long param_1)

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
        local_28 = (xmlChar *)0x0;
      }
      else {
        local_28 = _xmlStrdup((xmlChar *)"xmlns");
      }
    }
    else if ((*(int *)(local_18 + 8) == 1) || (*(int *)(local_18 + 8) == 2)) {
      if ((*(long *)(local_18 + 0x48) == 0) || (*(long *)(*(long *)(local_18 + 0x48) + 0x18) == 0))
      {
        local_28 = (xmlChar *)0x0;
      }
      else {
        local_28 = _xmlStrdup(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x18));
      }
    }
    else {
      local_28 = (xmlChar *)0x0;
    }
  }
  return local_28;
}

