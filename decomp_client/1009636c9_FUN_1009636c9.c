
undefined8 * FUN_1009636c9(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  int iVar1;
  xmlDocPtr doc;
  xmlChar *pxVar2;
  xmlNodePtr node;
  xmlAttrPtr pxVar3;
  long lVar4;
  undefined8 *local_48;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)(param_1 + 0xb8) <= local_c) {
      doc = _xmlReadFile((char *)param_2,(char *)0x0,0);
      if (doc == (xmlDocPtr)0x0) {
        FUN_100960ece(param_1,0,0x429,"xmlRelaxNG: could not load %s\n",param_2,0);
        local_48 = (undefined8 *)0x0;
      }
      else {
        local_48 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
        if (local_48 == (undefined8 *)0x0) {
          FUN_100960ece(param_1,doc,2,"xmlRelaxNG: allocate memory for doc %s\n",param_2,0);
          _xmlFreeDoc(doc);
          local_48 = (undefined8 *)0x0;
        }
        else {
          *local_48 = 0;
          local_48[1] = 0;
          local_48[2] = 0;
          local_48[3] = 0;
          local_48[4] = 0;
          local_48[2] = doc;
          pxVar2 = _xmlStrdup(param_2);
          local_48[1] = pxVar2;
          *local_48 = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 **)(param_1 + 0x70) = local_48;
          if (((param_3 != (xmlChar *)0x0) &&
              (node = _xmlDocGetRootElement(doc), node != (xmlNodePtr)0x0)) &&
             (pxVar3 = _xmlHasProp(node,(xmlChar *)"ns"), pxVar3 == (xmlAttrPtr)0x0)) {
            _xmlSetProp(node,(xmlChar *)"ns",param_3);
          }
          FUN_10096346b(param_1,local_48);
          lVar4 = FUN_10096e9ef(param_1,doc);
          if (lVar4 == 0) {
            *(undefined8 *)(param_1 + 0xb0) = 0;
            local_48 = (undefined8 *)0x0;
          }
          else {
            FUN_1009635e5(param_1);
          }
        }
      }
      return local_48;
    }
    iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)(param_1 + 0xc0) + (long)local_c * 8) + 8)
                         ,param_2);
    if (iVar1 != 0) break;
    local_c = local_c + 1;
  }
  FUN_100960ece(param_1,0,0x409,"Detected an externalRef recursion for %s\n",param_2,0);
  return (undefined8 *)0x0;
}

