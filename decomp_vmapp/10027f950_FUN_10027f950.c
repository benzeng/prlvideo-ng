
long FUN_10027f950(undefined8 param_1,uint *param_2,long param_3,char param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar2 = FUN_100257d80();
  bVar1 = *(byte *)(lVar2 + 0x31c1c);
  if (bVar1 != 0) {
    uVar4 = *param_2;
    uVar3 = 0;
    do {
      uVar5 = (ulong)uVar4;
      if (uVar4 == bVar1) {
        uVar5 = 0;
      }
      uVar4 = (int)uVar5 + 1;
      if (*(char *)(param_3 + 7 + uVar5 * 8) == param_4) {
        *param_2 = uVar4;
        return param_3 + uVar5 * 8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < bVar1);
  }
  return 0;
}

