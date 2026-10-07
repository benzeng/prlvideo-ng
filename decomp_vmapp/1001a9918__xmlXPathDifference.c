
xmlNodeSetPtr _xmlXPathDifference(xmlNodeSetPtr param_1,int *param_2)

{
  int iVar1;
  xmlNodeSetPtr local_50;
  int local_44;
  xmlNodePtr local_40;
  int local_18;
  
  local_50 = param_1;
  if (((((param_2 != (int *)0x0) && (*param_2 != 0)) && (*(long *)(param_2 + 2) != 0)) &&
      ((local_50 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0), param_1 != (xmlNodeSetPtr)0x0 &&
       (param_1->nodeNr != 0)))) && (param_1->nodeTab != (xmlNodePtr *)0x0)) {
    if (param_1 == (xmlNodeSetPtr)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = param_1->nodeNr;
    }
    for (local_18 = 0; local_18 < local_44; local_18 = local_18 + 1) {
      if (((param_1 == (xmlNodeSetPtr)0x0) || (local_18 < 0)) || (param_1->nodeNr <= local_18)) {
        local_40 = (xmlNodePtr)0x0;
      }
      else {
        local_40 = param_1->nodeTab[local_18];
      }
      iVar1 = _xmlXPathNodeSetContains(param_2,local_40);
      if (iVar1 == 0) {
        _xmlXPathNodeSetAddUnique(local_50,local_40);
      }
    }
  }
  return local_50;
}

