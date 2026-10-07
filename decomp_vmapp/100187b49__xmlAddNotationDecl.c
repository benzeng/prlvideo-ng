
xmlNotationPtr
_xmlAddNotationDecl(xmlValidCtxtPtr ctxt,xmlDtdPtr dtd,xmlChar *name,xmlChar *PublicID,
                   xmlChar *SystemID)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlNotationPtr local_58;
  xmlHashTablePtr local_18;
  xmlDictPtr local_10;
  
  if (dtd == (xmlDtdPtr)0x0) {
    local_58 = (xmlNotationPtr)0x0;
  }
  else if (name == (xmlChar *)0x0) {
    local_58 = (xmlNotationPtr)0x0;
  }
  else if ((PublicID == (xmlChar *)0x0) && (SystemID == (xmlChar *)0x0)) {
    local_58 = (xmlNotationPtr)0x0;
  }
  else {
    local_18 = dtd->notations;
    if (local_18 == (xmlHashTablePtr)0x0) {
      local_10 = (xmlDictPtr)0x0;
      if (dtd->doc != (_xmlDoc *)0x0) {
        local_10 = dtd->doc->dict;
      }
      local_18 = _xmlHashCreateDict(0,local_10);
      dtd->notations = local_18;
    }
    if (local_18 == (xmlHashTablePtr)0x0) {
      FUN_1001839fc(ctxt,"xmlAddNotationDecl: Table creation failed!\n");
      local_58 = (xmlNotationPtr)0x0;
    }
    else {
      local_58 = (xmlNotationPtr)(*(code *)_xmlMalloc)(0x18);
      if (local_58 == (xmlNotationPtr)0x0) {
        FUN_1001839fc(ctxt,"malloc failed");
        local_58 = (xmlNotationPtr)0x0;
      }
      else {
        local_58->name = (xmlChar *)0x0;
        local_58->PublicID = (xmlChar *)0x0;
        local_58->SystemID = (xmlChar *)0x0;
        pxVar2 = _xmlStrdup(name);
        local_58->name = pxVar2;
        if (SystemID != (xmlChar *)0x0) {
          pxVar2 = _xmlStrdup(SystemID);
          local_58->SystemID = pxVar2;
        }
        if (PublicID != (xmlChar *)0x0) {
          pxVar2 = _xmlStrdup(PublicID);
          local_58->PublicID = pxVar2;
        }
        iVar1 = _xmlHashAddEntry(local_18,name,local_58);
        if (iVar1 != 0) {
          FUN_100183b80(0,0x20e,"xmlAddNotationDecl: %s already defined\n",name);
          FUN_100187ac3(local_58);
          local_58 = (xmlNotationPtr)0x0;
        }
      }
    }
  }
  return local_58;
}

