
uint FUN_1008df60f(xmlDocPtr param_1)

{
  _xmlDtd *p_Var1;
  byte *pbVar2;
  ulong uVar3;
  uint local_3c;
  xmlDocPtr local_30;
  int local_24;
  _xmlDtd *local_20;
  xmlDocPtr local_18;
  uint local_c;
  
  local_24 = 2;
  local_20 = (_xmlDtd *)0x0;
  local_c = 0;
  if (param_1 == (xmlDocPtr)0x0) {
    return 0;
  }
  local_30 = param_1;
  if (param_1->type == XML_DOCUMENT_NODE) {
    local_30 = (xmlDocPtr)_xmlDocGetRootElement(param_1);
    if (local_30 == (xmlDocPtr)0x0) {
      local_30 = (xmlDocPtr)param_1->children;
    }
    if (local_30 == (xmlDocPtr)0x0) {
      return 0;
    }
  }
  switch(local_30->type) {
  default:
    local_3c = 0;
    break;
  case XML_ELEMENT_NODE:
    local_18 = (xmlDocPtr)local_30->children;
    goto LAB_1008df97a;
  case XML_ATTRIBUTE_NODE:
    local_18 = (xmlDocPtr)local_30->children;
LAB_1008df97a:
    if (local_18 != (xmlDocPtr)0x0) {
      if (local_18->type < XML_XINCLUDE_START) {
        uVar3 = 1L << ((byte)local_18->type & 0x3f);
        if ((uVar3 & 0x198) == 0) {
          if ((uVar3 & 0x40000) != 0) {
            local_20 = (_xmlDtd *)local_18->name;
          }
        }
        else {
          local_20 = local_18->intSubset;
        }
      }
      if ((local_20 != (_xmlDtd *)0x0) && (*(xmlChar *)&local_20->_private != '\0')) {
        if (local_24 == 1) {
          return local_c + (uint)*(byte *)&local_20->_private * 0x100;
        }
        if (*(xmlChar *)((long)&local_20->_private + 1) != '\0') {
          return (uint)*(byte *)&local_20->_private +
                 (uint)*(byte *)((long)&local_20->_private + 1) * 0x100;
        }
        local_24 = 1;
        local_c = (uint)*(byte *)&local_20->_private;
      }
      if (((local_18->children == (_xmlNode *)0x0) || (local_18->type == XML_DTD_NODE)) ||
         (local_18->children->type == XML_ENTITY_DECL)) {
        if (local_18 == local_30) goto LAB_1008df985;
        if (local_18->next == (_xmlNode *)0x0) {
          do {
            local_18 = (xmlDocPtr)local_18->parent;
            if (local_18 == (xmlDocPtr)0x0) break;
            if (local_18 == local_30) {
              local_18 = (xmlDocPtr)0x0;
              break;
            }
            if (local_18->next != (_xmlNode *)0x0) {
              local_18 = (xmlDocPtr)local_18->next;
              break;
            }
          } while (local_18 != (xmlDocPtr)0x0);
        }
        else {
          local_18 = (xmlDocPtr)local_18->next;
        }
      }
      else {
        local_18 = (xmlDocPtr)local_18->children;
      }
      goto LAB_1008df97a;
    }
LAB_1008df985:
    local_3c = local_c;
    break;
  case XML_TEXT_NODE:
  case XML_CDATA_SECTION_NODE:
  case XML_PI_NODE:
  case XML_COMMENT_NODE:
    p_Var1 = local_30->intSubset;
    if (p_Var1 == (_xmlDtd *)0x0) {
      local_3c = 0;
    }
    else if (*(xmlChar *)&p_Var1->_private == '\0') {
      local_3c = 0;
    }
    else {
      local_3c = (uint)*(byte *)&p_Var1->_private +
                 (uint)*(byte *)((long)&p_Var1->_private + 1) * 0x100;
    }
    break;
  case XML_NAMESPACE_DECL:
    pbVar2 = (byte *)local_30->name;
    if (pbVar2 == (byte *)0x0) {
      local_3c = 0;
    }
    else if (*pbVar2 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = (uint)*pbVar2 + (uint)pbVar2[1] * 0x100;
    }
  }
  return local_3c;
}

