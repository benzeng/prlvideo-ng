
undefined8 FUN_1007f1cd0(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x48) == 0x2200) {
    iVar2 = FUN_10087cd60(*(undefined8 *)(param_1 + 0x50),(long)*(int *)(param_1 + 0x210) + 8);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 5;
      return 0xffffffff;
    }
    puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
    *puVar1 = 0x16;
    puVar1[1] = (char)((uint)(*(int *)(param_1 + 0x210) + 4) >> 0x10);
    puVar1[2] = (char)((uint)(*(int *)(param_1 + 0x210) + 4) >> 8);
    puVar1[3] = (char)*(undefined4 *)(param_1 + 0x210) + '\x04';
    puVar1[4] = *(undefined1 *)(param_1 + 0x1ec);
    puVar1[5] = *(undefined1 *)(param_1 + 0x212);
    puVar1[6] = *(undefined1 *)(param_1 + 0x211);
    puVar1[7] = *(undefined1 *)(param_1 + 0x210);
    _memcpy(puVar1 + 8,*(void **)(param_1 + 0x208),(long)*(int *)(param_1 + 0x210));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x210) + 8;
    *(undefined4 *)(param_1 + 0x48) = 0x2201;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  uVar3 = FUN_1007fd930(param_1,0x16);
  return uVar3;
}

