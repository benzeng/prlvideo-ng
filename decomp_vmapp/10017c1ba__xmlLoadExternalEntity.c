
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlLoadExternalEntity(char *URL,char *ID,xmlParserCtxtPtr ctxt)

{
  int iVar1;
  long lVar2;
  xmlParserInputPtr pxVar3;
  
  if ((URL != (char *)0x0) && (iVar1 = FUN_10017be77(URL), iVar1 == 0)) {
    lVar2 = _xmlCanonicPath(URL);
    if (lVar2 == 0) {
      FUN_10017789f("building canonical path\n");
      return (xmlParserInputPtr)0x0;
    }
    pxVar3 = (xmlParserInputPtr)(*(code *)PTR_FUN_10110d948)(lVar2,ID,ctxt);
    (*(code *)_xmlFree)(lVar2);
    return pxVar3;
  }
  pxVar3 = (xmlParserInputPtr)(*(code *)PTR_FUN_10110d948)(URL,ID,ctxt);
  return pxVar3;
}

