
void FUN_1003620f0(long param_1,long param_2)

{
  long lVar1;
  uint3 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  FUN_10039e590(param_2,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
  uVar2 = *(uint3 *)(param_2 + 0xb0);
  if ((uVar2 & 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    if (*(long *)(lVar1 + 0x60) == param_2) {
      *(undefined4 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
    if (*(long *)(lVar1 + 0x80) == param_2) {
      *(undefined4 *)(lVar1 + 0x70) = 0;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x78) = 0;
    }
    if (*(long *)(lVar1 + 0xa0) == param_2) {
      *(undefined4 *)(lVar1 + 0x90) = 0;
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
    }
    if (*(long *)(lVar1 + 0xc0) == param_2) {
      *(undefined4 *)(lVar1 + 0xb0) = 0;
      *(undefined8 *)(lVar1 + 0xc0) = 0;
      *(undefined8 *)(lVar1 + 0xb8) = 0;
    }
    if (*(long *)(lVar1 + 0xe0) == param_2) {
      *(undefined4 *)(lVar1 + 0xd0) = 0;
      *(undefined8 *)(lVar1 + 0xe0) = 0;
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
    if (*(long *)(lVar1 + 0x100) == param_2) {
      *(undefined4 *)(lVar1 + 0xf0) = 0;
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0xf8) = 0;
    }
    return;
  }
  if ((uVar2 & 0x100) == 0) {
    if ((uVar2 & 0x80) == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x98);
    uVar3 = *(uint *)(lVar1 + 0x220);
    plVar4 = (long *)(lVar1 + 0x138);
    lVar5 = 0;
    do {
      if (plVar4[-2] == param_2) {
        *(undefined4 *)(plVar4 + -3) = 0;
        plVar4[-2] = 0;
        uVar3 = uVar3 | 1 << ((byte)lVar5 & 0x1f);
      }
      if (*plVar4 == param_2) {
        *(undefined4 *)(plVar4 + -1) = 0;
        *plVar4 = 0;
        uVar3 = uVar3 | 1 << ((byte)lVar5 + 1 & 0x1f);
      }
      lVar5 = lVar5 + 2;
      plVar4 = plVar4 + 4;
    } while (lVar5 != 0x10);
    *(uint *)(lVar1 + 0x220) = uVar3;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x98);
    if (*(long *)(lVar1 + 0x230) == param_2) {
      *(undefined4 *)(lVar1 + 0x228) = 0;
      *(undefined8 *)(lVar1 + 0x230) = 0;
      *(undefined4 *)(lVar1 + 0x238) = 0;
    }
  }
  FUN_100368c20(*(undefined8 *)(param_1 + 0xa8),**(undefined4 **)(param_2 + 0x58));
  return;
}

