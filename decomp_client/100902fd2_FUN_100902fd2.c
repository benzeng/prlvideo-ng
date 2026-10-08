
void FUN_100902fd2(undefined8 *param_1,xmlNodePtr param_2,xmlDocPtr param_3,xmlNsPtr param_4,
                  long param_5)

{
  int iVar1;
  xmlNsPtr ns;
  xmlNodePtr pxVar2;
  undefined8 *local_18;
  
  local_18 = param_1;
LAB_1009034dd:
  if (local_18 == (undefined8 *)0x0) {
    return;
  }
  if (local_18[9] != param_5) goto switchD_100903046_caseD_ffffffff;
  switch(*(undefined4 *)(local_18 + 3)) {
  case 1:
  case 2:
    if (local_18 != param_1) break;
    local_18 = (undefined8 *)local_18[2];
    goto LAB_1009034dd;
  case 3:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"nextCatalog",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"catalog",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 4:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"group",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"id",(xmlChar *)local_18[4]);
    if ((local_18[5] != 0) &&
       (ns = _xmlSearchNsByHref(param_3,pxVar2,(xmlChar *)"http://www.w3.org/XML/1998/namespace"),
       ns != (xmlNsPtr)0x0)) {
      _xmlSetNsProp(pxVar2,ns,(xmlChar *)"base",(xmlChar *)local_18[5]);
    }
    iVar1 = *(int *)(local_18 + 7);
    if (iVar1 == 1) {
      _xmlSetProp(pxVar2,(xmlChar *)"prefer",(xmlChar *)"public");
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      _xmlSetProp(pxVar2,(xmlChar *)"prefer",(xmlChar *)"system");
    }
    FUN_100902fd2(*local_18,pxVar2,param_3,param_4,local_18);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 5:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"public",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"publicId",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"uri",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 6:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"system",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"systemId",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"uri",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 7:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"rewriteSystem",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"systemIdStartString",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"rewritePrefix",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 8:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"delegatePublic",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"publicIdStartString",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"catalog",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 9:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"delegateSystem",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"systemIdStartString",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"catalog",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 10:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"uri",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"name",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"uri",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 0xb:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"rewriteURI",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"uriStartString",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"rewritePrefix",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
    break;
  case 0xc:
    pxVar2 = _xmlNewDocNode(param_3,param_4,(xmlChar *)"delegateURI",(xmlChar *)0x0);
    _xmlSetProp(pxVar2,(xmlChar *)"uriStartString",(xmlChar *)local_18[4]);
    _xmlSetProp(pxVar2,(xmlChar *)"catalog",(xmlChar *)local_18[5]);
    _xmlAddChild(param_2,pxVar2);
  }
switchD_100903046_caseD_ffffffff:
  local_18 = (undefined8 *)*local_18;
  goto LAB_1009034dd;
}

