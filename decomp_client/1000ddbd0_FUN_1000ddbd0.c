
ulong FUN_1000ddbd0(long param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = *(uint **)(param_1 + 0x58);
  if ((int)puVar1[2] < (int)puVar1[3]) {
    uVar2 = 0;
    do {
      if (1 < *puVar1) {
        FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar1[1]);
        puVar1 = *(uint **)(param_1 + 0x58);
      }
      if ((*(int *)(*(long *)(puVar1 + (uVar2 + (long)(int)puVar1[2]) * 2 + 4) + 0x30) == *param_2)
         && (*(int *)(*(long *)(puVar1 + (uVar2 + (long)(int)puVar1[2]) * 2 + 4) + 0x34) ==
             param_2[1])) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)puVar1[3] - (long)(int)puVar1[2]);
  }
  return 0xffffffff;
}

