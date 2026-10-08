
void _xmlSAX2Characters(void *ctx,xmlChar *ch,int len)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  xmlChar *pxVar4;
  xmlNodePtr pxVar5;
  
  if ((ctx != (void *)0x0) && (*(long *)((long)ctx + 0x50) != 0)) {
    pxVar5 = *(xmlNodePtr *)(*(long *)((long)ctx + 0x50) + 0x20);
    if (pxVar5 == (xmlNodePtr)0x0) {
      lVar3 = FUN_10097b086(ctx,ch,len);
      if (lVar3 == 0) {
        FUN_1009779d1(ctx,"xmlSAX2Characters");
      }
      else {
        *(long *)(*(long *)((long)ctx + 0x50) + 0x18) = lVar3;
        *(long *)(*(long *)((long)ctx + 0x50) + 0x20) = lVar3;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)((long)ctx + 0x50);
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(*(long *)((long)ctx + 0x50) + 0x40);
        *(int *)((long)ctx + 0x19c) = len;
        *(int *)((long)ctx + 0x1a0) = len + 1;
      }
    }
    else {
      if (((pxVar5 == (xmlNodePtr)0x0) || (pxVar5->type != XML_TEXT_NODE)) ||
         (pxVar5->name != "text")) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(int *)((long)ctx + 0x1a0) != 0)) {
        if ((_xmlAttr **)pxVar5->content == &pxVar5->properties) {
          pxVar4 = _xmlStrdup(pxVar5->content);
          pxVar5->content = pxVar4;
          pxVar5->properties = (_xmlAttr *)0x0;
        }
        else if ((*(int *)((long)ctx + 0x1a0) == *(int *)((long)ctx + 0x19c) + 1) &&
                (iVar2 = _xmlDictOwns(*(xmlDictPtr *)((long)ctx + 0x1c8),pxVar5->content),
                iVar2 != 0)) {
          pxVar4 = _xmlStrdup(pxVar5->content);
          pxVar5->content = pxVar4;
        }
        if (*(int *)((long)ctx + 0x1a0) <= *(int *)((long)ctx + 0x19c) + len) {
          iVar2 = (*(int *)((long)ctx + 0x1a0) + len) * 2;
          pxVar4 = (xmlChar *)(*(code *)_xmlRealloc)(pxVar5->content,(long)iVar2);
          if (pxVar4 == (xmlChar *)0x0) {
            FUN_1009779d1(ctx,"xmlSAX2Characters");
            return;
          }
          *(int *)((long)ctx + 0x1a0) = iVar2;
          pxVar5->content = pxVar4;
        }
        pxVar4 = pxVar5->content + *(int *)((long)ctx + 0x19c);
        for (lVar3 = (long)len; lVar3 != 0; lVar3 = lVar3 + -1) {
          *pxVar4 = *ch;
          ch = ch + 1;
          pxVar4 = pxVar4 + 1;
        }
        *(int *)((long)ctx + 0x19c) = *(int *)((long)ctx + 0x19c) + len;
        pxVar5->content[*(int *)((long)ctx + 0x19c)] = '\0';
      }
      else if (bVar1) {
        iVar2 = _xmlTextConcat(pxVar5,ch,len);
        if (iVar2 != 0) {
          FUN_1009779d1(ctx,"xmlSAX2Characters");
        }
        if (*(long *)(*(long *)((long)ctx + 0x50) + 0x18) != 0) {
          iVar2 = _xmlStrlen(pxVar5->content);
          *(int *)((long)ctx + 0x19c) = iVar2;
          *(int *)((long)ctx + 0x1a0) = *(int *)((long)ctx + 0x19c) + 1;
        }
      }
      else {
        pxVar5 = (xmlNodePtr)FUN_10097b086(ctx,ch,len);
        if ((pxVar5 != (xmlNodePtr)0x0) &&
           (_xmlAddChild(*(xmlNodePtr *)((long)ctx + 0x50),pxVar5),
           *(long *)(*(long *)((long)ctx + 0x50) + 0x18) != 0)) {
          *(int *)((long)ctx + 0x19c) = len;
          *(int *)((long)ctx + 0x1a0) = len + 1;
        }
      }
    }
  }
  return;
}

