
xmlChar * _xmlTextReaderName(long param_1)

{
  xmlChar *pxVar1;
  xmlChar *local_40;
  long local_20;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_20 = *(long *)(param_1 + 0x70);
    }
    else {
      local_20 = *(long *)(param_1 + 0x78);
    }
    switch(*(undefined4 *)(local_20 + 8)) {
    default:
      local_40 = (xmlChar *)0x0;
      break;
    case 1:
    case 2:
      if ((*(long *)(local_20 + 0x48) == 0) || (*(long *)(*(long *)(local_20 + 0x48) + 0x18) == 0))
      {
        local_40 = _xmlStrdup(*(xmlChar **)(local_20 + 0x10));
      }
      else {
        pxVar1 = _xmlStrdup(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x18));
        pxVar1 = _xmlStrcat(pxVar1,(xmlChar *)":");
        local_40 = _xmlStrcat(pxVar1,*(xmlChar **)(local_20 + 0x10));
      }
      break;
    case 3:
      local_40 = _xmlStrdup((xmlChar *)"#text");
      break;
    case 4:
      local_40 = _xmlStrdup((xmlChar *)"#cdata-section");
      break;
    case 5:
    case 6:
      local_40 = _xmlStrdup(*(xmlChar **)(local_20 + 0x10));
      break;
    case 7:
      local_40 = _xmlStrdup(*(xmlChar **)(local_20 + 0x10));
      break;
    case 8:
      local_40 = _xmlStrdup((xmlChar *)"#comment");
      break;
    case 9:
    case 0xd:
    case 0x15:
      local_40 = _xmlStrdup((xmlChar *)"#document");
      break;
    case 10:
    case 0xe:
      local_40 = _xmlStrdup(*(xmlChar **)(local_20 + 0x10));
      break;
    case 0xb:
      local_40 = _xmlStrdup((xmlChar *)"#document-fragment");
      break;
    case 0xc:
      local_40 = _xmlStrdup(*(xmlChar **)(local_20 + 0x10));
      break;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
      local_40 = (xmlChar *)0x0;
      break;
    case 0x12:
      local_40 = _xmlStrdup((xmlChar *)"xmlns");
      if (*(long *)(local_20 + 0x18) != 0) {
        pxVar1 = _xmlStrcat(local_40,(xmlChar *)":");
        local_40 = _xmlStrcat(pxVar1,*(xmlChar **)(local_20 + 0x18));
      }
    }
  }
  return local_40;
}

