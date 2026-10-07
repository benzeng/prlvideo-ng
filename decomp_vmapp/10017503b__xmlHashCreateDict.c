
xmlHashTablePtr _xmlHashCreateDict(int size,xmlDictPtr dict)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCreate(size);
  if (pxVar1 != (xmlHashTablePtr)0x0) {
    *(xmlDictPtr *)(pxVar1 + 0x10) = dict;
    _xmlDictReference(dict);
  }
  return pxVar1;
}

