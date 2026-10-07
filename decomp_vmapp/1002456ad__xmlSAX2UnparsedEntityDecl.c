
void _xmlSAX2UnparsedEntityDecl
               (void *ctx,xmlChar *name,xmlChar *publicId,xmlChar *systemId,xmlChar *notationName)

{
  xmlEntityPtr pxVar1;
  xmlChar *pxVar2;
  long local_20;
  long local_10;
  
  if (ctx != (void *)0x0) {
    if (*(int *)((long)ctx + 0x150) == 1) {
      pxVar1 = _xmlAddDocEntity(*(xmlDocPtr *)((long)ctx + 0x10),name,3,publicId,systemId,
                                notationName);
      if (((pxVar1 == (xmlEntityPtr)0x0) && (*(int *)((long)ctx + 0x1a4) != 0)) &&
         ((*(long *)ctx != 0 && (*(long *)(*(long *)ctx + 0xa8) != 0)))) {
        (**(code **)(*(long *)ctx + 0xa8))
                  (*(undefined8 *)((long)ctx + 8),
                   "Entity(%s) already defined in the internal subset\n",name);
      }
      if (((pxVar1 != (xmlEntityPtr)0x0) && (pxVar1->URI == (xmlChar *)0x0)) &&
         (systemId != (xmlChar *)0x0)) {
        local_20 = 0;
        if (*(long *)((long)ctx + 0x38) != 0) {
          local_20 = *(long *)(*(long *)((long)ctx + 0x38) + 8);
        }
        if (local_20 == 0) {
          local_20 = *(long *)((long)ctx + 0x118);
        }
        pxVar2 = (xmlChar *)_xmlBuildURI(systemId,local_20);
        pxVar1->URI = pxVar2;
      }
    }
    else if (*(int *)((long)ctx + 0x150) == 2) {
      pxVar1 = _xmlAddDtdEntity(*(xmlDocPtr *)((long)ctx + 0x10),name,3,publicId,systemId,
                                notationName);
      if ((((pxVar1 == (xmlEntityPtr)0x0) && (*(int *)((long)ctx + 0x1a4) != 0)) &&
          (*(long *)ctx != 0)) && (*(long *)(*(long *)ctx + 0xa8) != 0)) {
        (**(code **)(*(long *)ctx + 0xa8))
                  (*(undefined8 *)((long)ctx + 8),
                   "Entity(%s) already defined in the external subset\n",name);
      }
      if (((pxVar1 != (xmlEntityPtr)0x0) && (pxVar1->URI == (xmlChar *)0x0)) &&
         (systemId != (xmlChar *)0x0)) {
        local_10 = 0;
        if (*(long *)((long)ctx + 0x38) != 0) {
          local_10 = *(long *)(*(long *)((long)ctx + 0x38) + 8);
        }
        if (local_10 == 0) {
          local_10 = *(long *)((long)ctx + 0x118);
        }
        pxVar2 = (xmlChar *)_xmlBuildURI(systemId,local_10);
        pxVar1->URI = pxVar2;
      }
    }
    else {
      FUN_100244280(ctx,1,"SAX.xmlSAX2UnparsedEntityDecl(%s) called while not in subset\n",name,0);
    }
  }
  return;
}

