
undefined8
FUN_100422df0(undefined8 *param_1,ushort *param_2,long *param_3,ulong param_4,int param_5)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  
  lVar4 = *param_3;
  uVar2 = 0;
  puVar1 = (ushort *)*param_1;
  do {
    if (param_2 <= puVar1) {
LAB_100422fae:
      *param_1 = puVar1;
      *param_3 = lVar4;
      return uVar2;
    }
    puVar9 = puVar1 + 1;
    uVar7 = (ulong)*puVar1;
    uVar3 = *puVar1 & 0xfc00;
    if (uVar3 == 0xd800) {
      if (param_2 <= puVar9) {
        uVar2 = 1;
        goto LAB_100422fae;
      }
      if ((*puVar9 & 0xfc00) == 0xdc00) {
        uVar7 = uVar7 * 0x400 + -0x35fdc00 + (ulong)*puVar9;
        puVar9 = puVar1 + 2;
      }
      else if (param_5 == 0) {
        uVar2 = 3;
        goto LAB_100422fae;
      }
    }
    else if ((param_5 == 0) && (uVar3 == 0xdc00)) {
      uVar2 = 3;
      goto LAB_100422fae;
    }
    uVar5 = 1;
    if ((((0x7f < uVar7) && (uVar5 = 2, 0x7ff < uVar7)) && (uVar5 = 3, 0xffff < uVar7)) &&
       (uVar5 = (uVar7 < 0x110000) + 3, 0x10ffff < uVar7)) {
      uVar7 = 0xfffd;
    }
    uVar6 = (ulong)uVar5;
    if (param_4 < lVar4 + uVar6) {
      uVar2 = 2;
      goto LAB_100422fae;
    }
    uVar8 = uVar6;
    switch(uVar5) {
    case 4:
      uVar8 = uVar6 - 1;
      *(byte *)(lVar4 + -1 + uVar6) = (byte)uVar7 & 0x3f | 0x80;
      uVar7 = uVar7 >> 6;
    case 3:
      *(byte *)(lVar4 + -1 + uVar8) = (byte)uVar7 & 0x3f | 0x80;
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 >> 6;
    case 2:
      *(byte *)(lVar4 + -1 + uVar8) = (byte)uVar7 & 0x3f | 0x80;
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 >> 6;
    case 1:
      *(byte *)(lVar4 + -1 + uVar8) = (byte)uVar7 | (&DAT_100b41f90)[uVar6];
      uVar8 = uVar8 - 1;
    default:
      lVar4 = lVar4 + uVar8 + uVar6;
      puVar1 = puVar9;
    }
  } while( true );
}

