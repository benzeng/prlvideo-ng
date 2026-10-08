
int _xmlValidGetPotentialChildren(xmlElementContent *ctree,xmlChar **names,int *len,int max)

{
  xmlElementContentType xVar1;
  int iVar2;
  int local_3c;
  int local_c;
  
  if (((ctree == (xmlElementContent *)0x0) || (names == (xmlChar **)0x0)) || (len == (int *)0x0)) {
    local_3c = -1;
  }
  else if (*len < max) {
    xVar1 = ctree->type;
    if (xVar1 == XML_ELEMENT_CONTENT_ELEMENT) {
      for (local_c = 0; local_c < *len; local_c = local_c + 1) {
        iVar2 = _xmlStrEqual(ctree->name,names[local_c]);
        if (iVar2 != 0) {
          return *len;
        }
      }
      iVar2 = *len;
      names[iVar2] = ctree->name;
      *len = iVar2 + 1;
    }
    else if (xVar1 < XML_ELEMENT_CONTENT_SEQ) {
      if (xVar1 == XML_ELEMENT_CONTENT_PCDATA) {
        for (local_c = 0; local_c < *len; local_c = local_c + 1) {
          iVar2 = _xmlStrEqual((xmlChar *)"#PCDATA",names[local_c]);
          if (iVar2 != 0) {
            return *len;
          }
        }
        iVar2 = *len;
        names[iVar2] = (xmlChar *)"#PCDATA";
        *len = iVar2 + 1;
      }
    }
    else if (xVar1 == XML_ELEMENT_CONTENT_SEQ) {
      _xmlValidGetPotentialChildren(ctree->c1,names,len,max);
      _xmlValidGetPotentialChildren(ctree->c2,names,len,max);
    }
    else if (xVar1 == XML_ELEMENT_CONTENT_OR) {
      _xmlValidGetPotentialChildren(ctree->c1,names,len,max);
      _xmlValidGetPotentialChildren(ctree->c2,names,len,max);
    }
    local_3c = *len;
  }
  else {
    local_3c = *len;
  }
  return local_3c;
}

