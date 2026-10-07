
void FUN_1003786d0(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  if (puVar4 == (ushort *)0x0) {
    puVar4 = *(ushort **)(param_1 + 8);
  }
  FUN_10038e8e0(param_2,"%c_%u_%d_%d_",(int)*param_1,*(undefined4 *)(puVar4 + 2),puVar4[1],*puVar4);
  lVar2 = 4;
  if (4 < *puVar4) {
    do {
      uVar1 = (ulong)*(byte *)((long)puVar4 + lVar2);
      if ("ABEFIGKLDOShMZRgXpPmnYxuQjils"[uVar1] == 0) {
        pcVar3 = "%.2x";
      }
      else {
        pcVar3 = "%c";
        uVar1 = (ulong)(byte)"ABEFIGKLDOShMZRgXpPmnYxuQjils"[uVar1];
      }
      FUN_10038e8e0(param_2,pcVar3,uVar1);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)*puVar4);
  }
  FUN_10038e8e0(param_2,".txt");
  return;
}

