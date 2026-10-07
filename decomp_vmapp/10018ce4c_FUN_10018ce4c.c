
int FUN_10018ce4c(xmlValidCtxtPtr param_1,xmlNodePtr param_2,xmlElementPtr param_3,int param_4,
                 undefined8 param_5)

{
  xmlElementType xVar1;
  int iVar2;
  xmlNodePtr pxVar3;
  undefined1 local_2758 [5008];
  xmlChar local_13c8 [5012];
  int local_34;
  xmlNodePtr local_30;
  xmlElementContentPtr local_28;
  xmlChar *local_20;
  xmlRegExecCtxtPtr local_18;
  xmlChar *local_10;
  
  local_34 = 1;
  if (param_3 == (xmlElementPtr)0x0) {
    return -1;
  }
  local_28 = param_3->content;
  local_20 = param_3->name;
  if (param_3->contModel == (xmlRegexpPtr)0x0) {
    local_34 = _xmlValidBuildContentModel(param_1,param_3);
  }
  if (param_3->contModel == (xmlRegexpPtr)0x0) {
    return -1;
  }
  iVar2 = _xmlRegexpIsDeterminist(param_3->contModel);
  if (iVar2 == 0) {
    return -1;
  }
  param_1->nodeMax = 0;
  param_1->nodeNr = 0;
  param_1->nodeTab = (xmlNodePtr *)0x0;
  local_18 = _xmlRegNewExecCtxt(param_3->contModel,(xmlRegExecCallbacks)0x0,(void *)0x0);
  pxVar3 = param_2;
  if (local_18 != (xmlRegExecCtxtPtr)0x0) {
LAB_10018d130:
    local_30 = pxVar3;
    if (local_30 == (xmlNodePtr)0x0) goto code_r0x00010018d13b;
    xVar1 = local_30->type;
    if (xVar1 == XML_TEXT_NODE) {
      iVar2 = _xmlIsBlankNode(local_30);
      if (iVar2 == 0) {
        local_34 = 0;
        goto LAB_10018d151;
      }
    }
    else {
      if (XML_TEXT_NODE < xVar1) {
        if (xVar1 == XML_CDATA_SECTION_NODE) {
          local_34 = 0;
          goto LAB_10018d151;
        }
        if (((xVar1 != XML_ENTITY_REF_NODE) || (local_30->children == (_xmlNode *)0x0)) ||
           (local_30->children->children == (_xmlNode *)0x0)) goto LAB_10018d0f8;
        FUN_1001844b5(param_1,local_30);
        pxVar3 = local_30->children->children;
        goto LAB_10018d130;
      }
      if (xVar1 != XML_ELEMENT_NODE) goto LAB_10018d0f8;
      if ((local_30->ns == (xmlNs *)0x0) || (local_30->ns->prefix == (xmlChar *)0x0)) {
        local_34 = _xmlRegExecPushString(local_18,local_30->name,(void *)0x0);
      }
      else {
        local_10 = _xmlBuildQName(local_30->name,local_30->ns->prefix,local_13c8,0x32);
        if (local_10 == (xmlChar *)0x0) {
          local_34 = -1;
          goto LAB_10018d151;
        }
        local_34 = _xmlRegExecPushString(local_18,local_10,(void *)0x0);
        if ((local_13c8 != local_10) && (local_30->name != local_10)) {
          (*(code *)_xmlFree)(local_10);
        }
      }
    }
LAB_10018d0f8:
    local_30 = local_30->next;
    while ((pxVar3 = local_30, local_30 == (_xmlNode *)0x0 &&
           (pxVar3 = (xmlNodePtr)FUN_1001845f2(param_1), pxVar3 != (xmlNodePtr)0x0))) {
      local_30 = pxVar3->next;
    }
    goto LAB_10018d130;
  }
LAB_10018d15a:
  if (((param_4 != 0) && (local_34 != 1)) && (local_34 != -3)) {
    if ((param_1 == (xmlValidCtxtPtr)0x0) || (param_1->warning == (xmlValidityWarningFunc)0x0)) {
      if (local_20 == (xmlChar *)0x0) {
        FUN_100183d12(param_1,param_5,0x1f8,"Element content does not follow the DTD\n",0,0,0);
      }
      else {
        FUN_100183d12(param_1,param_5,0x1f8,"Element %s content does not follow the DTD\n",local_20,
                      0,0);
      }
    }
    else {
      local_13c8[0] = '\0';
      _xmlSnprintfElementContent((char *)local_13c8,5000,local_28,1);
      local_2758[0] = 0;
      FUN_10018cb20(local_2758,5000,param_2,1);
      if (local_20 == (xmlChar *)0x0) {
        FUN_100183d12(param_1,param_5,0x1f8,
                      "Element content does not follow the DTD, expecting %s, got %s\n",local_13c8,
                      local_2758,0);
      }
      else {
        FUN_100183d12(param_1,param_5,0x1f8,
                      "Element %s content does not follow the DTD, expecting %s, got %s\n",local_20,
                      local_13c8,local_2758);
      }
    }
    local_34 = 0;
  }
  if (local_34 == -3) {
    local_34 = 1;
  }
  param_1->nodeMax = 0;
  param_1->nodeNr = 0;
  if (param_1->nodeTab != (xmlNodePtr *)0x0) {
    (*(code *)_xmlFree)(param_1->nodeTab);
    param_1->nodeTab = (xmlNodePtr *)0x0;
  }
  return local_34;
code_r0x00010018d13b:
  local_34 = _xmlRegExecPushString(local_18,(xmlChar *)0x0,(void *)0x0);
LAB_10018d151:
  _xmlRegFreeExecCtxt(local_18);
  goto LAB_10018d15a;
}

