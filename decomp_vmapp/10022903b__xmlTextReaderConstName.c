
xmlChar * _xmlTextReaderConstName(long param_1)

{
  xmlChar *local_30;
  long local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_18 = *(long *)(param_1 + 0x70);
    }
    else {
      local_18 = *(long *)(param_1 + 0x78);
    }
    switch(*(undefined4 *)(local_18 + 8)) {
    default:
      local_30 = (xmlChar *)0x0;
      break;
    case 1:
    case 2:
      if ((*(long *)(local_18 + 0x48) == 0) || (*(long *)(*(long *)(local_18 + 0x48) + 0x18) == 0))
      {
        local_30 = *(xmlChar **)(local_18 + 0x10);
      }
      else {
        local_30 = _xmlDictQLookup(*(xmlDictPtr *)(param_1 + 0xa0),
                                   *(xmlChar **)(*(long *)(local_18 + 0x48) + 0x18),
                                   *(xmlChar **)(local_18 + 0x10));
      }
      break;
    case 3:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"#text",-1);
      break;
    case 4:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"#cdata-section",-1);
      break;
    case 5:
    case 6:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),*(xmlChar **)(local_18 + 0x10),-1);
      break;
    case 7:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),*(xmlChar **)(local_18 + 0x10),-1);
      break;
    case 8:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"#comment",-1);
      break;
    case 9:
    case 0xd:
    case 0x15:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"#document",-1);
      break;
    case 10:
    case 0xe:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),*(xmlChar **)(local_18 + 0x10),-1);
      break;
    case 0xb:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"#document-fragment",-1);
      break;
    case 0xc:
      local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),*(xmlChar **)(local_18 + 0x10),-1);
      break;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
      local_30 = (xmlChar *)0x0;
      break;
    case 0x12:
      if (*(long *)(local_18 + 0x18) == 0) {
        local_30 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"xmlns",-1);
      }
      else {
        local_30 = _xmlDictQLookup(*(xmlDictPtr *)(param_1 + 0xa0),(xmlChar *)"xmlns",
                                   *(xmlChar **)(local_18 + 0x18));
      }
    }
  }
  return local_30;
}

