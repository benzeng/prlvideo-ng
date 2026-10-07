
xmlChar * _xmlTextReaderGetAttributeNo(long param_1,int param_2)

{
  xmlChar *local_40;
  int local_1c;
  long local_18;
  undefined8 *local_10;
  
  if (param_1 == 0) {
    local_40 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_40 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
      local_10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
      local_1c = 0;
      for (; (local_1c < param_2 && (local_10 != (undefined8 *)0x0));
          local_10 = (undefined8 *)*local_10) {
        local_1c = local_1c + 1;
      }
      if (local_10 == (undefined8 *)0x0) {
        local_18 = *(long *)(*(long *)(param_1 + 0x70) + 0x58);
        if (local_18 == 0) {
          local_40 = (xmlChar *)0x0;
        }
        else {
          for (; local_1c < param_2; local_1c = local_1c + 1) {
            local_18 = *(long *)(local_18 + 0x30);
            if (local_18 == 0) {
              return (xmlChar *)0x0;
            }
          }
          local_40 = _xmlNodeListGetString
                               (*(xmlDocPtr *)(*(long *)(param_1 + 0x70) + 0x40),
                                *(xmlNodePtr *)(local_18 + 0x18),1);
          if (local_40 == (xmlChar *)0x0) {
            local_40 = _xmlStrdup((xmlChar *)"");
          }
        }
      }
      else {
        local_40 = _xmlStrdup((xmlChar *)local_10[2]);
      }
    }
    else {
      local_40 = (xmlChar *)0x0;
    }
  }
  else {
    local_40 = (xmlChar *)0x0;
  }
  return local_40;
}

