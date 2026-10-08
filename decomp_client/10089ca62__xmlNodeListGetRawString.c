
xmlChar * _xmlNodeListGetRawString(xmlDocPtr doc,xmlNodePtr list,int inLine)

{
  xmlChar *local_58;
  xmlChar local_38 [8];
  xmlNodePtr local_30;
  xmlChar *local_28;
  xmlEntityPtr local_20;
  xmlChar *local_18;
  xmlChar *local_10;
  
  local_28 = (xmlChar *)0x0;
  local_30 = list;
  if (list == (xmlNodePtr)0x0) {
    local_58 = (xmlChar *)0x0;
  }
  else {
    for (; local_30 != (xmlNodePtr)0x0; local_30 = local_30->next) {
      if ((local_30->type == XML_TEXT_NODE) || (local_30->type == XML_CDATA_SECTION_NODE)) {
        if (inLine == 0) {
          local_18 = _xmlEncodeSpecialChars(doc,local_30->content);
          if (local_18 != (xmlChar *)0x0) {
            local_28 = _xmlStrcat(local_28,local_18);
            (*(code *)_xmlFree)(local_18);
          }
        }
        else {
          local_28 = _xmlStrcat(local_28,local_30->content);
        }
      }
      else if (local_30->type == XML_ENTITY_REF_NODE) {
        if (inLine == 0) {
          local_38[0] = '&';
          local_38[1] = 0;
          local_28 = _xmlStrncat(local_28,local_38,1);
          local_28 = _xmlStrcat(local_28,local_30->name);
          local_38[0] = ';';
          local_38[1] = 0;
          local_28 = _xmlStrncat(local_28,local_38,1);
        }
        else {
          local_20 = _xmlGetDocEntity(doc,local_30->name);
          if (local_20 == (xmlEntityPtr)0x0) {
            local_28 = _xmlStrcat(local_28,local_30->content);
          }
          else {
            local_10 = _xmlNodeListGetRawString(doc,local_20->children,1);
            if (local_10 != (xmlChar *)0x0) {
              local_28 = _xmlStrcat(local_28,local_10);
              (*(code *)_xmlFree)(local_10);
            }
          }
        }
      }
    }
    local_58 = local_28;
  }
  return local_58;
}

