
xmlElementContentPtr _xmlCopyDocElementContent(xmlDocPtr doc,xmlElementContentPtr content)

{
  xmlChar *pxVar1;
  xmlElementContentPtr pxVar2;
  _xmlElementContent *p_Var3;
  long lVar4;
  _xmlElementContent *p_Var5;
  xmlElementContentPtr local_40;
  _xmlElementContent *local_38;
  xmlElementContentPtr local_20;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (content == (xmlElementContentPtr)0x0) {
    local_40 = (xmlElementContentPtr)0x0;
  }
  else {
    if (doc != (xmlDocPtr)0x0) {
      local_10 = doc->dict;
    }
    local_40 = (xmlElementContentPtr)(*(code *)_xmlMalloc)(0x30);
    if (local_40 == (xmlElementContentPtr)0x0) {
      FUN_1008b7324(0,"malloc failed");
      local_40 = (xmlElementContentPtr)0x0;
    }
    else {
      pxVar2 = local_40;
      for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
        pxVar2->type = 0;
        pxVar2->ocur = 0;
        pxVar2 = (xmlElementContentPtr)&pxVar2->name;
      }
      local_40->type = content->type;
      local_40->ocur = content->ocur;
      if (content->name != (xmlChar *)0x0) {
        if (local_10 == (xmlDictPtr)0x0) {
          pxVar1 = _xmlStrdup(content->name);
          local_40->name = pxVar1;
        }
        else {
          pxVar1 = _xmlDictLookup(local_10,content->name,-1);
          local_40->name = pxVar1;
        }
      }
      if (content->prefix != (xmlChar *)0x0) {
        if (local_10 == (xmlDictPtr)0x0) {
          pxVar1 = _xmlStrdup(content->prefix);
          local_40->prefix = pxVar1;
        }
        else {
          pxVar1 = _xmlDictLookup(local_10,content->prefix,-1);
          local_40->prefix = pxVar1;
        }
      }
      if (content->c1 != (_xmlElementContent *)0x0) {
        pxVar2 = _xmlCopyDocElementContent(doc,content->c1);
        local_40->c1 = pxVar2;
      }
      if (local_40->c1 != (_xmlElementContent *)0x0) {
        local_40->c1->parent = local_40;
      }
      if (content->c2 != (_xmlElementContent *)0x0) {
        local_20 = local_40;
        for (local_38 = content->c2; local_38 != (_xmlElementContent *)0x0; local_38 = local_38->c2)
        {
          p_Var3 = (_xmlElementContent *)(*(code *)_xmlMalloc)(0x30);
          if (p_Var3 == (_xmlElementContent *)0x0) {
            FUN_1008b7324(0,"malloc failed");
            return local_40;
          }
          p_Var5 = p_Var3;
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            p_Var5->type = 0;
            p_Var5->ocur = 0;
            p_Var5 = (_xmlElementContent *)&p_Var5->name;
          }
          p_Var3->type = local_38->type;
          p_Var3->ocur = local_38->ocur;
          local_20->c2 = p_Var3;
          if (local_38->name != (xmlChar *)0x0) {
            if (local_10 == (xmlDictPtr)0x0) {
              pxVar1 = _xmlStrdup(local_38->name);
              p_Var3->name = pxVar1;
            }
            else {
              pxVar1 = _xmlDictLookup(local_10,local_38->name,-1);
              p_Var3->name = pxVar1;
            }
          }
          if (local_38->prefix != (xmlChar *)0x0) {
            if (local_10 == (xmlDictPtr)0x0) {
              pxVar1 = _xmlStrdup(local_38->prefix);
              p_Var3->prefix = pxVar1;
            }
            else {
              pxVar1 = _xmlDictLookup(local_10,local_38->prefix,-1);
              p_Var3->prefix = pxVar1;
            }
          }
          if (local_38->c1 != (_xmlElementContent *)0x0) {
            pxVar2 = _xmlCopyDocElementContent(doc,local_38->c1);
            p_Var3->c1 = pxVar2;
          }
          if (p_Var3->c1 != (_xmlElementContent *)0x0) {
            p_Var3->c1->parent = local_40;
          }
          local_20 = p_Var3;
        }
      }
    }
  }
  return local_40;
}

