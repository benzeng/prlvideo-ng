
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlLoadExternalEntity(char *URL,char *ID,xmlParserCtxtPtr ctxt)

{
  int iVar1;
  long lVar2;
  xmlParserInputPtr pxVar3;
  
  if ((URL != (char *)0x0) && (iVar1 = FUN_1008af79f(URL), iVar1 == 0)) {
    lVar2 = _xmlCanonicPath(URL);
    if (lVar2 == 0) {
      FUN_1008ab1c7("building canonical path\n");
      return (xmlParserInputPtr)0x0;
    }
    pxVar3 = (xmlParserInputPtr)(*(code *)PTR_FUN_102275a48)(lVar2,ID,ctxt);
    (*(code *)_xmlFree)(lVar2);
    return pxVar3;
  }
  pxVar3 = (xmlParserInputPtr)(*(code *)PTR_FUN_102275a48)(URL,ID,ctxt);
  return pxVar3;
}

