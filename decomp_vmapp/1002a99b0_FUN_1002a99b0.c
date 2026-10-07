
undefined1
FUN_1002a99b0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int *param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  long lVar7;
  
  uVar4 = (param_5 + 7 >> 3) * param_3 + 3 & 0xfffffffc;
  if (*(uint *)(param_1 + 0x928) < uVar4 * param_4) {
    uVar3 = 0;
  }
  else {
    iVar6 = *param_6;
    lVar7 = (long)iVar6;
    if (lVar7 < 0x200) {
      lVar1 = *(long *)(param_1 + 0x910);
      if (0 < iVar6) {
        puVar5 = (ushort *)(lVar1 + 0x463e);
        lVar2 = 0;
        do {
          if (puVar5[-3] == param_2) {
            return 0;
          }
          if (((puVar5[-2] == param_3) && (puVar5[-1] == param_4)) && (*puVar5 == param_5)) {
            return 0;
          }
          lVar2 = lVar2 + 1;
          puVar5 = puVar5 + 6;
        } while (lVar2 < lVar7);
      }
      *(short *)(lVar1 + 0x4638 + lVar7 * 0xc) = (short)param_2;
      *(short *)(lVar1 + 0x463a + lVar7 * 0xc) = (short)param_3;
      *(short *)(lVar1 + 0x463c + lVar7 * 0xc) = (short)param_4;
      *(short *)(lVar1 + 0x463e + lVar7 * 0xc) = (short)param_5;
      *(short *)(lVar1 + 0x4640 + lVar7 * 0xc) = (short)uVar4;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",3,"[AddVideoMode] [%2d] 0x%3x %4dx%4d@%2d",lVar7,param_2,
                      param_3,param_4,param_5);
        iVar6 = *param_6;
      }
      *param_6 = iVar6 + 1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      FUN_1008e3970("","LocalDevices",0,"[AddVideoMode] Too many modes: %d");
    }
  }
  return uVar3;
}

