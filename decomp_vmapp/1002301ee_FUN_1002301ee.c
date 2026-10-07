
xmlChar * FUN_1002301ee(uint param_1,char *param_2,char *param_3)

{
  xmlChar *pxVar1;
  char *local_410;
  char *local_408;
  xmlChar local_3f8 [999];
  undefined1 local_11;
  
  local_408 = param_2;
  if (param_2 == (char *)0x0) {
    local_408 = "";
  }
  local_410 = param_3;
  if (param_3 == (char *)0x0) {
    local_410 = "";
  }
  local_3f8[0] = '\0';
  switch(param_1) {
  case 0:
    return (xmlChar *)0x0;
  case 1:
    pxVar1 = _xmlCharStrdup("out of memory\n");
    return pxVar1;
  case 2:
    _snprintf((char *)local_3f8,1000,"failed to validate type %s\n",local_408);
    break;
  case 3:
    _snprintf((char *)local_3f8,1000,"Type %s doesn\'t allow value \'%s\'\n",local_408,local_410);
    break;
  case 4:
    _snprintf((char *)local_3f8,1000,"ID %s redefined\n",local_408);
    break;
  case 5:
    _snprintf((char *)local_3f8,1000,"failed to compare type %s\n",local_408);
    break;
  case 6:
    pxVar1 = _xmlCharStrdup("Internal error: no state\n");
    return pxVar1;
  case 7:
    pxVar1 = _xmlCharStrdup("Internal error: no define\n");
    return pxVar1;
  case 8:
    _snprintf((char *)local_3f8,1000,"Extra data in list: %s\n",local_408);
    break;
  default:
    pxVar1 = _xmlCharStrdup("Unknown error !\n");
    return pxVar1;
  case 10:
    pxVar1 = _xmlCharStrdup("Internal: interleave block has no data\n");
    return pxVar1;
  case 0xb:
    pxVar1 = _xmlCharStrdup("Invalid sequence in interleave\n");
    return pxVar1;
  case 0xc:
    _snprintf((char *)local_3f8,1000,"Extra element %s in interleave\n",local_408);
    break;
  case 0xd:
    _snprintf((char *)local_3f8,1000,"Expecting element %s, got %s\n",local_408,local_410);
    break;
  case 0xf:
    _snprintf((char *)local_3f8,1000,"Expecting a namespace for element %s\n",local_408);
    break;
  case 0x11:
    _snprintf((char *)local_3f8,1000,"Element %s has wrong namespace: expecting %s\n",local_408,
              local_410);
    break;
  case 0x13:
    _snprintf((char *)local_3f8,1000,"Expecting no namespace for element %s\n",local_408);
    break;
  case 0x15:
    _snprintf((char *)local_3f8,1000,"Expecting element %s to be empty\n",local_408);
    break;
  case 0x16:
    _snprintf((char *)local_3f8,1000,"Expecting an element %s, got nothing\n",local_408);
    break;
  case 0x17:
    pxVar1 = _xmlCharStrdup("Expecting an element got text\n");
    return pxVar1;
  case 0x18:
    _snprintf((char *)local_3f8,1000,"Element %s failed to validate attributes\n",local_408);
    break;
  case 0x19:
    _snprintf((char *)local_3f8,1000,"Element %s failed to validate content\n",local_408);
    break;
  case 0x1a:
    _snprintf((char *)local_3f8,1000,"Element %s has extra content: %s\n",local_408,local_410);
    break;
  case 0x1b:
    _snprintf((char *)local_3f8,1000,"Invalid attribute %s for element %s\n",local_408,local_410);
    break;
  case 0x1c:
    _snprintf((char *)local_3f8,1000,"Datatype element %s has child elements\n",local_408);
    break;
  case 0x1d:
    _snprintf((char *)local_3f8,1000,"Value element %s has child elements\n",local_408);
    break;
  case 0x1e:
    _snprintf((char *)local_3f8,1000,"List element %s has child elements\n",local_408);
    break;
  case 0x1f:
    _snprintf((char *)local_3f8,1000,"Error validating datatype %s\n",local_408);
    break;
  case 0x20:
    _snprintf((char *)local_3f8,1000,"Error validating value %s\n",local_408);
    break;
  case 0x21:
    pxVar1 = _xmlCharStrdup("Error validating list\n");
    return pxVar1;
  case 0x22:
    pxVar1 = _xmlCharStrdup("No top grammar defined\n");
    return pxVar1;
  case 0x23:
    pxVar1 = _xmlCharStrdup("Extra data in the document\n");
    return pxVar1;
  case 0x24:
    _snprintf((char *)local_3f8,1000,"Datatype element %s contains no data\n",local_408);
    break;
  case 0x25:
    _snprintf((char *)local_3f8,1000,"Internal error: %s\n",local_408);
    break;
  case 0x26:
    _snprintf((char *)local_3f8,1000,"Did not expect element %s there\n",local_408);
    break;
  case 0x27:
    _snprintf((char *)local_3f8,1000,"Did not expect text in element %s content\n",local_408);
  }
  if (local_3f8[0] == '\0') {
    _snprintf((char *)local_3f8,1000,"Unknown error code %d\n",(ulong)param_1);
  }
  local_11 = 0;
  pxVar1 = _xmlStrdup(local_3f8);
  return pxVar1;
}

