
int _xmlValidateOneAttribute
              (xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem,xmlAttrPtr attr,xmlChar *value)

{
  int iVar1;
  xmlIDPtr pxVar2;
  xmlRefPtr pxVar3;
  uint local_a4;
  xmlChar local_78 [64];
  xmlAttributePtr local_38;
  int local_30;
  uint local_2c;
  xmlChar *local_28;
  xmlEnumerationPtr local_20;
  xmlNotationPtr local_18;
  xmlEnumerationPtr local_10;
  
  local_38 = (xmlAttributePtr)0x0;
  local_2c = 1;
  if (doc == (xmlDocPtr)0x0) {
    local_a4 = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_a4 = 0;
  }
  else if ((elem == (xmlNodePtr)0x0) || (elem->name == (xmlChar *)0x0)) {
    local_a4 = 0;
  }
  else if ((attr == (xmlAttrPtr)0x0) || (attr->name == (xmlChar *)0x0)) {
    local_a4 = 0;
  }
  else {
    if ((elem->ns != (xmlNs *)0x0) && (elem->ns->prefix != (xmlChar *)0x0)) {
      local_28 = _xmlBuildQName(elem->name,elem->ns->prefix,local_78,0x32);
      if (local_28 == (xmlChar *)0x0) {
        return 0;
      }
      if (attr->ns == (xmlNs *)0x0) {
        local_38 = _xmlGetDtdAttrDesc(doc->intSubset,local_28,attr->name);
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdAttrDesc(doc->extSubset,local_28,attr->name);
        }
      }
      else {
        local_38 = _xmlGetDtdQAttrDesc(doc->intSubset,local_28,attr->name,attr->ns->prefix);
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdQAttrDesc(doc->extSubset,local_28,attr->name,attr->ns->prefix);
        }
      }
      if ((local_78 != local_28) && (elem->name != local_28)) {
        (*(code *)_xmlFree)(local_28);
      }
    }
    if (local_38 == (xmlAttributePtr)0x0) {
      if (attr->ns == (xmlNs *)0x0) {
        local_38 = _xmlGetDtdAttrDesc(doc->intSubset,elem->name,attr->name);
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdAttrDesc(doc->extSubset,elem->name,attr->name);
        }
      }
      else {
        local_38 = _xmlGetDtdQAttrDesc(doc->intSubset,elem->name,attr->name,attr->ns->prefix);
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdQAttrDesc(doc->extSubset,elem->name,attr->name,attr->ns->prefix);
        }
      }
    }
    if (local_38 == (xmlAttributePtr)0x0) {
      FUN_100183d12(ctxt,elem,0x215,"No declaration for attribute %s of element %s\n",attr->name,
                    elem->name,0);
      local_a4 = 0;
    }
    else {
      attr->atype = local_38->atype;
      local_30 = _xmlValidateAttributeValue(local_38->atype,value);
      if (local_30 == 0) {
        FUN_100183d12(ctxt,elem,0x1f6,"Syntax of value for attribute %s of %s is not valid\n",
                      attr->name,elem->name,0);
        local_2c = 0;
      }
      if ((local_38->def == XML_ATTRIBUTE_FIXED) &&
         (iVar1 = _xmlStrEqual(value,local_38->defaultValue), iVar1 == 0)) {
        FUN_100183d12(ctxt,elem,500,
                      "Value for attribute %s of %s is different from default \"%s\"\n",attr->name,
                      elem->name,local_38->defaultValue);
        local_2c = 0;
      }
      if ((local_38->atype == XML_ATTRIBUTE_ID) &&
         (pxVar2 = _xmlAddID(ctxt,doc,value,attr), pxVar2 == (xmlIDPtr)0x0)) {
        local_2c = 0;
      }
      if (((local_38->atype == XML_ATTRIBUTE_IDREF) || (local_38->atype == XML_ATTRIBUTE_IDREFS)) &&
         (pxVar3 = _xmlAddRef(ctxt,doc,value,attr), pxVar3 == (xmlRefPtr)0x0)) {
        local_2c = 0;
      }
      if (local_38->atype == XML_ATTRIBUTE_NOTATION) {
        local_20 = local_38->tree;
        local_18 = _xmlGetDtdNotationDesc(doc->intSubset,value);
        if (local_18 == (xmlNotationPtr)0x0) {
          local_18 = _xmlGetDtdNotationDesc(doc->extSubset,value);
        }
        if (local_18 == (xmlNotationPtr)0x0) {
          FUN_100183d12(ctxt,elem,0x219,
                        "Value \"%s\" for attribute %s of %s is not a declared Notation\n",value,
                        attr->name,elem->name);
          local_2c = 0;
        }
        while ((local_20 != (xmlEnumerationPtr)0x0 &&
               (iVar1 = _xmlStrEqual(local_20->name,value), iVar1 == 0))) {
          local_20 = local_20->next;
        }
        if (local_20 == (xmlEnumerationPtr)0x0) {
          FUN_100183d12(ctxt,elem,0x20f,
                        "Value \"%s\" for attribute %s of %s is not among the enumerated notations\n"
                        ,value,attr->name,elem->name);
          local_2c = 0;
        }
      }
      if (local_38->atype == XML_ATTRIBUTE_ENUMERATION) {
        local_10 = local_38->tree;
        while ((local_10 != (xmlEnumerationPtr)0x0 &&
               (iVar1 = _xmlStrEqual(local_10->name,value), iVar1 == 0))) {
          local_10 = local_10->next;
        }
        if (local_10 == (xmlEnumerationPtr)0x0) {
          FUN_100183d12(ctxt,elem,0x1f6,
                        "Value \"%s\" for attribute %s of %s is not among the enumerated set\n",
                        value,attr->name,elem->name);
          local_2c = 0;
        }
      }
      if ((local_38->def == XML_ATTRIBUTE_FIXED) &&
         (iVar1 = _xmlStrEqual(local_38->defaultValue,value), iVar1 == 0)) {
        FUN_100183d12(ctxt,elem,0x1f6,"Value for attribute %s of %s must be \"%s\"\n",attr->name,
                      elem->name,local_38->defaultValue);
        local_2c = 0;
      }
      local_a4 = FUN_10018a928(ctxt,doc,attr->name,local_38->atype,value);
      local_a4 = local_2c & local_a4;
    }
  }
  return local_a4;
}

