
undefined8 FUN_10037eb20(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  iVar1 = 0x207;
  if (*(int *)(param_2 + 0x82d4) - 1U < 8) {
    iVar1 = *(int *)(param_2 + 0x82d4) + 0x1ff;
  }
  bVar2 = *(int *)(param_2 + 0x84d8) == 0x314d3241;
  fVar3 = DAT_100b39670;
  if (!bVar2) {
    fVar3 = (float)*(byte *)(param_2 + 0x82d0) / DAT_100b44ca0;
  }
  if (bVar2) {
    iVar1 = 0x206;
  }
  (*DAT_1011c56a8)(fVar3,iVar1);
  return 0;
}

