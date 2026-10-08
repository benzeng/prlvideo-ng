
undefined8 FUN_100130110(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  lVar2 = *param_1;
  uVar3 = (ulong)*(uint *)(lVar2 + 8);
  lVar4 = 0;
  if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    iVar5 = 0;
    do {
      iVar1 = FUN_10012f780(**(undefined8 **)(lVar2 + 0x10 + ((int)uVar3 + lVar4) * 8));
      iVar5 = iVar5 + (uint)(iVar1 - 1U < 2);
      lVar4 = lVar4 + 1;
      lVar2 = *param_1;
      uVar3 = (ulong)*(int *)(lVar2 + 8);
    } while (lVar4 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
  }
  else {
    iVar5 = 0;
  }
  return CONCAT71((int7)((ulong)lVar2 >> 8),iVar5 < param_2);
}

