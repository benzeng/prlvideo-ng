
undefined8 FUN_10035de90(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (param_2 == 0) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 4) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x50) == 0) {
      return 0;
    }
  }
  else {
    lVar4 = 0;
    if ((lVar1 != 0) && (lVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
      lVar4 = *(long *)(param_1 + 0x50);
    }
    if (lVar4 != param_2) {
      return 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x58);
  uVar3 = (undefined7)((ulong)lVar1 >> 8);
  if (param_3 == 0) {
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else if (*(int *)(lVar1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71(uVar3,*(long *)(param_1 + 0x60) != 0);
    }
  }
  else {
    lVar4 = 0;
    if ((lVar1 != 0) && (lVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
      lVar4 = *(long *)(param_1 + 0x60);
    }
    uVar2 = CONCAT71(uVar3,lVar4 == param_3);
  }
  return uVar2;
}

