
undefined8 FUN_100b30aa0(undefined8 *param_1,long param_2,uint param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  
  bVar5 = (byte)*(undefined4 *)(param_1 + 1);
  lVar6 = 1L << (bVar5 & 0x3f);
  uVar4 = 0x80000018;
  if ((uint)lVar6 == param_3) {
    if (((int)(lVar6 << 3) - 1U & ((uint)param_5 | (uint)param_4)) == 0) {
      iVar3 = FUN_100ddcbe0(*param_1,param_2,(int)(param_5 - 1 >> (bVar5 & 0x3f)) + 1,
                            param_4 >> (bVar5 & 0x3f) & 0xffffffff);
      uVar4 = 0;
      if (iVar3 != 0) {
        if (iVar3 == -0xc) {
          uVar4 = 0x80000002;
        }
        else if (iVar3 == -0x16) {
          uVar4 = 0x80000003;
        }
        else {
          uVar4 = 0x80000001;
        }
      }
    }
    else {
      uVar4 = 0;
      if (param_4 < param_5) {
        uVar7 = CONCAT44(0,param_3);
        do {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar7;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = param_4;
          if ((*(uint *)(param_2 + (SUB168(auVar2 / auVar1,0) >> 3 & 0x1ffffffc)) >>
               (SUB164(auVar2 / auVar1,0) & 0x1f) & 1) != 0) {
            FUN_100ddce60(*param_1,(int)((uVar7 - 1) + param_4 >> (*(byte *)(param_1 + 1) & 0x3f)) +
                                   1,param_4 >> (*(byte *)(param_1 + 1) & 0x3f));
          }
          param_4 = param_4 + uVar7;
          uVar4 = 0;
        } while (param_4 < param_5);
      }
    }
  }
  return uVar4;
}

