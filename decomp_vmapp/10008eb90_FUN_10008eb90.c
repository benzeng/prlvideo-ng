
void FUN_10008eb90(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  *(long *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  if (param_3 != 0) {
    *(code **)(param_2 + 8) = FUN_100090790;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(code **)(param_2 + 0x18) = FUN_1000907a0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    lVar2 = 0x50;
    if (1 < *(uint *)(param_1 + 0x18)) {
      uVar3 = 1;
      do {
        lVar1 = *(long *)(param_1 + 0x10);
        *(code **)(lVar1 + -0x10 + lVar2) = FUN_100090790;
        *(undefined8 *)(lVar1 + -8 + lVar2) = 0;
        *(code **)(lVar1 + lVar2) = FUN_1000907a0;
        *(undefined8 *)(lVar1 + 8 + lVar2) = 0;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x38;
      } while (uVar3 < *(uint *)(param_1 + 0x18));
    }
  }
  return;
}

