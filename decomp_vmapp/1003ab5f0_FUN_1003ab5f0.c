
void FUN_1003ab5f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = **(long **)(param_2 + 0x50);
  if (lVar3 != 0) {
    do {
      lVar1 = lVar3 + 0x10;
      lVar2 = *(long *)(lVar3 + 0x20);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 0x18);
      *(long *)(*(long *)(lVar3 + 0x18) + 0x10) = lVar2;
      *(long *)(lVar3 + 0x20) = lVar1;
      *(long *)(lVar3 + 8) = param_1;
      *(long *)(lVar3 + 0x18) = param_1 + 0x48;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x58);
      *(long *)(*(long *)(param_1 + 0x58) + 8) = lVar1;
      *(long *)(param_1 + 0x58) = lVar1;
      lVar3 = **(long **)(param_2 + 0x50);
    } while (lVar3 != 0);
  }
  lVar3 = **(long **)(param_2 + 0x68);
  if (lVar3 != 0) {
    do {
      lVar1 = lVar3 + 0x10;
      lVar2 = *(long *)(lVar3 + 0x20);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 0x18);
      *(long *)(*(long *)(lVar3 + 0x18) + 0x10) = lVar2;
      *(long *)(lVar3 + 0x20) = lVar1;
      *(long *)(lVar3 + 8) = param_1;
      *(long *)(lVar3 + 0x18) = param_1 + 0x60;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x70);
      *(long *)(*(long *)(param_1 + 0x70) + 8) = lVar1;
      *(long *)(param_1 + 0x70) = lVar1;
      lVar3 = **(long **)(param_2 + 0x68);
    } while (lVar3 != 0);
  }
  return;
}

