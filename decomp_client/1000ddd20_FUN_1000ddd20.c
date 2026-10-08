
void FUN_1000ddd20(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  if (1 < *puVar3) {
    FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar3[1]);
    puVar3 = *(uint **)(param_1 + 0x58);
  }
  lVar1 = *(long *)(puVar3 + ((long)param_2 + (long)(int)puVar3[2]) * 2 + 4);
  FUN_1000e5040(param_1 + 0x78,lVar1 + 0x10,lVar1 + 0x30);
  QTimer::start();
  cVar2 = FUN_1000ae490(lVar1 + 0x30);
  if (cVar2 != '\0') {
    FUN_1000ae4f0();
  }
  *(undefined4 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x34) = 0;
  *(byte *)(lVar1 + 0x24) = *(byte *)(lVar1 + 0x24) & 0xd7;
  return;
}

