
undefined8 FUN_100586100(long param_1,undefined8 param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x48) - lVar5;
    if (lVar2 != 0) {
      lVar3 = lVar2 * 0x40 + -1;
    }
    lVar2 = *(long *)(param_1 + 0x58);
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar3 - lVar2 == lVar4) {
      FUN_100599700(param_1 + 0x38);
      lVar4 = *(long *)(param_1 + 0x60);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar2 = *(long *)(param_1 + 0x58);
    }
    *(undefined8 *)
     (*(long *)(lVar5 + ((ulong)(lVar2 + lVar4) >> 9) * 8) + (lVar2 + lVar4 & 0x1ffU) * 8) = param_2
    ;
    *(long *)(param_1 + 0x60) = lVar4 + 1;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (uVar1 == 0) {
      FUN_100599230();
      uVar1 = *(ulong *)(param_1 + 0x58);
    }
    lVar2 = *(long *)(param_1 + 0x40);
    lVar5 = 0;
    lVar3 = *(long *)(lVar2 + (uVar1 >> 9) * 8);
    if (*(long *)(param_1 + 0x48) != lVar2) {
      lVar5 = lVar3 + (uVar1 & 0x1ff) * 8;
    }
    if (lVar5 == lVar3) {
      lVar5 = *(long *)(lVar2 + -8 + (uVar1 >> 9) * 8) + 0x1000;
    }
    *(undefined8 *)(lVar5 + -8) = param_2;
    *(ulong *)(param_1 + 0x58) = uVar1 - 1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  }
  return 0;
}

