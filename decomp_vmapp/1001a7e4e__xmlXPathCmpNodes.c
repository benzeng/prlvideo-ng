
int _xmlXPathCmpNodes(xmlNodePtr node1,xmlNodePtr node2)

{
  _xmlNode *p_Var1;
  bool bVar2;
  bool bVar3;
  int local_6c;
  xmlNodePtr local_68;
  xmlNodePtr local_60;
  int local_58;
  int local_54;
  _xmlNode *local_48;
  xmlNodePtr local_40;
  _xmlNode *local_38;
  
  local_48 = (_xmlNode *)0x0;
  local_40 = (xmlNodePtr)0x0;
  if ((node1 == (xmlNodePtr)0x0) || (node2 == (xmlNodePtr)0x0)) {
    local_6c = -2;
  }
  else {
    bVar2 = node1->type == XML_ATTRIBUTE_NODE;
    local_60 = node1;
    if (bVar2) {
      local_60 = node1->parent;
      local_48 = node1;
    }
    bVar3 = node2->type == XML_ATTRIBUTE_NODE;
    local_68 = node2;
    if (bVar3) {
      local_68 = node2->parent;
      local_40 = node2;
    }
    if (local_60 == local_68) {
      if (bVar2 == bVar3) {
        if (bVar2) {
          for (local_38 = local_40->prev; local_38 != (_xmlNode *)0x0; local_38 = local_38->prev) {
            if (local_38 == local_48) {
              return 1;
            }
          }
          local_6c = -1;
        }
        else {
          local_6c = 0;
        }
      }
      else if (bVar3) {
        local_6c = 1;
      }
      else {
        local_6c = -1;
      }
    }
    else if ((local_60->type == XML_NAMESPACE_DECL) || (local_68->type == XML_NAMESPACE_DECL)) {
      local_6c = 1;
    }
    else if (local_68->prev == local_60) {
      local_6c = 1;
    }
    else if (local_68->next == local_60) {
      local_6c = -1;
    }
    else {
      if ((((local_60->type == XML_ELEMENT_NODE) && (local_68->type == XML_ELEMENT_NODE)) &&
          ((long)local_60->content < 0)) &&
         (((long)local_68->content < 0 && (local_60->doc == local_68->doc)))) {
        if (-(long)local_60->content < -(long)local_68->content) {
          return 1;
        }
        if (-(long)local_68->content < -(long)local_60->content) {
          return -1;
        }
      }
      local_54 = 0;
      for (local_38 = local_68; p_Var1 = local_38, local_38->parent != (_xmlNode *)0x0;
          local_38 = local_38->parent) {
        if (local_38 == local_60) {
          return 1;
        }
        local_54 = local_54 + 1;
      }
      local_58 = 0;
      for (local_38 = local_60; local_38->parent != (_xmlNode *)0x0; local_38 = local_38->parent) {
        if (local_38 == local_68) {
          return -1;
        }
        local_58 = local_58 + 1;
      }
      if (p_Var1 == local_38) {
        for (; local_54 < local_58; local_58 = local_58 + -1) {
          local_60 = local_60->parent;
        }
        for (; local_58 < local_54; local_54 = local_54 + -1) {
          local_68 = local_68->parent;
        }
        do {
          if (local_60->parent == local_68->parent) {
            if (local_68->prev == local_60) {
              return 1;
            }
            if (local_68->next == local_60) {
              return -1;
            }
            if (((local_60->type == XML_ELEMENT_NODE) && (local_68->type == XML_ELEMENT_NODE)) &&
               (((long)local_60->content < 0 &&
                (((long)local_68->content < 0 && (local_60->doc == local_68->doc)))))) {
              if (-(long)local_60->content < -(long)local_68->content) {
                return 1;
              }
              if (-(long)local_68->content < -(long)local_60->content) {
                return -1;
              }
            }
            local_38 = local_60->next;
            while( true ) {
              if (local_38 == (_xmlNode *)0x0) {
                return -1;
              }
              if (local_38 == local_68) break;
              local_38 = local_38->next;
            }
            return 1;
          }
          local_60 = local_60->parent;
          local_68 = local_68->parent;
        } while ((local_60 != (_xmlNode *)0x0) && (local_68 != (_xmlNode *)0x0));
        local_6c = -2;
      }
      else {
        local_6c = -2;
      }
    }
  }
  return local_6c;
}

