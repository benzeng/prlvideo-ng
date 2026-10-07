
undefined8 FUN_100423360(ulong *param_1,ulong *param_2,long *param_3,ulong param_4,int param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  puVar2 = (ulong *)*param_1;
  lVar3 = *param_3;
  uVar1 = 0;
  if (puVar2 < param_2) {
    uVar1 = 0;
    do {
      uVar5 = *puVar2;
      if ((param_5 == 0) && ((uVar5 & 0xfffffffffffff800) == 0xd800)) {
        uVar1 = 3;
        break;
      }
      uVar6 = 1;
      if ((((0x7f < uVar5) && (uVar6 = 2, 0x7ff < uVar5)) && (uVar6 = 3, 0xffff < uVar5)) &&
         (uVar6 = (uVar5 < 0x110000) + 3, 0x10ffff < uVar5)) {
        uVar5 = 0xfffd;
        uVar1 = 3;
      }
      uVar4 = (ulong)uVar6;
      if (param_4 < lVar3 + uVar4) {
        uVar1 = 2;
        break;
      }
      puVar2 = puVar2 + 1;
      uVar7 = uVar4;
      switch(uVar6) {
      case 4:
        uVar7 = uVar4 - 1;
        *(byte *)(lVar3 + -1 + uVar4) = (byte)uVar5 & 0x3f | 0x80;
        uVar5 = uVar5 >> 6;
      case 3:
        *(byte *)(lVar3 + -1 + uVar7) = (byte)uVar5 & 0x3f | 0x80;
        uVar7 = uVar7 - 1;
        uVar5 = uVar5 >> 6;
      case 2:
        *(byte *)(lVar3 + -1 + uVar7) = (byte)uVar5 & 0x3f | 0x80;
        uVar7 = uVar7 - 1;
        uVar5 = uVar5 >> 6;
      case 1:
        *(byte *)(lVar3 + -1 + uVar7) = (byte)uVar5 | (&DAT_100b41f90)[uVar4];
        uVar7 = uVar7 - 1;
      }
      lVar3 = lVar3 + uVar7 + uVar4;
    } while (puVar2 < param_2);
  }
  *param_1 = (ulong)puVar2;
  *param_3 = lVar3;
  return uVar1;
}

