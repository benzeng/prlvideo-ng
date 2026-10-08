
void FUN_100be0f50(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  long lVar2;
  short sVar3;
  
  if (param_1[0x12] == param_2) {
    puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
    *puVar1 = 1;
    lVar2 = *(long *)(param_1 + 0x22);
    sVar3 = *(short *)(lVar2 + 0x232);
    *(short *)(lVar2 + 0x230) = sVar3;
    param_1[0x18] = 1;
    if (*param_1 == 0x100) {
      *(short *)(lVar2 + 0x232) = sVar3 + 1;
      puVar1[1] = (char)((ushort)sVar3 >> 8);
      puVar1[2] = *(undefined1 *)(*(long *)(param_1 + 0x22) + 0x230);
      param_1[0x18] = param_1[0x18] + 2;
      lVar2 = *(long *)(param_1 + 0x22);
      sVar3 = *(short *)(lVar2 + 0x230);
    }
    param_1[0x19] = 0;
    *(undefined1 *)(lVar2 + 0x290) = 1;
    *(undefined8 *)(lVar2 + 0x298) = 0;
    *(short *)(lVar2 + 0x2a0) = sVar3;
    *(undefined8 *)(lVar2 + 0x2b0) = 0;
    *(undefined8 *)(lVar2 + 0x2a8) = 0;
    FUN_100be0d40(param_1,1);
    param_1[0x12] = param_3;
  }
  FUN_100bdfa50(param_1,0x14);
  return;
}

