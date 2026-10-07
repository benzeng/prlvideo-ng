
xmlXPathObjectPtr _xmlXPathVariableLookupNS(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  xmlXPathObjectPtr val;
  xmlXPathObjectPtr local_38;
  
  if (param_1 == 0) {
    local_38 = (xmlXPathObjectPtr)0x0;
  }
  else if ((*(long *)(param_1 + 0x90) == 0) ||
          (local_38 = (xmlXPathObjectPtr)
                      (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x98),param_2,param_3)
          , local_38 == (xmlXPathObjectPtr)0x0)) {
    if (*(long *)(param_1 + 0x18) == 0) {
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    else if (param_2 == (xmlChar *)0x0) {
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    else {
      val = _xmlHashLookup2(*(xmlHashTablePtr *)(param_1 + 0x18),param_2,param_3);
      local_38 = _xmlXPathObjectCopy(val);
    }
  }
  return local_38;
}

