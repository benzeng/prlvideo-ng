
xmlChar * _htmlGetMetaEncoding(htmlDocPtr doc)

{
  xmlChar *str1;
  bool bVar1;
  int iVar2;
  _xmlNode *local_38;
  xmlChar *local_30;
  xmlChar *local_28;
  _xmlAttr *local_20;
  
  if (doc != (htmlDocPtr)0x0) {
    for (local_38 = doc->children; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
      if ((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) {
        iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"html");
        if (iVar2 != 0) break;
        iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"head");
        if (iVar2 != 0) goto LAB_1008cfd9d;
        iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"meta");
        if (iVar2 != 0) goto LAB_1008cfedf;
      }
    }
    if (local_38 != (_xmlNode *)0x0) {
      for (local_38 = local_38->children; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
        if ((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) {
          iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"head");
          if (iVar2 != 0) break;
          iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"meta");
          if (iVar2 != 0) goto LAB_1008cfedf;
        }
      }
      if (local_38 != (_xmlNode *)0x0) {
LAB_1008cfd9d:
        local_38 = local_38->children;
LAB_1008cfedf:
        for (; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
          if (((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) &&
             (iVar2 = _xmlStrEqual(local_38->name,(xmlChar *)"meta"), iVar2 != 0)) {
            local_20 = local_38->properties;
            local_30 = (xmlChar *)0x0;
            bVar1 = false;
            for (; local_20 != (_xmlAttr *)0x0; local_20 = local_20->next) {
              if (((local_20->children != (_xmlNode *)0x0) &&
                  (local_20->children->type == XML_TEXT_NODE)) &&
                 (local_20->children->next == (_xmlNode *)0x0)) {
                str1 = local_20->children->content;
                iVar2 = _xmlStrcasecmp(local_20->name,(xmlChar *)"http-equiv");
                if ((iVar2 == 0) &&
                   (iVar2 = _xmlStrcasecmp(str1,(xmlChar *)"Content-Type"), iVar2 == 0)) {
                  bVar1 = true;
                }
                else if ((str1 != (xmlChar *)0x0) &&
                        (iVar2 = _xmlStrcasecmp(local_20->name,(xmlChar *)"content"), iVar2 == 0)) {
                  local_30 = str1;
                }
                if ((bVar1) && (local_30 != (xmlChar *)0x0)) {
                  local_28 = _xmlStrstr(local_30,(xmlChar *)"charset=");
                  if (local_28 == (xmlChar *)0x0) {
                    local_28 = _xmlStrstr(local_30,(xmlChar *)"Charset=");
                  }
                  if (local_28 == (xmlChar *)0x0) {
                    local_28 = _xmlStrstr(local_30,(xmlChar *)"CHARSET=");
                  }
                  if (local_28 == (xmlChar *)0x0) {
                    local_28 = _xmlStrstr(local_30,(xmlChar *)"charset =");
                    if (local_28 == (xmlChar *)0x0) {
                      local_28 = _xmlStrstr(local_30,(xmlChar *)"Charset =");
                    }
                    if (local_28 == (xmlChar *)0x0) {
                      local_28 = _xmlStrstr(local_30,(xmlChar *)"CHARSET =");
                    }
                    if (local_28 != (xmlChar *)0x0) {
                      local_28 = local_28 + 9;
                    }
                  }
                  else {
                    local_28 = local_28 + 8;
                  }
                  if (local_28 != (xmlChar *)0x0) {
                    for (; (*local_28 == ' ' || (*local_28 == '\t')); local_28 = local_28 + 1) {
                    }
                  }
                  return local_28;
                }
              }
            }
          }
        }
      }
    }
  }
  return (xmlChar *)0x0;
}

