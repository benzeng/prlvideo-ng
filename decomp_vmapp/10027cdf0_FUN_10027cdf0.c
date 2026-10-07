
bool FUN_10027cdf0(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = FUN_1006bcf20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x170),
                        *(undefined8 *)(param_1 + 0x10));
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x20) == *(int *)(lVar1 + 0x1c)) {
      *(undefined4 *)(lVar1 + 0xc) = 0;
      iVar2 = 1;
      FUN_100279c80(*(undefined8 *)(param_1 + 8),1);
    }
  }
  return iVar2 != 0;
}

