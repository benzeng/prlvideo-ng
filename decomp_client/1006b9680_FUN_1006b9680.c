
undefined4 FUN_1006b9680(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x38);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = *(uint *)((long)puVar1 + 0x24) ^ param_2;
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (*(uint *)((long)puVar2 + 0xc) == param_2)) {
        if (puVar2 == puVar1) {
          return 0;
        }
        return *(undefined4 *)(puVar2 + 2);
      }
    }
  }
  return 0;
}

