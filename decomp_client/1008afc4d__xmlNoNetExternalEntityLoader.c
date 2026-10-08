
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlNoNetExternalEntityLoader(char *URL,char *ID,xmlParserCtxtPtr ctxt)

{
  xmlCatalogAllow xVar1;
  int iVar2;
  xmlParserInputPtr local_48;
  xmlChar *local_20;
  xmlChar *local_10;
  
  local_20 = (xmlChar *)0x0;
  xVar1 = _xmlCatalogGetDefaults();
  if ((xVar1 != XML_CATA_ALLOW_NONE) && (iVar2 = FUN_1008afb86(URL), iVar2 == 0)) {
    if (((ctxt != (xmlParserCtxtPtr)0x0) && (ctxt->catalogs != (void *)0x0)) &&
       ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_DOCUMENT)))) {
      local_20 = _xmlCatalogLocalResolve(ctxt->catalogs,(xmlChar *)ID,(xmlChar *)URL);
    }
    if ((local_20 == (xmlChar *)0x0) &&
       ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_GLOBAL)))) {
      local_20 = _xmlCatalogResolve((xmlChar *)ID,(xmlChar *)URL);
    }
    if ((local_20 == (xmlChar *)0x0) && (URL != (char *)0x0)) {
      local_20 = _xmlStrdup((xmlChar *)URL);
    }
    if ((local_20 != (xmlChar *)0x0) && (iVar2 = FUN_1008afb86(local_20), iVar2 == 0)) {
      local_10 = (xmlChar *)0x0;
      if (((ctxt != (xmlParserCtxtPtr)0x0) && (ctxt->catalogs != (void *)0x0)) &&
         ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_DOCUMENT)))) {
        local_10 = _xmlCatalogLocalResolveURI(ctxt->catalogs,local_20);
      }
      if ((local_10 == (xmlChar *)0x0) &&
         ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_GLOBAL)))) {
        local_10 = _xmlCatalogResolveURI(local_20);
      }
      if (local_10 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_20);
        local_20 = local_10;
      }
    }
  }
  if (local_20 == (xmlChar *)0x0) {
    local_20 = (xmlChar *)URL;
  }
  if ((local_20 == (xmlChar *)0x0) ||
     ((iVar2 = _xmlStrncasecmp(local_20,(xmlChar *)"ftp://",6), iVar2 != 0 &&
      (iVar2 = _xmlStrncasecmp(local_20,(xmlChar *)"http://",7), iVar2 != 0)))) {
    local_48 = (xmlParserInputPtr)FUN_1008af866(local_20,ID,ctxt);
    if (local_20 != (xmlChar *)URL) {
      (*(code *)_xmlFree)(local_20);
    }
  }
  else {
    FUN_1008ab73e(0x607,local_20);
    if (local_20 != (xmlChar *)URL) {
      (*(code *)_xmlFree)(local_20);
    }
    local_48 = (xmlParserInputPtr)0x0;
  }
  return local_48;
}

