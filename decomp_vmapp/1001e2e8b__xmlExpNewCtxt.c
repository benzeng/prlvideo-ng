
xmlExpCtxtPtr _xmlExpNewCtxt(int maxNodes,xmlDictPtr dict)

{
  xmlDictPtr pxVar1;
  long lVar2;
  xmlExpCtxtPtr pxVar3;
  undefined1 *puVar4;
  xmlExpCtxtPtr local_30;
  
  local_30 = (xmlExpCtxtPtr)(*(code *)_xmlMalloc)(0x38);
  if (local_30 == (xmlExpCtxtPtr)0x0) {
    local_30 = (xmlExpCtxtPtr)0x0;
  }
  else {
    pxVar3 = local_30;
    for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(long *)pxVar3 = 0;
      pxVar3 = pxVar3 + 8;
    }
    *(undefined4 *)(local_30 + 0x10) = 0x100;
    *(undefined4 *)(local_30 + 0x14) = 0;
    lVar2 = (*(code *)_xmlMalloc)(0x800);
    *(long *)(local_30 + 8) = lVar2;
    if (*(long *)(local_30 + 8) == 0) {
      (*(code *)_xmlFree)(local_30);
      local_30 = (xmlExpCtxtPtr)0x0;
    }
    else {
      puVar4 = *(undefined1 **)(local_30 + 8);
      for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (dict == (xmlDictPtr)0x0) {
        pxVar1 = _xmlDictCreate();
        *(xmlDictPtr *)local_30 = pxVar1;
        if (*(long *)local_30 == 0) {
          (*(code *)_xmlFree)(*(long *)(local_30 + 8));
          (*(code *)_xmlFree)(local_30);
          local_30 = (xmlExpCtxtPtr)0x0;
        }
      }
      else {
        *(xmlDictPtr *)local_30 = dict;
        _xmlDictReference(*(xmlDictPtr *)local_30);
      }
    }
  }
  return local_30;
}

