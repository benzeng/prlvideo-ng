
int _xmlValidateOneNamespace
              (xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem,xmlChar *prefix,xmlNsPtr ns,
              xmlChar *value)

{
  int iVar1;
  uint uVar2;
  xmlIDPtr pxVar3;
  xmlRefPtr pxVar4;
  uint local_ac;
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
    local_ac = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_ac = 0;
  }
  else if ((elem == (xmlNodePtr)0x0) || (elem->name == (xmlChar *)0x0)) {
    local_ac = 0;
  }
  else if ((ns == (xmlNsPtr)0x0) || (ns->href == (xmlChar *)0x0)) {
    local_ac = 0;
  }
  else {
    if (prefix != (xmlChar *)0x0) {
      local_28 = _xmlBuildQName(elem->name,prefix,local_78,0x32);
      if (local_28 == (xmlChar *)0x0) {
        FUN_1001839fc(ctxt,"Validating namespace");
        return 0;
      }
      if (ns->prefix == (xmlChar *)0x0) {
        local_38 = _xmlGetDtdAttrDesc(doc->intSubset,local_28,(xmlChar *)"xmlns");
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdAttrDesc(doc->extSubset,local_28,(xmlChar *)"xmlns");
        }
      }
      else {
        local_38 = _xmlGetDtdQAttrDesc(doc->intSubset,local_28,ns->prefix,(xmlChar *)"xmlns");
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdQAttrDesc(doc->extSubset,local_28,ns->prefix,(xmlChar *)"xmlns");
        }
      }
      if ((local_78 != local_28) && (elem->name != local_28)) {
        (*(code *)_xmlFree)(local_28);
      }
    }
    if (local_38 == (xmlAttributePtr)0x0) {
      if (ns->prefix == (xmlChar *)0x0) {
        local_38 = _xmlGetDtdAttrDesc(doc->intSubset,elem->name,(xmlChar *)"xmlns");
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdAttrDesc(doc->extSubset,elem->name,(xmlChar *)"xmlns");
        }
      }
      else {
        local_38 = _xmlGetDtdQAttrDesc(doc->intSubset,elem->name,ns->prefix,(xmlChar *)"xmlns");
        if ((local_38 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
          local_38 = _xmlGetDtdQAttrDesc(doc->extSubset,elem->name,ns->prefix,(xmlChar *)"xmlns");
        }
      }
    }
    if (local_38 == (xmlAttributePtr)0x0) {
      if (ns->prefix == (xmlChar *)0x0) {
        FUN_100183d12(ctxt,elem,0x215,"No declaration for attribute xmlns of element %s\n",
                      elem->name,0,0);
      }
      else {
        FUN_100183d12(ctxt,elem,0x215,"No declaration for attribute xmlns:%s of element %s\n",
                      ns->prefix,elem->name,0);
      }
      local_ac = 0;
    }
    else {
      local_30 = _xmlValidateAttributeValue(local_38->atype,value);
      if (local_30 == 0) {
        if (ns->prefix == (xmlChar *)0x0) {
          FUN_100183d12(ctxt,elem,0x204,"Syntax of value for attribute xmlns of %s is not valid\n",
                        elem->name,0,0);
        }
        else {
          FUN_100183d12(ctxt,elem,0x204,
                        "Syntax of value for attribute xmlns:%s of %s is not valid\n",ns->prefix,
                        elem->name,0);
        }
        local_2c = 0;
      }
      if ((local_38->def == XML_ATTRIBUTE_FIXED) &&
         (iVar1 = _xmlStrEqual(value,local_38->defaultValue), iVar1 == 0)) {
        if (ns->prefix == (xmlChar *)0x0) {
          FUN_100183d12(ctxt,elem,500,
                        "Value for attribute xmlns of %s is different from default \"%s\"\n",
                        elem->name,local_38->defaultValue,0);
        }
        else {
          FUN_100183d12(ctxt,elem,500,
                        "Value for attribute xmlns:%s of %s is different from default \"%s\"\n",
                        ns->prefix,elem->name,local_38->defaultValue);
        }
        local_2c = 0;
      }
      if ((local_38->atype == XML_ATTRIBUTE_ID) &&
         (pxVar3 = _xmlAddID(ctxt,doc,value,(xmlAttrPtr)ns), pxVar3 == (xmlIDPtr)0x0)) {
        local_2c = 0;
      }
      if (((local_38->atype == XML_ATTRIBUTE_IDREF) || (local_38->atype == XML_ATTRIBUTE_IDREFS)) &&
         (pxVar4 = _xmlAddRef(ctxt,doc,value,(xmlAttrPtr)ns), pxVar4 == (xmlRefPtr)0x0)) {
        local_2c = 0;
      }
      if (local_38->atype == XML_ATTRIBUTE_NOTATION) {
        local_20 = local_38->tree;
        local_18 = _xmlGetDtdNotationDesc(doc->intSubset,value);
        if (local_18 == (xmlNotationPtr)0x0) {
          local_18 = _xmlGetDtdNotationDesc(doc->extSubset,value);
        }
        if (local_18 == (xmlNotationPtr)0x0) {
          if (ns->prefix == (xmlChar *)0x0) {
            FUN_100183d12(ctxt,elem,0x219,
                          "Value \"%s\" for attribute xmlns of %s is not a declared Notation\n",
                          value,elem->name,0);
          }
          else {
            FUN_100183d12(ctxt,elem,0x219,
                          "Value \"%s\" for attribute xmlns:%s of %s is not a declared Notation\n",
                          value,ns->prefix,elem->name);
          }
          local_2c = 0;
        }
        while ((local_20 != (xmlEnumerationPtr)0x0 &&
               (iVar1 = _xmlStrEqual(local_20->name,value), iVar1 == 0))) {
          local_20 = local_20->next;
        }
        if (local_20 == (xmlEnumerationPtr)0x0) {
          if (ns->prefix == (xmlChar *)0x0) {
            FUN_100183d12(ctxt,elem,0x20f,
                          "Value \"%s\" for attribute xmlns of %s is not among the enumerated notations\n"
                          ,value,elem->name,0);
          }
          else {
            FUN_100183d12(ctxt,elem,0x20f,
                          "Value \"%s\" for attribute xmlns:%s of %s is not among the enumerated notations\n"
                          ,value,ns->prefix,elem->name);
          }
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
          if (ns->prefix == (xmlChar *)0x0) {
            FUN_100183d12(ctxt,elem,0x1f6,
                          "Value \"%s\" for attribute xmlns of %s is not among the enumerated set\n"
                          ,value,elem->name,0);
          }
          else {
            FUN_100183d12(ctxt,elem,0x1f6,
                          "Value \"%s\" for attribute xmlns:%s of %s is not among the enumerated set\n"
                          ,value,ns->prefix,elem->name);
          }
          local_2c = 0;
        }
      }
      if ((local_38->def == XML_ATTRIBUTE_FIXED) &&
         (iVar1 = _xmlStrEqual(local_38->defaultValue,value), iVar1 == 0)) {
        if (ns->prefix == (xmlChar *)0x0) {
          FUN_100183d12(ctxt,elem,0x1fc,"Value for attribute xmlns of %s must be \"%s\"\n",
                        elem->name,local_38->defaultValue,0);
        }
        else {
          FUN_100183d12(ctxt,elem,0x1fc,"Value for attribute xmlns:%s of %s must be \"%s\"\n",
                        ns->prefix,elem->name,local_38->defaultValue);
        }
        local_2c = 0;
      }
      if (ns->prefix == (xmlChar *)0x0) {
        uVar2 = FUN_10018a928(ctxt,doc,"xmlns",local_38->atype,value);
        local_2c = local_2c & uVar2;
      }
      else {
        uVar2 = FUN_10018a928(ctxt,doc,ns->prefix,local_38->atype,value);
        local_2c = local_2c & uVar2;
      }
      local_ac = local_2c;
    }
  }
  return local_ac;
}

