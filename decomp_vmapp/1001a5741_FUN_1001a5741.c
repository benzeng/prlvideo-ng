
int FUN_1001a5741(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,xmlChar *param_8,xmlChar *param_9)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  
  if (param_1[1] <= *param_1) {
    param_1[1] = param_1[1] * 2;
    lVar2 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 2),(long)param_1[1] * 0x38);
    if (lVar2 == 0) {
      param_1[1] = param_1[1] / 2;
      FUN_1001a4e9b(0,"adding step\n");
      return -1;
    }
    *(long *)(param_1 + 2) = lVar2;
  }
  param_1[4] = *param_1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 4) = param_2;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 8) = param_3;
  *(int *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38) = param_4;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0xc) = param_5;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x10) = param_6;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x14) = param_7;
  if ((*(long *)(param_1 + 8) == 0) || (((param_4 != 0xe && (param_4 != 0xd)) && (param_4 != 0xb))))
  {
    *(xmlChar **)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x18) = param_8;
    *(xmlChar **)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x20) = param_9;
  }
  else {
    if (param_8 == (xmlChar *)0x0) {
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x18) = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 2);
      iVar1 = *param_1;
      pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 8),param_8,-1);
      *(xmlChar **)(lVar2 + (long)iVar1 * 0x38 + 0x18) = pxVar3;
      (*(code *)_xmlFree)(param_8);
    }
    if (param_9 == (xmlChar *)0x0) {
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x20) = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 2);
      iVar1 = *param_1;
      pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 8),param_9,-1);
      *(xmlChar **)(lVar2 + (long)iVar1 * 0x38 + 0x20) = pxVar3;
      (*(code *)_xmlFree)(param_9);
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x38 + 0x28) = 0;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  return iVar1;
}

