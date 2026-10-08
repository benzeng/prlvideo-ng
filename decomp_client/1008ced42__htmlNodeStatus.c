
htmlStatus _htmlNodeStatus(htmlNodePtr param_1,int param_2)

{
  xmlChar *pxVar1;
  int iVar2;
  htmlElemDesc *phVar3;
  htmlElemDesc *phVar4;
  htmlStatus local_34;
  htmlStatus local_2c;
  htmlStatus local_28;
  
  if (param_1 == (htmlNodePtr)0x0) {
    local_34 = HTML_INVALID;
  }
  else if (param_1->type == XML_ELEMENT_NODE) {
    if (param_2 == 0) {
      phVar4 = _htmlTagLookup(param_1->name);
      phVar3 = _htmlTagLookup(param_1->parent->name);
      local_2c = _htmlElementStatusHere(phVar3,phVar4);
    }
    else {
      pxVar1 = param_1->name;
      phVar4 = _htmlTagLookup(param_1->parent->name);
      iVar2 = _htmlElementAllowedHere(phVar4,pxVar1);
      if (iVar2 == 0) {
        local_28 = HTML_INVALID;
      }
      else {
        local_28 = HTML_VALID;
      }
      local_2c = local_28;
    }
    local_34 = local_2c;
  }
  else if (param_1->type == XML_ATTRIBUTE_NODE) {
    pxVar1 = param_1->name;
    phVar4 = _htmlTagLookup(param_1->parent->name);
    local_34 = _htmlAttrAllowed(phVar4,pxVar1,param_2);
  }
  else {
    local_34 = HTML_NA;
  }
  return local_34;
}

