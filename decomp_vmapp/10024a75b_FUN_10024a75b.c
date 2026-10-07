
undefined4 FUN_10024a75b(int *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 2) == 0) || (param_1[1] < 1)) {
    param_1[1] = 4;
    *param_1 = 0;
    uVar2 = (*(code *)_xmlMalloc)(0x40);
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  else if (param_1[1] <= *param_1) {
    lVar3 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 2),(long)param_1[1] << 5);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    *(long *)(param_1 + 2) = lVar3;
    param_1[1] = param_1[1] * 2;
  }
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)*param_1 * 0x10) = param_2;
  iVar1 = *param_1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 0x10 + 8) = param_3;
  *param_1 = iVar1 + 1;
  return 0;
}

