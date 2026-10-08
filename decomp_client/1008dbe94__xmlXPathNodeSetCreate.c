
xmlNodeSetPtr _xmlXPathNodeSetCreate(xmlNodePtr val)

{
  int iVar1;
  xmlNodePtr *ppxVar2;
  xmlNodePtr pxVar3;
  xmlNodeSetPtr local_28;
  
  local_28 = (xmlNodeSetPtr)(*(code *)_xmlMalloc)(0x10);
  if (local_28 == (xmlNodeSetPtr)0x0) {
    FUN_1008d87c3(0,"creating nodeset\n");
    local_28 = (xmlNodeSetPtr)0x0;
  }
  else {
    local_28->nodeNr = 0;
    local_28->nodeMax = 0;
    local_28->nodeTab = (xmlNodePtr *)0x0;
    if (val != (xmlNodePtr)0x0) {
      ppxVar2 = (xmlNodePtr *)(*(code *)_xmlMalloc)(0x50);
      local_28->nodeTab = ppxVar2;
      if (local_28->nodeTab == (xmlNodePtr *)0x0) {
        FUN_1008d87c3(0,"creating nodeset\n");
        (*(code *)_xmlFree)(local_28);
        local_28 = (xmlNodeSetPtr)0x0;
      }
      else {
        _memset(local_28->nodeTab,0,0x50);
        local_28->nodeMax = 10;
        if (val->type == XML_NAMESPACE_DECL) {
          pxVar3 = (xmlNodePtr)FUN_1008dbce3(val->_private,val);
          iVar1 = local_28->nodeNr;
          local_28->nodeTab[iVar1] = pxVar3;
          local_28->nodeNr = iVar1 + 1;
        }
        else {
          iVar1 = local_28->nodeNr;
          local_28->nodeTab[iVar1] = val;
          local_28->nodeNr = iVar1 + 1;
        }
      }
    }
  }
  return local_28;
}

