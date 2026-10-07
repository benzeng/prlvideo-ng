
int _xmlXPathRegisterFuncNS(long param_1,xmlChar *param_2,xmlChar *param_3,void *param_4)

{
  xmlHashTablePtr pxVar1;
  undefined4 local_2c;
  
  if (param_1 == 0) {
    local_2c = -1;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_2c = -1;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
      pxVar1 = _xmlHashCreate(0);
      *(xmlHashTablePtr *)(param_1 + 0x38) = pxVar1;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      local_2c = -1;
    }
    else if (param_4 == (void *)0x0) {
      local_2c = _xmlHashRemoveEntry2
                           (*(xmlHashTablePtr *)(param_1 + 0x38),param_2,param_3,
                            (xmlHashDeallocator)0x0);
    }
    else {
      local_2c = _xmlHashAddEntry2(*(xmlHashTablePtr *)(param_1 + 0x38),param_2,param_3,param_4);
    }
  }
  return local_2c;
}

