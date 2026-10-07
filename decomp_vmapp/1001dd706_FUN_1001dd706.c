
void FUN_1001dd706(long param_1,xmlChar *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  xmlChar *pxVar4;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 4;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x48) << 4);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    if (*(long *)(param_1 + 0x68) == 0) {
      FUN_1001d7cf4(0,"pushing input string");
      *(undefined4 *)(param_1 + 0x48) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c) + 1) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) * 2;
    lVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x68),(long)*(int *)(param_1 + 0x48) << 4);
    if (lVar3 == 0) {
      FUN_1001d7cf4(0,"pushing input string");
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) / 2;
      return;
    }
    *(long *)(param_1 + 0x68) = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x4c);
  pxVar4 = _xmlStrdup(param_2);
  *(xmlChar **)(lVar3 + (long)iVar1 * 0x10) = pxVar4;
  *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x4c) * 0x10 + 8) = param_3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x4c) * 0x10) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x4c) * 0x10 + 8) = 0;
  return;
}

