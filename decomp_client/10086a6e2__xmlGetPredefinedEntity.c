
xmlEntityPtr _xmlGetPredefinedEntity(xmlChar *name)

{
  byte bVar1;
  int iVar2;
  xmlEntityPtr local_20;
  
  if (name == (xmlChar *)0x0) {
    return (xmlEntityPtr)0x0;
  }
  bVar1 = *name;
  if (bVar1 == 0x67) {
    iVar2 = _xmlStrEqual(name,(xmlChar *)"gt");
    if (iVar2 != 0) {
      local_20 = (xmlEntityPtr)&DAT_1022755e0;
      return local_20;
    }
  }
  else if (bVar1 < 0x68) {
    if (bVar1 == 0x61) {
      iVar2 = _xmlStrEqual(name,(xmlChar *)"amp");
      if (iVar2 != 0) {
        local_20 = (xmlEntityPtr)&DAT_102275680;
        return local_20;
      }
      iVar2 = _xmlStrEqual(name,(xmlChar *)"apos");
      if (iVar2 != 0) {
        local_20 = (xmlEntityPtr)&DAT_1022757c0;
        return local_20;
      }
    }
  }
  else if (bVar1 == 0x6c) {
    iVar2 = _xmlStrEqual(name,(xmlChar *)"lt");
    if (iVar2 != 0) {
      local_20 = (xmlEntityPtr)&DAT_102275540;
      return local_20;
    }
  }
  else if ((bVar1 == 0x71) && (iVar2 = _xmlStrEqual(name,(xmlChar *)"quot"), iVar2 != 0)) {
    local_20 = (xmlEntityPtr)&DAT_102275720;
    return local_20;
  }
  return (xmlEntityPtr)0x0;
}

