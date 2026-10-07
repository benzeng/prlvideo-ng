
void FUN_100296b80(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1 + 0x137b8;
  FUN_100402390(lVar1);
  for (puVar2 = *(undefined8 **)(param_2 + 0x928); puVar2 != (undefined8 *)(param_2 + 0x928);
      puVar2 = (undefined8 *)*puVar2) {
    lVar3 = puVar2[9];
    puVar4 = (undefined8 *)(lVar3 + 0x80);
    if (*(short *)(puVar2[6] + 2) != 0) {
      do {
        FUN_100402710(lVar1,param_2,*puVar4,(*(uint *)((long)puVar4 + 0xc) & 0x3fffff) + 1);
        puVar4 = puVar4 + 2;
      } while (puVar4 != (undefined8 *)(lVar3 + 0x80) + (ulong)*(ushort *)(puVar2[6] + 2) * 2);
    }
  }
  FUN_100402b80(lVar1,param_2);
  FUN_10025b2f0(param_1 + 0x68,(*(uint *)(param_2 + 0x908) & 1) + 1);
  return;
}

