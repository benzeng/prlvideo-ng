
xmlNodeSetPtr _xmlXPathNodeTrailingSorted(xmlNodeSetPtr param_1,xmlNodePtr param_2)

{
  int iVar1;
  xmlNodeSetPtr local_50;
  int local_44;
  xmlNodePtr local_40;
  int local_20;
  
  local_50 = param_1;
  if ((((param_2 != (xmlNodePtr)0x0) &&
       (local_50 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0), param_1 != (xmlNodeSetPtr)0x0)) &&
      (param_1->nodeNr != 0)) &&
     ((param_1->nodeTab != (xmlNodePtr *)0x0 &&
      (iVar1 = _xmlXPathNodeSetContains(param_1,param_2), iVar1 != 0)))) {
    if (param_1 == (xmlNodeSetPtr)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = param_1->nodeNr;
    }
    for (local_20 = local_44; 0 < local_20; local_20 = local_20 + -1) {
      if (((param_1 == (xmlNodeSetPtr)0x0) || (local_20 < 0)) || (param_1->nodeNr <= local_20)) {
        local_40 = (xmlNodePtr)0x0;
      }
      else {
        local_40 = param_1->nodeTab[local_20];
      }
      if (local_40 == param_2) {
        return local_50;
      }
      _xmlXPathNodeSetAddUnique(local_50,local_40);
    }
  }
  return local_50;
}

