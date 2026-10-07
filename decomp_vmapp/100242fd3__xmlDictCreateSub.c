
xmlDictPtr _xmlDictCreateSub(xmlDictPtr sub)

{
  xmlDictPtr pxVar1;
  
  pxVar1 = _xmlDictCreate();
  if ((pxVar1 != (xmlDictPtr)0x0) && (sub != (xmlDictPtr)0x0)) {
    *(xmlDictPtr *)(pxVar1 + 0x28) = sub;
    _xmlDictReference(*(xmlDictPtr *)(pxVar1 + 0x28));
  }
  return pxVar1;
}

