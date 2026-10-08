
int FUN_100980086(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8)) {
    lVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x10),(long)*(int *)(param_1 + 0xc) * 0x30);
    if (lVar2 == 0) {
      return -1;
    }
    *(long *)(param_1 + 0x10) = lVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) * 2;
  }
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 0x18);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *puVar1 = param_4;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return *(int *)(param_1 + 8) + -1;
}

