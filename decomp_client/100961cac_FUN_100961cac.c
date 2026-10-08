
void FUN_100961cac(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if ((param_1 == 0) || (*(long *)(param_1 + 0x80) != 0)) {
      if ((param_1 != 0) && (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 0x78))) {
        lVar3 = (*(code *)_xmlRealloc)
                          (*(undefined8 *)(param_1 + 0x80),(long)*(int *)(param_1 + 0x7c) << 4);
        if (lVar3 == 0) {
          FUN_100960d45(param_1,"storing states\n");
          (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 8));
          (*(code *)_xmlFree)(param_2);
          return;
        }
        *(long *)(param_1 + 0x80) = lVar3;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) * 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 0x28;
      *(undefined4 *)(param_1 + 0x78) = 0;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x7c) * 8);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      if (*(long *)(param_1 + 0x80) == 0) {
        FUN_100960d45(param_1,"storing states\n");
      }
    }
    if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 8));
      (*(code *)_xmlFree)(param_2);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x78);
      *(long *)(*(long *)(param_1 + 0x80) + (long)iVar1 * 8) = param_2;
      *(int *)(param_1 + 0x78) = iVar1 + 1;
    }
  }
  return;
}

