
void FUN_1008f7f5a(long param_1,xmlDocPtr param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  xmlChar *pxVar4;
  xmlNodePtr pxVar5;
  int local_c;
  
  lVar2 = _xmlXIncludeNewContext(param_2);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar3 = (*(code *)_xmlMalloc)((long)*(int *)(lVar2 + 0x10) * 8);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    if (*(long *)(lVar2 + 0x18) == 0) {
      FUN_1008f6f28(param_1,param_2,"processing doc");
      (*(code *)_xmlFree)(lVar2);
    }
    else {
      *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
      pxVar4 = _xmlStrdup(*(xmlChar **)(param_1 + 0x60));
      *(xmlChar **)(lVar2 + 0x60) = pxVar4;
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0xc);
      for (local_c = 0; local_c < *(int *)(param_1 + 0xc); local_c = local_c + 1) {
        *(undefined8 *)(*(long *)(lVar2 + 0x18) + (long)local_c * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)local_c * 8);
        lVar1 = *(long *)(*(long *)(lVar2 + 0x18) + (long)local_c * 8);
        *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      }
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      pxVar5 = _xmlDocGetRootElement(param_2);
      FUN_1008fb17a(lVar2,param_2,pxVar5);
      for (local_c = 0; local_c < *(int *)(param_1 + 0xc); local_c = local_c + 1) {
        lVar1 = *(long *)(*(long *)(lVar2 + 0x18) + (long)local_c * 8);
        *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + -1;
        *(undefined8 *)(*(long *)(lVar2 + 0x18) + (long)local_c * 8) = 0;
      }
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(lVar2 + 0x44) = 0;
      *(undefined4 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      _xmlXIncludeFreeContext(lVar2);
    }
  }
  return;
}

