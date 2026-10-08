
long FUN_100904ad0(undefined4 param_1,char *param_2)

{
  xmlGenericErrorFunc pxVar1;
  uint uVar2;
  int iVar3;
  xmlDocPtr doc;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  xmlNodePtr node;
  long lVar6;
  xmlChar *str1;
  undefined4 local_3c;
  
  if (param_2 != (char *)0x0) {
    doc = _xmlParseCatalogFile(param_2);
    if (doc == (xmlDocPtr)0x0) {
      if (DAT_102312c80 != 0) {
        ppxVar4 = ___xmlGenericError();
        pxVar1 = *ppxVar4;
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar5,"Failed to parse catalog %s\n",param_2);
      }
    }
    else {
      if (DAT_102312c80 != 0) {
        ppxVar4 = ___xmlGenericError();
        pxVar1 = *ppxVar4;
        uVar2 = _xmlGetThreadId();
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar5,"%d Parsing catalog %s\n",(ulong)uVar2,param_2);
      }
      node = _xmlDocGetRootElement(doc);
      if ((((node != (xmlNodePtr)0x0) &&
           (iVar3 = _xmlStrEqual(node->name,(xmlChar *)"catalog"), iVar3 != 0)) &&
          (node->ns != (xmlNs *)0x0)) &&
         ((node->ns->href != (xmlChar *)0x0 &&
          (iVar3 = _xmlStrEqual(node->ns->href,
                                (xmlChar *)"urn:oasis:names:tc:entity:xmlns:xml:catalog"),
          iVar3 != 0)))) {
        lVar6 = FUN_100902893(1,0,param_2,0,param_1,0);
        if (lVar6 != 0) {
          str1 = _xmlGetProp(node,(xmlChar *)"prefer");
          local_3c = param_1;
          if (str1 != (xmlChar *)0x0) {
            iVar3 = _xmlStrEqual(str1,(xmlChar *)"system");
            if (iVar3 == 0) {
              iVar3 = _xmlStrEqual(str1,(xmlChar *)"public");
              if (iVar3 == 0) {
                FUN_1009027d4(0,node,0x674,"Invalid value for prefer: \'%s\'\n",str1,0,0);
              }
              else {
                local_3c = 1;
              }
            }
            else {
              local_3c = 2;
            }
            (*(code *)_xmlFree)(str1);
          }
          FUN_100904a54(node->children,local_3c,lVar6,0);
          _xmlFreeDoc(doc);
          return lVar6;
        }
        _xmlFreeDoc(doc);
        return 0;
      }
      FUN_1009027d4(0,doc,0x675,"File %s is not an XML Catalog\n",param_2,0,0);
      _xmlFreeDoc(doc);
    }
  }
  return 0;
}

