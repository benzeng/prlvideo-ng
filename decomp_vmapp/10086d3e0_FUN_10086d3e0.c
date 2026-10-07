
uint FUN_10086d3e0(void *param_1,uint param_2,void *param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((int)(param_4 | param_2) < 0) {
    return 0xffffffff;
  }
  if (((int)param_4 <= param_5) && (10 < param_5)) {
    pbVar2 = (byte *)FUN_10081ddd0(param_5,"rsa_pk1.c",0xce);
    if (pbVar2 == (byte *)0x0) {
      uVar4 = 0x41;
      uVar7 = 0xd0;
      goto LAB_10086d553;
    }
    ___bzero(pbVar2,(long)param_5);
    _memcpy(pbVar2 + ((long)param_5 - (long)(int)param_4),param_3,(long)(int)param_4);
    uVar1 = 0;
    if (2 < param_5) {
      uVar1 = 0;
      lVar6 = 2;
      uVar3 = 0;
      do {
        uVar5 = (int)(pbVar2[lVar6] - 1) >> 0x1f;
        uVar1 = (~uVar5 | uVar3) & uVar1 | ~uVar3 & (uint)lVar6 & uVar5;
        uVar3 = uVar3 | uVar5;
        lVar6 = lVar6 + 1;
      } while (param_5 != (int)lVar6);
    }
    uVar3 = param_5 - (uVar1 + 1);
    if ((~((int)((param_2 - uVar3 ^ uVar3 | uVar3 ^ param_2) ^ param_2) >> 0x1f) &
        (int)((pbVar2[1] ^ 2) - 1 & *pbVar2 - 1) >> 0x1f & ~((int)(~uVar1 & uVar1 - 10) >> 0x1f)) ==
        0) {
      FUN_10081e1a0(pbVar2);
    }
    else {
      _memcpy(param_1,pbVar2 + (int)(uVar1 + 1),(long)(int)uVar3);
      FUN_10081e1a0(pbVar2);
      if (uVar3 != 0xffffffff) {
        return uVar3;
      }
    }
  }
  uVar4 = 0x9f;
  uVar7 = 0x111;
LAB_10086d553:
  FUN_100887ce0(4,0x71,uVar4,"rsa_pk1.c",uVar7);
  return 0xffffffff;
}

