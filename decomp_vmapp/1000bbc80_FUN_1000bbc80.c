
undefined8 FUN_1000bbc80(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar5 = 0x80020009;
  if (iVar1 < 0x4e21) {
    if (0x1a < iVar1 - 0x3f0U) {
      return 0;
    }
    if ((0x4000019U >> (iVar1 - 0x3f0U & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  else if (iVar1 < 0x4e37) {
    uVar3 = iVar1 - 0x4e21;
    if (0xd < uVar3) {
      return 0;
    }
    if ((0x2b07U >> (uVar3 & 0x1f) & 1) == 0) {
      if ((0xa0U >> (uVar3 & 0x1f) & 1) == 0) {
        return 0;
      }
LAB_1000bbd17:
      FUN_10008f4d0(param_1);
      return 1;
    }
  }
  else if (iVar1 < 0x4e45) {
    if (iVar1 != 0x4e37) {
      if (iVar1 != 0x4e3b) {
        return 0;
      }
      goto LAB_1000bbd17;
    }
  }
  else if (iVar1 == 0x4e46) {
    uVar5 = 0;
    if (*(int *)(lVar2 + 0x28) != 0) {
      uVar5 = **(undefined4 **)(lVar2 + 0x30);
    }
    if (DAT_1011c36a0 == '\0') {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 4;
    }
    FUN_10008ec80(param_1,uVar4);
    FUN_10008f760(param_1,uVar5);
  }
  else {
    if (iVar1 != 0x4e45) {
      return 0;
    }
    if (DAT_1011c36a0 == '\0') {
      uVar5 = 0;
      FUN_1000a78a0(param_1,0);
    }
    else {
      FUN_100097c10(param_1);
      uVar5 = 0;
    }
  }
  FUN_10008f910(param_1,uVar5);
  return 1;
}

