
xmlNsPtr _xmlCopyNamespaceList(xmlNsPtr cur)

{
  xmlNsPtr pxVar1;
  xmlNsPtr pxVar2;
  xmlNsPtr local_30;
  xmlNsPtr local_20;
  xmlNsPtr local_18;
  
  local_20 = (xmlNsPtr)0x0;
  local_18 = (xmlNsPtr)0x0;
  for (local_30 = cur; local_30 != (xmlNsPtr)0x0; local_30 = local_30->next) {
    pxVar2 = _xmlCopyNamespace(local_30);
    pxVar1 = pxVar2;
    if (local_18 != (xmlNsPtr)0x0) {
      local_18->next = pxVar2;
      pxVar1 = local_20;
    }
    local_20 = pxVar1;
    local_18 = pxVar2;
  }
  return local_20;
}

