
int FUN_1001d9cfc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 4;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x58) * 8);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_1001d7cf4(param_1,"allocating counter");
      *(undefined4 *)(param_1 + 0x58) = 0;
      return -1;
    }
  }
  else if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 2;
    lVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x58) * 8);
    if (lVar3 == 0) {
      FUN_1001d7cf4(param_1,"allocating counter");
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) / 2;
      return -1;
    }
    *(long *)(param_1 + 0x60) = lVar3;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x5c) * 8) = 0xffffffff;
  *(undefined4 *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x5c) * 8 + 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = iVar1 + 1;
  return iVar1;
}

