
int _xmlValidateElementDecl(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlElementPtr elem)

{
  xmlChar *str2;
  int iVar1;
  xmlElementPtr pxVar2;
  int local_2c;
  xmlElementContentPtr local_20;
  _xmlElementContent *local_18;
  
  local_2c = 1;
  if (doc == (xmlDocPtr)0x0) {
    return 0;
  }
  if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    return 0;
  }
  if (elem == (xmlElementPtr)0x0) {
    return 1;
  }
  if (elem->etype == XML_ELEMENT_TYPE_MIXED) {
    for (local_20 = elem->content;
        ((local_20 != (xmlElementContentPtr)0x0 && (local_20->type == XML_ELEMENT_CONTENT_OR)) &&
        (local_20->c1 != (_xmlElementContent *)0x0)); local_20 = local_20->c2) {
      if (local_20->c1->type == XML_ELEMENT_CONTENT_ELEMENT) {
        str2 = local_20->c1->name;
        for (local_18 = local_20->c2; local_18 != (_xmlElementContent *)0x0; local_18 = local_18->c2
            ) {
          if (local_18->type == XML_ELEMENT_CONTENT_ELEMENT) {
            iVar1 = _xmlStrEqual(local_18->name,str2);
            if ((iVar1 != 0) &&
               (iVar1 = _xmlStrEqual(local_18->prefix,local_20->prefix), iVar1 != 0)) {
              if (local_20->prefix == (xmlChar *)0x0) {
                FUN_100183d12(ctxt,elem,0x1f7,"Definition of %s has duplicate references of %s\n",
                              elem->name,str2,0);
              }
              else {
                FUN_100183d12(ctxt,elem,0x1f7,"Definition of %s has duplicate references of %s:%s\n"
                              ,elem->name,local_20->prefix,str2);
              }
              local_2c = 0;
            }
            break;
          }
          if ((local_18->c1 == (_xmlElementContent *)0x0) ||
             (local_18->c1->type != XML_ELEMENT_CONTENT_ELEMENT)) break;
          iVar1 = _xmlStrEqual(local_18->c1->name,str2);
          if ((iVar1 != 0) &&
             (iVar1 = _xmlStrEqual(local_18->c1->prefix,local_20->prefix), iVar1 != 0)) {
            if (local_20->prefix == (xmlChar *)0x0) {
              FUN_100183d12(ctxt,elem,0x1f7,"Definition of %s has duplicate references to %s\n",
                            elem->name,str2,0);
            }
            else {
              FUN_100183d12(ctxt,elem,0x1f7,"Definition of %s has duplicate references to %s:%s\n",
                            elem->name,local_20->prefix,str2);
            }
            local_2c = 0;
          }
        }
      }
    }
  }
  pxVar2 = _xmlGetDtdElementDesc(doc->intSubset,elem->name);
  if ((((pxVar2 != (xmlElementPtr)0x0) && (pxVar2 != elem)) &&
      ((pxVar2->prefix == elem->prefix ||
       (iVar1 = _xmlStrEqual(pxVar2->prefix,elem->prefix), iVar1 != 0)))) &&
     (pxVar2->etype != XML_ELEMENT_TYPE_UNDEFINED)) {
    FUN_100183d12(ctxt,elem,0x1fd,"Redefinition of element %s\n",elem->name,0,0);
    local_2c = 0;
  }
  pxVar2 = _xmlGetDtdElementDesc(doc->extSubset,elem->name);
  if (((pxVar2 != (xmlElementPtr)0x0) && (pxVar2 != elem)) &&
     (((pxVar2->prefix == elem->prefix ||
       (iVar1 = _xmlStrEqual(pxVar2->prefix,elem->prefix), iVar1 != 0)) &&
      (pxVar2->etype != XML_ELEMENT_TYPE_UNDEFINED)))) {
    FUN_100183d12(ctxt,elem,0x1fd,"Redefinition of element %s\n",elem->name,0,0);
    local_2c = 0;
  }
  return local_2c;
}

