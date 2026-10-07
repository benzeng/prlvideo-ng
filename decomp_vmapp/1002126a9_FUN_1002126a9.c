
int FUN_1002126a9(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlNodePtr pxVar3;
  xmlChar *pxVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  _xmlAttr *local_48;
  int local_3c;
  long local_38;
  xmlNodePtr local_30;
  xmlChar *local_20;
  
  local_3c = 0;
  local_38 = 0;
  pxVar3 = _xmlDocGetRootElement(*(xmlDocPtr *)(param_1 + 0x30));
  if (pxVar3 == (xmlNodePtr)0x0) {
    FUN_1001e8d5c(param_1,1,0,0,"The document has no document element",0,0);
    return 1;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(xmlNodePtr *)(param_1 + 0x90) = pxVar3;
  local_30 = pxVar3;
LAB_10021273d:
  do {
    if (local_30 == (xmlNodePtr)0x0) {
      return local_3c;
    }
    if ((*(int *)(param_1 + 0x120) != -1) && (*(int *)(param_1 + 0x120) <= *(int *)(param_1 + 0xa4))
       ) goto LAB_100212add;
    if (local_30->type == XML_ELEMENT_NODE) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      iVar2 = FUN_10020fd64(param_1);
      if (iVar2 == -1) {
        return -1;
      }
      local_38 = *(long *)(param_1 + 0xb8);
      *(xmlNodePtr *)(local_38 + 8) = local_30;
      *(uint *)(local_38 + 0x10) = (uint)local_30->line;
      *(xmlChar **)(local_38 + 0x18) = local_30->name;
      if (local_30->ns != (xmlNs *)0x0) {
        *(xmlChar **)(local_38 + 0x20) = local_30->ns->href;
      }
      *(uint *)(local_38 + 0x40) = *(uint *)(local_38 + 0x40) | 0x20;
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (local_30->properties != (_xmlAttr *)0x0) {
        local_48 = local_30->properties;
        do {
          if (local_48->ns == (xmlNs *)0x0) {
            local_20 = (xmlChar *)0x0;
          }
          else {
            local_20 = local_48->ns->href;
          }
          pxVar4 = _xmlNodeListGetString(local_48->doc,local_48->children,1);
          iVar2 = FUN_10020c548(param_1,local_48,*(undefined4 *)(local_38 + 0x10),local_48->name,
                                local_20,0,pxVar4,1);
          if (iVar2 == -1) {
            FUN_1001e8d2a(param_1,"xmlSchemaDocWalk","calling xmlSchemaValidatorPushAttribute()");
            return -1;
          }
          local_48 = local_48->next;
        } while (local_48 != (_xmlAttr *)0x0);
      }
      local_3c = FUN_100211283(param_1);
      if (local_3c == 0) {
        if ((*(int *)(param_1 + 0x120) == -1) ||
           (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x120))) goto LAB_100212a44;
      }
      else if (local_3c == -1) {
        FUN_1001e8d2a(param_1,"xmlSchemaDocWalk","calling xmlSchemaValidateElem()");
        return -1;
      }
    }
    else {
      if ((local_30->type == XML_TEXT_NODE) || (local_30->type == XML_CDATA_SECTION_NODE)) {
        if ((*(uint *)(local_38 + 0x40) >> 5 & 1) != 0) {
          *(uint *)(local_38 + 0x40) = *(uint *)(local_38 + 0x40) ^ 0x20;
        }
        local_3c = FUN_100210f36(param_1,local_30->type,local_30->content,0xffffffff,1,0);
        if (local_3c < 0) {
          FUN_1001e8d2a(param_1,"xmlSchemaVDocWalk","calling xmlSchemaVPushText()");
          return -1;
        }
      }
      else {
        if ((local_30->type != XML_ENTITY_NODE) && (local_30->type != XML_ENTITY_REF_NODE))
        goto LAB_100212a62;
        ppxVar5 = ___xmlGenericError();
        pxVar1 = *ppxVar5;
        ppvVar6 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x617e);
      }
LAB_100212a44:
      if (local_30->children != (_xmlNode *)0x0) {
        local_30 = local_30->children;
        goto LAB_10021273d;
      }
    }
LAB_100212a62:
    while( true ) {
      if (local_30->type == XML_ELEMENT_NODE) {
        if (*(_xmlNode **)(*(long *)(param_1 + 0xb8) + 8) != local_30) {
          FUN_1001e8d2a(param_1,"xmlSchemaVDocWalk","element position mismatch");
          return -1;
        }
        local_3c = FUN_10020fe6e(param_1);
        if ((local_3c != 0) && (local_3c < 0)) {
          FUN_1001e8d2a(param_1,"xmlSchemaVDocWalk","calling xmlSchemaValidatorPopElem()");
          return -1;
        }
        if (local_30 == pxVar3) {
          return local_3c;
        }
      }
LAB_100212add:
      if (local_30->next != (_xmlNode *)0x0) break;
      local_30 = local_30->parent;
    }
    local_30 = local_30->next;
  } while( true );
}

