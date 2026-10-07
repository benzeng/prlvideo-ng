
undefined8 FUN_10034d780(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  
  uVar4 = 9;
  if (7 < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar4 = 7;
    for (puVar5 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
        puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
      if (*puVar5 == uVar1) {
        if (*(long *)(puVar5 + 2) == 0) {
          return 7;
        }
        lVar2 = *(long *)(*(long *)(puVar5 + 2) + 8);
        if (lVar2 == 0) {
          return 4;
        }
        lVar3 = *(long *)(param_1 + 0x2778);
        FUN_10035c440(*(undefined8 *)(lVar3 + 8),lVar2);
        FUN_10035d690(*(undefined8 *)(lVar3 + 0xc0),lVar2);
        return 0;
      }
    }
  }
  return uVar4;
}

