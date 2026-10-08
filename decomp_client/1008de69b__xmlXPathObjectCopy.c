
xmlXPathObjectPtr _xmlXPathObjectCopy(xmlXPathObjectPtr val)

{
  xmlXPathObjectType xVar1;
  xmlGenericErrorFunc pxVar2;
  undefined4 uVar3;
  xmlChar *pxVar4;
  xmlNodeSetPtr pxVar5;
  void *pvVar6;
  xmlGenericErrorFunc *ppxVar7;
  void **ppvVar8;
  xmlXPathObjectPtr local_40;
  
  if (val == (xmlXPathObjectPtr)0x0) {
    local_40 = (xmlXPathObjectPtr)0x0;
  }
  else {
    local_40 = (xmlXPathObjectPtr)(*(code *)_xmlMalloc)(0x48);
    if (local_40 == (xmlXPathObjectPtr)0x0) {
      FUN_1008d87c3(0,"copying object\n");
      local_40 = (xmlXPathObjectPtr)0x0;
    }
    else {
      uVar3 = *(undefined4 *)&val->field_0x4;
      local_40->type = val->type;
      *(undefined4 *)&local_40->field_0x4 = uVar3;
      local_40->nodesetval = val->nodesetval;
      uVar3 = *(undefined4 *)&val->field_0x14;
      local_40->boolval = val->boolval;
      *(undefined4 *)&local_40->field_0x14 = uVar3;
      local_40->floatval = val->floatval;
      local_40->stringval = val->stringval;
      local_40->user = val->user;
      uVar3 = *(undefined4 *)&val->field_0x34;
      local_40->index = val->index;
      *(undefined4 *)&local_40->field_0x34 = uVar3;
      local_40->user2 = val->user2;
      uVar3 = *(undefined4 *)&val->field_0x44;
      local_40->index2 = val->index2;
      *(undefined4 *)&local_40->field_0x44 = uVar3;
      switch(val->type) {
      case XPATH_UNDEFINED:
        ppxVar7 = ___xmlGenericError();
        pxVar2 = *ppxVar7;
        xVar1 = val->type;
        ppvVar8 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar8,"xmlXPathObjectCopy: unsupported type %d\n",(ulong)xVar1);
        break;
      case XPATH_NODESET:
      case XPATH_XSLT_TREE:
        pxVar5 = (xmlNodeSetPtr)_xmlXPathNodeSetMerge(0,val->nodesetval);
        local_40->nodesetval = pxVar5;
        local_40->boolval = 0;
        break;
      case XPATH_STRING:
        pxVar4 = _xmlStrdup(val->stringval);
        local_40->stringval = pxVar4;
        break;
      case XPATH_LOCATIONSET:
        pvVar6 = (void *)_xmlXPtrLocationSetMerge(0,val->user);
        local_40->user = pvVar6;
        break;
      case XPATH_USERS:
        local_40->user = val->user;
      }
    }
  }
  return local_40;
}

