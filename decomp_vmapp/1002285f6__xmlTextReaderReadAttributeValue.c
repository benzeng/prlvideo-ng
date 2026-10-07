
undefined4 _xmlTextReaderReadAttributeValue(long param_1)

{
  long lVar1;
  long lVar2;
  xmlNodePtr pxVar3;
  xmlChar *pxVar4;
  undefined4 local_34;
  
  if (param_1 == 0) {
    local_34 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_34 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    local_34 = 0;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x78) + 8) == 2) {
      if (*(long *)(*(long *)(param_1 + 0x78) + 0x18) == 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18);
    }
    else if (*(int *)(*(long *)(param_1 + 0x78) + 8) == 0x12) {
      lVar1 = *(long *)(param_1 + 0x78);
      if (*(long *)(param_1 + 0x88) == 0) {
        pxVar3 = _xmlNewDocText(*(xmlDocPtr *)(*(long *)(param_1 + 0x70) + 0x40),
                                *(xmlChar **)(lVar1 + 0x10));
        *(xmlNodePtr *)(param_1 + 0x88) = pxVar3;
      }
      else {
        if ((*(long *)(*(long *)(param_1 + 0x88) + 0x50) != 0) &&
           (*(long *)(*(long *)(param_1 + 0x88) + 0x50) != *(long *)(param_1 + 0x88) + 0x58)) {
          (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x50));
        }
        lVar2 = *(long *)(param_1 + 0x88);
        pxVar4 = _xmlStrdup(*(xmlChar **)(lVar1 + 0x10));
        *(xmlChar **)(lVar2 + 0x50) = pxVar4;
      }
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x88);
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0x78) + 0x30) == 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x30);
    }
    local_34 = 1;
  }
  return local_34;
}

