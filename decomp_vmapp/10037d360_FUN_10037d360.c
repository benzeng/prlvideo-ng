
long * FUN_10037d360(long *param_1,long param_2,int param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(param_3 * 4 + 3);
  lVar1 = *(long *)(param_2 + 0x40);
  if (((ulong)(*(long *)(param_2 + 0x48) - lVar1 >> 3) <= uVar4) ||
     (((((uVar2 = param_3 << 2, (param_4 & 1) == 0 ||
         (lVar3 = *(long *)(lVar1 + (ulong)uVar2 * 8), lVar3 == 0)) ||
        ((*(byte *)(lVar3 + 0x2d) & 6) != 0)) &&
       (((((param_4 & 2) == 0 || (lVar3 = *(long *)(lVar1 + (ulong)(uVar2 | 1) * 8), lVar3 == 0)) ||
         ((*(byte *)(lVar3 + 0x2d) & 6) != 0)) &&
        ((((param_4 & 4) == 0 || (lVar3 = *(long *)(lVar1 + (ulong)(uVar2 | 2) * 8), lVar3 == 0)) ||
         ((*(byte *)(lVar3 + 0x2d) & 6) != 0)))))) &&
      ((((param_4 & 8) == 0 || (lVar3 = *(long *)(lVar1 + uVar4 * 8), lVar3 == 0)) ||
       ((*(byte *)(lVar3 + 0x2d) & 6) != 0)))))) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  return param_1;
}

