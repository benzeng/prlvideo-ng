
undefined4
FUN_10024a210(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x28) <= *(int *)(param_2 + 0x24)) {
    lVar1 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x28) * 0x30);
    if (lVar1 == 0) {
      return 0xffffffff;
    }
    *(long *)(param_2 + 0x30) = lVar1;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) * 2;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_2 + 0x24) * 0x18) = param_3;
  *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_2 + 0x24) * 0x18 + 8) = param_4;
  *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_2 + 0x24) * 0x18 + 0x10) =
       param_5;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return 0;
}

