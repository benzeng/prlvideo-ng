
undefined4
FUN_1009d01b0(undefined8 *param_1,byte *param_2,undefined8 *param_3,ulong *param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte bVar8;
  
  pbVar7 = (byte *)*param_1;
  puVar6 = (ulong *)*param_3;
  uVar2 = 0;
  do {
    if (param_2 <= pbVar7) {
LAB_1009d0393:
      *param_1 = pbVar7;
      *param_3 = puVar6;
      return uVar2;
    }
    bVar8 = *pbVar7;
    uVar4 = (ulong)((int)(char)(&DAT_101ccdb20)[bVar8] & 0xffffU);
    if (param_2 <= pbVar7 + uVar4) {
      uVar2 = 1;
      goto LAB_1009d0393;
    }
    uVar5 = ((int)(char)(&DAT_101ccdb20)[bVar8] & 0xffffU) + 1;
    cVar1 = FUN_1009cfcd0(pbVar7,uVar5);
    if (cVar1 == '\0') {
      uVar2 = 3;
      goto LAB_1009d0393;
    }
    lVar3 = 0;
    switch(uVar4) {
    case 5:
      lVar3 = (ulong)bVar8 << 6;
      bVar8 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    case 4:
      lVar3 = ((ulong)bVar8 + lVar3) * 0x40;
      bVar8 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    case 3:
      lVar3 = ((ulong)bVar8 + lVar3) * 0x40;
      bVar8 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    case 2:
      lVar3 = ((ulong)bVar8 + lVar3) * 0x40;
      bVar8 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    case 1:
      lVar3 = ((ulong)bVar8 + lVar3) * 0x40;
      bVar8 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    case 0:
      pbVar7 = pbVar7 + 1;
      lVar3 = lVar3 + (ulong)bVar8;
    }
    if (param_4 <= puVar6) {
      pbVar7 = pbVar7 + -(ulong)uVar5;
      uVar2 = 2;
      goto LAB_1009d0393;
    }
    uVar4 = lVar3 - *(long *)(&DAT_101ccdc20 + uVar4 * 8);
    if (uVar4 < 0x110000) {
      if (((uVar4 & 0xfffffffffffff800) == 0xd800) && (param_5 == 0)) {
        pbVar7 = pbVar7 + -(ulong)uVar5;
        uVar2 = 3;
        goto LAB_1009d0393;
      }
      if ((uVar4 & 0xfffffffffffff800) == 0xd800) {
        uVar4 = 0xfffd;
      }
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    else {
      *puVar6 = 0xfffd;
      puVar6 = puVar6 + 1;
      uVar2 = 3;
    }
  } while( true );
}

