
undefined8 FUN_1002e78f0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = 7;
  if (*(int *)(param_1 + 0x128) == 0) {
    bVar1 = *(byte *)(param_1 + 0x12e);
    uVar4 = 1;
    lVar3 = 0x130;
    if (1 < (ulong)bVar1) {
      do {
        if (*(char *)(param_1 + lVar3) != '\0') {
          uVar4 = (ulong)((int)lVar3 - 0x12f);
          break;
        }
        uVar4 = lVar3 - 0x12e;
        lVar3 = lVar3 + 1;
      } while ((long)uVar4 < (long)(ulong)bVar1);
    }
    uVar2 = 4;
    if ((uint)uVar4 != (uint)bVar1) {
      FUN_1004103f0(0x52400,param_1 + 0x150,0x12,0);
      uVar2 = 5;
    }
  }
  return uVar2;
}

