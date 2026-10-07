
xmlNodeSetPtr FUN_1001a90b8(xmlNodeSetPtr param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  xmlNodePtr *ppxVar3;
  xmlNodePtr pxVar4;
  xmlNodeSetPtr local_40;
  xmlNodeSetPtr local_30;
  int local_1c;
  
  local_40 = param_1;
  if (param_2 != (int *)0x0) {
    local_30 = param_1;
    if (param_1 == (xmlNodeSetPtr)0x0) {
      local_30 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
    }
    for (local_1c = 0; local_1c < *param_2; local_1c = local_1c + 1) {
      if (local_30->nodeMax == 0) {
        ppxVar3 = (xmlNodePtr *)(*(code *)_xmlMalloc)(0x50);
        local_30->nodeTab = ppxVar3;
        if (local_30->nodeTab == (xmlNodePtr *)0x0) {
          FUN_1001a4e9b(0,"merging nodeset\n");
          return (xmlNodeSetPtr)0x0;
        }
        _memset(local_30->nodeTab,0,0x50);
        local_30->nodeMax = 10;
      }
      else if (local_30->nodeNr == local_30->nodeMax) {
        local_30->nodeMax = local_30->nodeMax * 2;
        ppxVar3 = (xmlNodePtr *)
                  (*(code *)_xmlRealloc)(local_30->nodeTab,(long)local_30->nodeMax * 8);
        if (ppxVar3 == (xmlNodePtr *)0x0) {
          FUN_1001a4e9b(0,"merging nodeset\n");
          return (xmlNodeSetPtr)0x0;
        }
        local_30->nodeTab = ppxVar3;
      }
      if (*(int *)(*(long *)(*(long *)(param_2 + 2) + (long)local_1c * 8) + 8) == 0x12) {
        puVar2 = *(undefined8 **)(*(long *)(param_2 + 2) + (long)local_1c * 8);
        pxVar4 = (xmlNodePtr)FUN_1001a83bb(*puVar2,puVar2);
        iVar1 = local_30->nodeNr;
        local_30->nodeTab[iVar1] = pxVar4;
        local_30->nodeNr = iVar1 + 1;
      }
      else {
        iVar1 = local_30->nodeNr;
        local_30->nodeTab[iVar1] = *(xmlNodePtr *)(*(long *)(param_2 + 2) + (long)local_1c * 8);
        local_30->nodeNr = iVar1 + 1;
      }
    }
    local_40 = local_30;
  }
  return local_40;
}

