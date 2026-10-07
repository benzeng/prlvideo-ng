
xmlNodeSetPtr _xmlXPathNodeSetMerge(xmlNodeSetPtr param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  xmlNodePtr *ppxVar6;
  xmlNodePtr pxVar7;
  xmlNodeSetPtr local_50;
  xmlNodeSetPtr local_40;
  int local_38;
  int local_34;
  
  local_50 = param_1;
  if (param_2 != (int *)0x0) {
    local_40 = param_1;
    if (param_1 == (xmlNodeSetPtr)0x0) {
      local_40 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
    }
    iVar1 = local_40->nodeNr;
    for (local_38 = 0; local_38 < *param_2; local_38 = local_38 + 1) {
      bVar4 = false;
      for (local_34 = 0; local_34 < iVar1; local_34 = local_34 + 1) {
        if (local_40->nodeTab[local_34] ==
            *(xmlNodePtr *)(*(long *)(param_2 + 2) + (long)local_38 * 8)) {
          bVar4 = true;
          break;
        }
        if ((local_40->nodeTab[local_34]->type == XML_NAMESPACE_DECL) &&
           (*(int *)(*(long *)(*(long *)(param_2 + 2) + (long)local_38 * 8) + 8) == 0x12)) {
          plVar2 = *(long **)(*(long *)(param_2 + 2) + (long)local_38 * 8);
          if ((local_40->nodeTab[local_34]->_private == (void *)*plVar2) &&
             (iVar5 = _xmlStrEqual((xmlChar *)local_40->nodeTab[local_34]->children,
                                   (xmlChar *)plVar2[3]), iVar5 != 0)) {
            bVar4 = true;
            break;
          }
        }
      }
      if (!bVar4) {
        if (local_40->nodeMax == 0) {
          ppxVar6 = (xmlNodePtr *)(*(code *)_xmlMalloc)(0x50);
          local_40->nodeTab = ppxVar6;
          if (local_40->nodeTab == (xmlNodePtr *)0x0) {
            FUN_1001a4e9b(0,"merging nodeset\n");
            return (xmlNodeSetPtr)0x0;
          }
          _memset(local_40->nodeTab,0,0x50);
          local_40->nodeMax = 10;
        }
        else if (local_40->nodeNr == local_40->nodeMax) {
          local_40->nodeMax = local_40->nodeMax * 2;
          ppxVar6 = (xmlNodePtr *)
                    (*(code *)_xmlRealloc)(local_40->nodeTab,(long)local_40->nodeMax * 8);
          if (ppxVar6 == (xmlNodePtr *)0x0) {
            FUN_1001a4e9b(0,"merging nodeset\n");
            return (xmlNodeSetPtr)0x0;
          }
          local_40->nodeTab = ppxVar6;
        }
        if (*(int *)(*(long *)(*(long *)(param_2 + 2) + (long)local_38 * 8) + 8) == 0x12) {
          puVar3 = *(undefined8 **)(*(long *)(param_2 + 2) + (long)local_38 * 8);
          pxVar7 = (xmlNodePtr)FUN_1001a83bb(*puVar3,puVar3);
          iVar5 = local_40->nodeNr;
          local_40->nodeTab[iVar5] = pxVar7;
          local_40->nodeNr = iVar5 + 1;
        }
        else {
          iVar5 = local_40->nodeNr;
          local_40->nodeTab[iVar5] = *(xmlNodePtr *)(*(long *)(param_2 + 2) + (long)local_38 * 8);
          local_40->nodeNr = iVar5 + 1;
        }
      }
    }
    local_50 = local_40;
  }
  return local_50;
}

