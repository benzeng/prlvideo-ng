
int _xmlReconciliateNs(xmlDocPtr doc,xmlNodePtr tree)

{
  xmlNs *pxVar1;
  int local_5c;
  long local_40;
  long local_38;
  int local_30;
  int local_2c;
  xmlNodePtr local_20;
  _xmlAttr *local_18;
  int local_c;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  if ((tree == (xmlNodePtr)0x0) || (tree->type != XML_ELEMENT_NODE)) {
    local_5c = -1;
  }
  else if ((doc == (xmlDocPtr)0x0) || (doc->type != XML_DOCUMENT_NODE)) {
    local_5c = -1;
  }
  else {
    local_20 = tree;
    if (tree->doc == doc) {
      while (local_20 != (xmlNodePtr)0x0) {
        if (local_20->ns != (xmlNs *)0x0) {
          if (local_30 == 0) {
            local_30 = 10;
            local_40 = (*(code *)_xmlMalloc)(0x50);
            if (local_40 == 0) {
              FUN_1008991e0("fixing namespaces");
              return -1;
            }
            local_38 = (*(code *)_xmlMalloc)(0x50);
            if (local_38 == 0) {
              FUN_1008991e0("fixing namespaces");
              (*(code *)_xmlFree)(local_40);
              return -1;
            }
          }
          for (local_c = 0; local_c < local_2c; local_c = local_c + 1) {
            if (*(xmlNs **)((long)local_c * 8 + local_40) == local_20->ns) {
              local_20->ns = *(xmlNs **)((long)local_c * 8 + local_38);
              break;
            }
          }
          if ((local_c == local_2c) &&
             (pxVar1 = (xmlNs *)_xmlNewReconciliedNs(doc,tree,local_20->ns), pxVar1 != (xmlNs *)0x0)
             ) {
            if (local_30 <= local_2c) {
              local_30 = local_30 << 1;
              local_40 = (*(code *)_xmlRealloc)(local_40,(long)local_30 * 8);
              if (local_40 == 0) {
                FUN_1008991e0("fixing namespaces");
                (*(code *)_xmlFree)(local_38);
                return -1;
              }
              local_38 = (*(code *)_xmlRealloc)(local_38,(long)local_30 * 8);
              if (local_38 == 0) {
                FUN_1008991e0("fixing namespaces");
                (*(code *)_xmlFree)(local_40);
                return -1;
              }
            }
            *(xmlNs **)((long)local_2c * 8 + local_38) = pxVar1;
            *(xmlNs **)((long)local_2c * 8 + local_40) = local_20->ns;
            local_2c = local_2c + 1;
            local_20->ns = pxVar1;
          }
        }
        for (local_18 = local_20->properties; local_18 != (_xmlAttr *)0x0; local_18 = local_18->next
            ) {
          if (local_18->ns != (xmlNs *)0x0) {
            if (local_30 == 0) {
              local_30 = 10;
              local_40 = (*(code *)_xmlMalloc)(0x50);
              if (local_40 == 0) {
                FUN_1008991e0("fixing namespaces");
                return -1;
              }
              local_38 = (*(code *)_xmlMalloc)(0x50);
              if (local_38 == 0) {
                FUN_1008991e0("fixing namespaces");
                (*(code *)_xmlFree)(local_40);
                return -1;
              }
            }
            for (local_c = 0; local_c < local_2c; local_c = local_c + 1) {
              if (*(xmlNs **)((long)local_c * 8 + local_40) == local_18->ns) {
                local_18->ns = *(xmlNs **)((long)local_c * 8 + local_38);
                break;
              }
            }
            if ((local_c == local_2c) &&
               (pxVar1 = (xmlNs *)_xmlNewReconciliedNs(doc,tree,local_18->ns),
               pxVar1 != (xmlNs *)0x0)) {
              if (local_30 <= local_2c) {
                local_30 = local_30 << 1;
                local_40 = (*(code *)_xmlRealloc)(local_40,(long)local_30 * 8);
                if (local_40 == 0) {
                  FUN_1008991e0("fixing namespaces");
                  (*(code *)_xmlFree)(local_38);
                  return -1;
                }
                local_38 = (*(code *)_xmlRealloc)(local_38,(long)local_30 * 8);
                if (local_38 == 0) {
                  FUN_1008991e0("fixing namespaces");
                  (*(code *)_xmlFree)(local_40);
                  return -1;
                }
              }
              *(xmlNs **)((long)local_2c * 8 + local_38) = pxVar1;
              *(xmlNs **)((long)local_2c * 8 + local_40) = local_18->ns;
              local_2c = local_2c + 1;
              local_18->ns = pxVar1;
            }
          }
        }
        if ((local_20->children == (_xmlNode *)0x0) || (local_20->type == XML_ENTITY_REF_NODE)) {
          if ((local_20 == tree) || (local_20->next == (_xmlNode *)0x0)) {
            if (local_20 == tree) break;
            do {
              if (local_20 == tree) goto LAB_1008a39c0;
              if (local_20->parent != (_xmlNode *)0x0) {
                local_20 = local_20->parent;
              }
              if ((local_20 != tree) && (local_20->next != (_xmlNode *)0x0)) {
                local_20 = local_20->next;
                goto LAB_1008a39c0;
              }
            } while (local_20->parent != (_xmlNode *)0x0);
            local_20 = (xmlNodePtr)0x0;
LAB_1008a39c0:
            if (local_20 == tree) {
              local_20 = (xmlNodePtr)0x0;
            }
          }
          else {
            local_20 = local_20->next;
          }
        }
        else {
          local_20 = local_20->children;
        }
      }
      if (local_40 != 0) {
        (*(code *)_xmlFree)(local_40);
      }
      if (local_38 != 0) {
        (*(code *)_xmlFree)(local_38);
      }
      local_5c = 0;
    }
    else {
      local_5c = -1;
    }
  }
  return local_5c;
}

