
xmlNodeSetPtr _xmlXPathTrailing(xmlNodeSetPtr param_1,int *param_2)

{
  xmlNodeSetPtr local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  if (((param_2 != (int *)0x0) && (*param_2 != 0)) && (*(long *)(param_2 + 2) != 0)) {
    if (((param_1 == (xmlNodeSetPtr)0x0) || (param_1->nodeNr == 0)) ||
       (param_1->nodeTab == (xmlNodePtr *)0x0)) {
      local_28 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
    }
    else {
      _xmlXPathNodeSetSort(param_1);
      _xmlXPathNodeSetSort(param_2);
      if ((param_2 == (int *)0x0) || (*param_2 < 1)) {
        local_20 = 0;
      }
      else {
        local_20 = **(undefined8 **)(param_2 + 2);
      }
      local_28 = (xmlNodeSetPtr)_xmlXPathNodeTrailingSorted(param_1,local_20);
    }
  }
  return local_28;
}

