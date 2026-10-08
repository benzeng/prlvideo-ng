
int _xmlXPathRegisterNs(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  undefined *f;
  xmlHashTablePtr pxVar1;
  xmlChar *userdata;
  undefined4 local_34;
  
  if (param_1 == 0) {
    local_34 = -1;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_34 = -1;
  }
  else {
    if (*(long *)(param_1 + 0x88) == 0) {
      pxVar1 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(param_1 + 0x88) = pxVar1;
    }
    f = _xmlFree;
    if (*(long *)(param_1 + 0x88) == 0) {
      local_34 = -1;
    }
    else if (param_3 == (xmlChar *)0x0) {
      local_34 = _xmlHashRemoveEntry(*(xmlHashTablePtr *)(param_1 + 0x88),param_2,
                                     (xmlHashDeallocator)_xmlFree);
    }
    else {
      userdata = _xmlStrdup(param_3);
      local_34 = _xmlHashUpdateEntry(*(xmlHashTablePtr *)(param_1 + 0x88),param_2,userdata,
                                     (xmlHashDeallocator)f);
    }
  }
  return local_34;
}

