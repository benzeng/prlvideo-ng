
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr FUN_1008af866(xmlChar *param_1,xmlChar *param_2,xmlParserCtxtPtr param_3)

{
  xmlCatalogAllow xVar1;
  int iVar2;
  xmlParserInputPtr local_48;
  xmlChar *local_38;
  xmlChar *local_20;
  xmlChar *local_10;
  
  local_20 = (xmlChar *)0x0;
  if ((param_3 == (xmlParserCtxtPtr)0x0) || (((uint)param_3->options >> 0xb & 1) == 0)) {
    xVar1 = _xmlCatalogGetDefaults();
    if ((xVar1 != XML_CATA_ALLOW_NONE) && (iVar2 = FUN_1008af79f(param_1), iVar2 == 0)) {
      if (((param_3 != (xmlParserCtxtPtr)0x0) && (param_3->catalogs != (void *)0x0)) &&
         ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_DOCUMENT)))) {
        local_20 = _xmlCatalogLocalResolve(param_3->catalogs,param_2,param_1);
      }
      if ((local_20 == (xmlChar *)0x0) &&
         ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_GLOBAL)))) {
        local_20 = _xmlCatalogResolve(param_2,param_1);
      }
      if ((local_20 == (xmlChar *)0x0) && (param_1 != (xmlChar *)0x0)) {
        local_20 = _xmlStrdup(param_1);
      }
      if ((local_20 != (xmlChar *)0x0) && (iVar2 = FUN_1008af79f(local_20), iVar2 == 0)) {
        local_10 = (xmlChar *)0x0;
        if (((param_3 != (xmlParserCtxtPtr)0x0) && (param_3->catalogs != (void *)0x0)) &&
           ((xVar1 == XML_CATA_ALLOW_ALL || (xVar1 == XML_CATA_ALLOW_DOCUMENT)))) {
          local_10 = _xmlCatalogLocalResolveURI(param_3->catalogs,local_20);
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
      local_20 = param_1;
    }
    if (local_20 == (xmlChar *)0x0) {
      local_38 = param_2;
      if (param_2 == (xmlChar *)0x0) {
        local_38 = "NULL";
      }
      ___xmlLoaderErr(param_3,"failed to load external entity \"%s\"\n",local_38);
      local_48 = (xmlParserInputPtr)0x0;
    }
    else {
      local_48 = (xmlParserInputPtr)_xmlNewInputFromFile(param_3,local_20);
      if ((local_20 != (xmlChar *)0x0) && (local_20 != param_1)) {
        (*(code *)_xmlFree)(local_20);
      }
    }
  }
  else {
    iVar2 = param_3->options;
    param_3->options = param_3->options + -0x800;
    local_48 = _xmlNoNetExternalEntityLoader((char *)param_1,(char *)param_2,param_3);
    param_3->options = iVar2;
  }
  return local_48;
}

