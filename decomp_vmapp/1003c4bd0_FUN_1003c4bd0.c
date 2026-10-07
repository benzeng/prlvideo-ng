
void FUN_1003c4bd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_3 + 8);
  lVar3 = *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    if (lVar2 != lVar3) {
      lVar5 = *(long *)(lVar3 + 0x10);
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar3 + 8);
      *(long *)(*(long *)(lVar3 + 8) + 0x10) = lVar5;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(long *)(lVar3 + 8) = param_1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      lVar5 = **(long **)(lVar3 + 0x50);
      if (lVar5 != 0) {
        do {
          lVar1 = lVar5 + 0x10;
          lVar4 = *(long *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 0x18);
          *(long *)(*(long *)(lVar5 + 0x18) + 0x10) = lVar4;
          *(long *)(lVar5 + 0x20) = lVar1;
          *(long *)(lVar5 + 8) = lVar2;
          *(long *)(lVar5 + 0x18) = lVar2 + 0x48;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar2 + 0x58);
          *(long *)(*(long *)(lVar2 + 0x58) + 8) = lVar1;
          *(long *)(lVar2 + 0x58) = lVar1;
          lVar5 = **(long **)(lVar3 + 0x50);
        } while (lVar5 != 0);
      }
      lVar5 = **(long **)(lVar3 + 0x68);
      if (lVar5 != 0) {
        do {
          lVar1 = lVar5 + 0x10;
          lVar4 = *(long *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 0x18);
          *(long *)(*(long *)(lVar5 + 0x18) + 0x10) = lVar4;
          *(long *)(lVar5 + 0x20) = lVar1;
          *(long *)(lVar5 + 8) = lVar2;
          *(long *)(lVar5 + 0x18) = lVar2 + 0x60;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar2 + 0x70);
          *(long *)(*(long *)(lVar2 + 0x70) + 8) = lVar1;
          *(long *)(lVar2 + 0x70) = lVar1;
          lVar5 = **(long **)(lVar3 + 0x68);
        } while (lVar5 != 0);
      }
    }
    return;
  }
  lVar2 = param_3 + 0x10;
  lVar5 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(param_3 + 0x18);
  *(long *)(*(long *)(param_3 + 0x18) + 0x10) = lVar5;
  *(long *)(param_3 + 0x20) = lVar2;
  *(long *)(param_3 + 8) = lVar3;
  *(long *)(param_3 + 0x18) = lVar3 + 0x60;
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(*(long *)(lVar3 + 0x70) + 8) = lVar2;
  *(long *)(lVar3 + 0x70) = lVar2;
  return;
}

