
int _xmlDOMWrapReconcileNamespaces(xmlDOMWrapCtxtPtr ctxt,xmlNodePtr elem,int options)

{
  int iVar1;
  long lVar2;
  int local_84;
  undefined8 *local_68;
  undefined8 *local_60;
  xmlNs *local_58;
  int local_4c;
  int local_48;
  int local_44;
  _xmlDoc *local_40;
  xmlNodePtr local_38;
  xmlNodePtr local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  
  local_4c = -1;
  local_48 = 0;
  local_44 = 0;
  local_30 = (xmlNodePtr)0x0;
  local_60 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_1c = 0;
  if (((elem == (xmlNodePtr)0x0) || (elem->doc == (_xmlDoc *)0x0)) ||
     (elem->type != XML_ELEMENT_NODE)) {
    local_84 = -1;
  }
  else {
    local_40 = elem->doc;
    local_38 = elem;
    do {
      if (local_38->type == XML_ELEMENT_NODE) {
        local_48 = 1;
        local_30 = local_38;
        local_4c = local_4c + 1;
        if (local_38->nsDef != (xmlNs *)0x0) {
          for (local_58 = local_38->nsDef; local_58 != (xmlNs *)0x0; local_58 = local_58->next) {
            if (local_44 == 0) {
              if ((elem->parent != (_xmlNode *)0x0) &&
                 (elem->parent->doc != (_xmlDoc *)elem->parent)) {
                iVar1 = FUN_1001724a8(&local_60,elem->parent);
                if (iVar1 == -1) goto LAB_1001736ed;
                if (local_60 != (undefined8 *)0x0) {
                  local_68 = (undefined8 *)local_60[1];
                }
              }
              local_44 = 1;
            }
            if (((local_38->ns != (xmlNs *)0x0) && (local_48 != 0)) && (local_38->ns == local_58)) {
              local_48 = 0;
            }
            if (local_60 != (undefined8 *)0x0) {
              for (local_28 = local_60; (undefined8 *)*local_68 != local_28;
                  local_28 = (undefined8 *)*local_28) {
                if (((-2 < *(int *)((long)local_28 + 0x24)) && (*(int *)(local_28 + 4) == -1)) &&
                   ((local_58->prefix == *(xmlChar **)(local_28[3] + 0x18) ||
                    (iVar1 = _xmlStrEqual(local_58->prefix,*(xmlChar **)(local_28[3] + 0x18)),
                    iVar1 != 0)))) {
                  *(int *)(local_28 + 4) = local_4c;
                }
              }
            }
            lVar2 = FUN_100172079(&local_60,&local_68,local_58,local_58,local_4c);
            if (lVar2 == 0) goto LAB_1001736ed;
          }
        }
        if (local_48 != 0) goto LAB_1001734b9;
LAB_1001735f9:
        if ((local_38->type == XML_ELEMENT_NODE) && (local_38->properties != (_xmlAttr *)0x0)) {
          local_38 = (xmlNodePtr)local_38->properties;
        }
        else {
          if ((local_38->type != XML_ELEMENT_NODE) || (local_38->children == (_xmlNode *)0x0))
          goto LAB_1001732db;
          local_38 = local_38->children;
        }
      }
      else {
        if (local_38->type == XML_ATTRIBUTE_NODE) {
LAB_1001734b9:
          if (local_38->ns != (xmlNs *)0x0) {
            if (local_44 == 0) {
              if ((elem->parent != (_xmlNode *)0x0) &&
                 (elem->parent->doc != (_xmlDoc *)elem->parent)) {
                iVar1 = FUN_1001724a8(&local_60,elem->parent);
                if (iVar1 == -1) goto LAB_1001736ed;
                if (local_60 != (undefined8 *)0x0) {
                  local_68 = (undefined8 *)local_60[1];
                }
              }
              local_44 = 1;
            }
            if (local_60 != (undefined8 *)0x0) {
              for (local_28 = local_60; (undefined8 *)*local_68 != local_28;
                  local_28 = (undefined8 *)*local_28) {
                if ((*(int *)(local_28 + 4) == -1) && (local_38->ns == (xmlNs *)local_28[2])) {
                  local_38->ns = (xmlNs *)local_28[3];
                  goto LAB_1001735f9;
                }
              }
            }
            iVar1 = FUN_100172e9f(local_40,local_30,local_38->ns,&local_58,&local_60,&local_68,
                                  local_4c,local_1c,local_38->type == XML_ATTRIBUTE_NODE);
            if (iVar1 == -1) {
LAB_1001736ed:
              if (local_60 != (undefined8 *)0x0) {
                FUN_100172213(local_60);
              }
              return -1;
            }
            local_38->ns = local_58;
          }
          goto LAB_1001735f9;
        }
LAB_1001732db:
        while( true ) {
          if (local_38 == elem) goto LAB_1001736d2;
          if (local_38->type == XML_ELEMENT_NODE) {
            if (local_60 != (undefined8 *)0x0) {
              for (; (-1 < *(int *)((long)local_68 + 0x24) &&
                     (local_4c <= *(int *)((long)local_68 + 0x24)));
                  local_68 = (undefined8 *)local_68[1]) {
              }
              for (local_28 = local_60; (undefined8 *)*local_68 != local_28;
                  local_28 = (undefined8 *)*local_28) {
                if (local_4c <= *(int *)(local_28 + 4)) {
                  *(undefined4 *)(local_28 + 4) = 0xffffffff;
                }
              }
            }
            local_4c = local_4c + -1;
          }
          if (local_38->next != (_xmlNode *)0x0) break;
          local_38 = local_38->parent;
        }
        local_38 = local_38->next;
      }
    } while (local_38 != (xmlNodePtr)0x0);
LAB_1001736d2:
    if (local_60 != (undefined8 *)0x0) {
      FUN_100172213(local_60);
    }
    local_84 = 0;
  }
  return local_84;
}

