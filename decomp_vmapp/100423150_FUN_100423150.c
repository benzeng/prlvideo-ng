
undefined8
FUN_100423150(undefined8 *param_1,byte *param_2,undefined8 *param_3,short *param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  short *psVar8;
  
  pbVar3 = (byte *)*param_1;
  psVar8 = (short *)*param_3;
  do {
    uVar2 = 0;
    if (param_2 <= pbVar3) {
LAB_10042331c:
      *param_1 = pbVar3;
      *param_3 = psVar8;
      return uVar2;
    }
    bVar7 = *pbVar3;
    uVar5 = (ulong)((int)(char)(&DAT_100b41fa0)[bVar7] & 0xffffU);
    uVar2 = 1;
    if (param_2 <= pbVar3 + uVar5) goto LAB_10042331c;
    uVar4 = ((int)(char)(&DAT_100b41fa0)[bVar7] & 0xffffU) + 1;
    cVar1 = FUN_100423010();
    uVar2 = 3;
    if (cVar1 == '\0') goto LAB_10042331c;
    lVar6 = 0;
    switch(uVar5) {
    case 5:
      lVar6 = (ulong)bVar7 << 6;
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    case 4:
      lVar6 = ((ulong)bVar7 + lVar6) * 0x40;
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    case 3:
      lVar6 = ((ulong)bVar7 + lVar6) * 0x40;
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    case 2:
      lVar6 = ((ulong)bVar7 + lVar6) * 0x40;
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    case 1:
      lVar6 = ((ulong)bVar7 + lVar6) * 0x40;
      bVar7 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    case 0:
      pbVar3 = pbVar3 + 1;
      lVar6 = lVar6 + (ulong)bVar7;
    }
    if (param_4 <= psVar8) {
LAB_100423309:
      pbVar3 = pbVar3 + -(ulong)uVar4;
      uVar2 = 2;
      goto LAB_10042331c;
    }
    uVar5 = lVar6 - *(long *)(&DAT_100b420a0 + uVar5 * 8);
    if (uVar5 < 0x10000) {
      if ((uVar5 & 0xfffffffffffff800) == 0xd800) {
LAB_1004232a9:
        if (param_5 == 0) {
          pbVar3 = pbVar3 + -(ulong)uVar4;
          goto LAB_10042331c;
        }
        *psVar8 = -3;
      }
      else {
        *psVar8 = (short)uVar5;
      }
      psVar8 = psVar8 + 1;
    }
    else {
      if (0x10ffff < uVar5) goto LAB_1004232a9;
      if (param_4 <= psVar8 + 1) goto LAB_100423309;
      uVar4 = (int)uVar5 - 0x10000;
      *psVar8 = (short)(uVar4 >> 10) + -0x2800;
      psVar8[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
      psVar8 = psVar8 + 2;
    }
  } while( true );
}

