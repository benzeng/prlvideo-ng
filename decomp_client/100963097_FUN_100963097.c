
int FUN_100963097(long param_1,int param_2,xmlChar *param_3,xmlChar *param_4,int param_5)

{
  int *piVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  int local_40;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 8;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x54) * 0x28);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    if (*(long *)(param_1 + 0x58) == 0) {
      FUN_100960d45(param_1,"pushing error\n");
      return 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x58),(long)*(int *)(param_1 + 0x54) * 0x28);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    if (*(long *)(param_1 + 0x58) == 0) {
      FUN_100960d45(param_1,"pushing error\n");
      return 0;
    }
    *(long *)(param_1 + 0x48) =
         *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x28 + -0x28;
  }
  if ((((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x60) == 0)) ||
      (*(long *)(*(long *)(param_1 + 0x48) + 8) != **(long **)(param_1 + 0x60))) ||
     (**(int **)(param_1 + 0x48) != param_2)) {
    piVar1 = (int *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x28);
    *piVar1 = param_2;
    if (param_5 == 0) {
      *(xmlChar **)(piVar1 + 6) = param_3;
      *(xmlChar **)(piVar1 + 8) = param_4;
      piVar1[1] = 0;
    }
    else {
      pxVar3 = _xmlStrdup(param_3);
      *(xmlChar **)(piVar1 + 6) = pxVar3;
      pxVar3 = _xmlStrdup(param_4);
      *(xmlChar **)(piVar1 + 8) = pxVar3;
      piVar1[1] = 1;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
    }
    else {
      *(undefined8 *)(piVar1 + 2) = **(undefined8 **)(param_1 + 0x60);
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
    }
    *(int **)(param_1 + 0x48) = piVar1;
    local_40 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = local_40 + 1;
  }
  else {
    local_40 = *(int *)(param_1 + 0x50);
  }
  return local_40;
}

