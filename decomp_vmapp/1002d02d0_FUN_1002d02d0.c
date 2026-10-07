
void FUN_1002d02d0(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(uint *)(*param_2 + 4 + lVar3 * 4);
    if ((int)uVar2 < 0) {
      *(uint *)(*param_2 + 4 + lVar3 * 4) = uVar2 & 0xf000ffff;
      if ((*(byte *)(*param_2 + 5 + lVar3 * 4) & 0x80) != 0) {
        *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
      }
      puVar1 = (uint *)(*param_2 + 4 + lVar3 * 4);
      *puVar1 = *puVar1 & 0x7fffffff;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  return;
}

