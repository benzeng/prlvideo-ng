
undefined8 FUN_1002d6600(long *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] CreateEndPointsForInterface(%u,%u)",param_1 + 0x107,param_2,
                  param_3);
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] GetInterfaceDescriptor, if %u, altset %u",param_1 + 0x107,
                    param_2,param_3);
    }
  }
  pbVar1 = *(byte **)(*param_1 + 0x18);
  if (pbVar1 != (byte *)0x0) {
    for (pbVar4 = pbVar1; pbVar4 < pbVar1 + *(ushort *)(pbVar1 + 2); pbVar4 = pbVar4 + *pbVar4) {
      if (((pbVar4[1] == 4) && (pbVar4[2] == param_2)) && (pbVar4[3] == param_3)) {
        uVar3 = (uint)pbVar4[4];
        if (pbVar4[4] == 0) goto LAB_1002d6872;
        uVar5 = 0;
        pbVar6 = pbVar4;
        goto LAB_1002d6760;
      }
    }
  }
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,
                  "[%s] CreateEndPointsForInterface(%u,%u) there is no such interfaces decsriptor!",
                  param_1 + 0x107,param_2,param_3);
  }
  return 0;
LAB_1002d6760:
  bVar2 = *pbVar6;
  if (bVar2 == 0) {
LAB_1002d6872:
    FUN_1002d6b90(param_1,pbVar4);
    return 1;
  }
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,
                  "[%s] CreateEndPointsForInterface(%d,%d,%d) [%d] Descriptor: Type = %X (%X)  Length =%d"
                  ,param_1 + 0x107,param_2,param_3,uVar3,uVar5,pbVar6[1],5,bVar2);
    bVar2 = *pbVar6;
  }
  if (pbVar1 + *(ushort *)(pbVar1 + 2) < pbVar6 + bVar2) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,
                    "[%s] CreateEndPointsForInterface(%d,%d,%d) Incorrect Descriptor\'s Length!\n",
                    param_1 + 0x107,param_2,param_3,pbVar4[4]);
    }
    goto LAB_1002d6872;
  }
  if (pbVar6[1] == 5) {
    FUN_1002d69b0(param_1,pbVar6,pbVar4);
    uVar5 = uVar5 + 1;
    bVar2 = *pbVar6;
  }
  pbVar6 = pbVar6 + bVar2;
  uVar3 = (uint)pbVar4[4];
  if (uVar3 <= uVar5) goto LAB_1002d6872;
  goto LAB_1002d6760;
}

