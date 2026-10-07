
void FUN_1003fe690(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_2 + 0x38);
  FUN_100402390(*(undefined8 *)(param_1 + 0x840));
  uVar3 = *(undefined8 *)(param_1 + 0x840);
  if (*(int *)(lVar1 + 0x34) != 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x40);
    uVar4 = 0;
    do {
      FUN_100402710(uVar3,param_2,*(undefined8 *)(puVar2 + -2),*puVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(undefined8 *)(param_1 + 0x840);
      puVar2 = puVar2 + 4;
    } while (uVar4 < *(uint *)(lVar1 + 0x34));
  }
  FUN_100402b80(uVar3,param_2);
  if (*(int *)(param_1 + 0x878) != 0) {
    return;
  }
  FUN_100402d70(*(undefined8 *)(param_1 + 0x840));
  FUN_100402c40(*(undefined8 *)(param_1 + 0x840),param_2);
  return;
}

