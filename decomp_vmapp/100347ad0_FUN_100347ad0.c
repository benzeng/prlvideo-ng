
undefined8 FUN_100347ad0(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  uVar3 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar3 = 7;
    for (puVar2 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
        puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 4)) {
      if (*puVar2 == uVar1) {
        if (*(long *)(puVar2 + 2) == 0) {
          return 7;
        }
        if (*(char *)(*(long *)(*(long *)(puVar2 + 2) + 8) + 0xac) == '\0') {
          return 0;
        }
        FUN_10035f3e0(*(undefined8 *)(param_1 + 0x2778));
        return 0;
      }
    }
  }
  return uVar3;
}

