
void * _xmlXPathFunctionLookupNS(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  void *local_38;
  
  if (param_1 == 0) {
    local_38 = (void *)0x0;
  }
  else if (param_2 == (xmlChar *)0x0) {
    local_38 = (void *)0x0;
  }
  else if ((*(long *)(param_1 + 0xb8) == 0) ||
          (local_38 = (void *)(**(code **)(param_1 + 0xb8))
                                        (*(undefined8 *)(param_1 + 0xc0),param_2,param_3),
          local_38 == (void *)0x0)) {
    if (*(long *)(param_1 + 0x38) == 0) {
      local_38 = (void *)0x0;
    }
    else {
      local_38 = _xmlHashLookup2(*(xmlHashTablePtr *)(param_1 + 0x38),param_2,param_3);
    }
  }
  return local_38;
}

