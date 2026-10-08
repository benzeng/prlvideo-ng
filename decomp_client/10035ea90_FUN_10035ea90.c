
undefined8 FUN_10035ea90(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    uVar3 = 0;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_100319390();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar3 = FUN_100319c50(uVar3);
      cVar1 = FUN_100330a50(uVar3);
      uVar3 = 1;
      if (cVar1 == '\0') {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
        }
        uVar3 = FUN_100319c50(uVar3);
        uVar3 = FUN_100330b70(uVar3);
      }
    }
  }
  return uVar3;
}

