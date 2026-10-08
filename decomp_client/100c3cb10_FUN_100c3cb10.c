
undefined4 FUN_100c3cb10(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar4 = FUN_100c36a70();
  iVar2 = FUN_100c36a80(uVar4);
  uVar3 = 0;
  if (iVar2 == 0x197) {
    lVar5 = -1;
    do {
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + 1;
    } while (*(int *)(param_1 + 0x84 + lVar1) != 0);
    uVar6 = 0x2aa;
    if ((int)lVar5 != 2) {
      uVar6 = 0;
    }
    uVar3 = 0x2ab;
    if ((int)lVar5 != 4) {
      uVar3 = uVar6;
    }
  }
  return uVar3;
}

