
void _xmlXPathNodeSetAdd(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_1c;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined8 *)0x0)) {
    for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
      if (*(undefined8 **)(*(long *)(param_1 + 2) + (long)local_1c * 8) == param_2) {
        return;
      }
    }
    if (param_1[1] == 0) {
      uVar2 = (*(code *)_xmlMalloc)(0x50);
      *(undefined8 *)(param_1 + 2) = uVar2;
      if (*(long *)(param_1 + 2) == 0) {
        FUN_1008d87c3(0,"growing nodeset\n");
        return;
      }
      _memset(*(void **)(param_1 + 2),0,0x50);
      param_1[1] = 10;
    }
    else if (*param_1 == param_1[1]) {
      param_1[1] = param_1[1] * 2;
      lVar3 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 2),(long)param_1[1] * 8);
      if (lVar3 == 0) {
        FUN_1008d87c3(0,"growing nodeset\n");
        return;
      }
      *(long *)(param_1 + 2) = lVar3;
    }
    if (*(int *)(param_2 + 1) == 0x12) {
      uVar2 = FUN_1008dbce3(*param_2,param_2);
      iVar1 = *param_1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = uVar2;
      *param_1 = iVar1 + 1;
    }
    else {
      iVar1 = *param_1;
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = param_2;
      *param_1 = iVar1 + 1;
    }
  }
  return;
}

