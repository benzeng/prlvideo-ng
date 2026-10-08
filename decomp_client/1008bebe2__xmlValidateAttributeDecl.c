
int _xmlValidateAttributeDecl(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlAttributePtr attr)

{
  int iVar1;
  uint local_54;
  int local_34;
  uint local_30;
  uint local_2c;
  xmlElementPtr local_28;
  xmlHashTablePtr local_20;
  int local_14;
  xmlEnumerationPtr local_10;
  
  local_30 = 1;
  if (doc == (xmlDocPtr)0x0) {
    local_54 = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_54 = 0;
  }
  else if (attr == (xmlAttributePtr)0x0) {
    local_54 = 1;
  }
  else {
    if (attr->defaultValue != (xmlChar *)0x0) {
      local_2c = _xmlValidateAttributeValue(attr->atype,attr->defaultValue);
      if (local_2c == 0) {
        FUN_1008b763a(ctxt,attr,500,"Syntax of default value for attribute %s of %s is not valid\n",
                      attr->name,attr->elem,0);
      }
      local_30 = local_30 & local_2c;
    }
    if (((attr->atype == XML_ATTRIBUTE_ID) && (attr->def != XML_ATTRIBUTE_IMPLIED)) &&
       (attr->def != XML_ATTRIBUTE_REQUIRED)) {
      FUN_1008b763a(ctxt,attr,0x200,
                    "ID attribute %s of %s is not valid must be #IMPLIED or #REQUIRED\n",attr->name,
                    attr->elem,0);
      local_30 = 0;
    }
    if (attr->atype == XML_ATTRIBUTE_ID) {
      local_28 = _xmlGetDtdElementDesc(doc->intSubset,attr->elem);
      if (local_28 == (xmlElementPtr)0x0) {
        local_34 = 0;
        local_20 = doc->intSubset->attributes;
        _xmlHashScan3(local_20,(xmlChar *)0x0,(xmlChar *)0x0,attr->elem,FUN_1008bebb5,&local_34);
      }
      else {
        local_34 = FUN_1008ba6d7(0,local_28,0);
      }
      if (local_34 < 2) {
        if (doc->extSubset != (_xmlDtd *)0x0) {
          local_14 = 0;
          local_28 = _xmlGetDtdElementDesc(doc->extSubset,attr->elem);
          if (local_28 != (xmlElementPtr)0x0) {
            local_14 = FUN_1008ba6d7(0,local_28,0);
          }
          if (local_14 < 2) {
            if (1 < local_34 + local_14) {
              FUN_1008b763a(ctxt,attr,0x202,
                            "Element %s has ID attributes defined in the internal and external subset : %s\n"
                            ,attr->elem,attr->name,0);
            }
          }
          else {
            FUN_1008b776e(ctxt,attr,0x202,
                          "Element %s has %d ID attribute defined in the external subset : %s\n",
                          attr->elem,local_14,attr->name);
          }
        }
      }
      else {
        FUN_1008b776e(ctxt,attr,0x202,
                      "Element %s has %d ID attribute defined in the internal subset : %s\n",
                      attr->elem,local_34,attr->name);
      }
    }
    if ((attr->defaultValue != (xmlChar *)0x0) && (attr->tree != (xmlEnumerationPtr)0x0)) {
      for (local_10 = attr->tree; local_10 != (xmlEnumerationPtr)0x0; local_10 = local_10->next) {
        iVar1 = _xmlStrEqual(local_10->name,attr->defaultValue);
        if (iVar1 != 0) break;
      }
      if (local_10 == (xmlEnumerationPtr)0x0) {
        FUN_1008b763a(ctxt,attr,0x1f6,
                      "Default value \"%s\" for attribute %s of %s is not among the enumerated set\n"
                      ,attr->defaultValue,attr->name,attr->elem);
        local_30 = 0;
      }
    }
    local_54 = local_30;
  }
  return local_54;
}

