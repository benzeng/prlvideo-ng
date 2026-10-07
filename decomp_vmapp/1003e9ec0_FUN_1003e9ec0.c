
int FUN_1003e9ec0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  lVar2 = 0;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0,2);
  lVar3 = (long)*(int *)(*(long *)(param_1 + 0x128) + 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + 0x128) + 0x10);
  if (0 < lVar3) {
    pcVar4 = (char *)(lVar1 + 7);
    lVar2 = 0;
    lVar5 = 0;
    do {
      if ((*pcVar4 == -0x5e) && (pcVar4[-3] == *(char *)(lVar1 + 3))) {
        lVar2 = (long)(int)lVar5;
        break;
      }
      lVar5 = lVar5 + 1;
      pcVar4 = pcVar4 + 0xb;
    } while (lVar5 < lVar3);
  }
  lVar2 = lVar2 * 0xb;
  return (uint)*(byte *)(lVar1 + 0xc + lVar2) * 0x1194 + -0x96 +
         (uint)*(byte *)(lVar1 + 0xd + lVar2) * 0x4b + (uint)*(byte *)(lVar1 + 0xe + lVar2);
}

