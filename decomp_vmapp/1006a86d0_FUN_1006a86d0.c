
undefined8 FUN_1006a86d0(undefined8 *param_1,long param_2,uint param_3,ulong param_4,ulong param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  bVar9 = (byte)uVar2;
  lVar11 = 1L << (bVar9 & 0x3f);
  uVar8 = 0x80000018;
  if ((uint)lVar11 == param_3) {
    if (((int)(lVar11 << 3) - 1U & ((uint)param_5 | (uint)param_4)) == 0) {
      iVar7 = FUN_1007db4c0(*param_1,param_2,(int)(param_5 - 1 >> (bVar9 & 0x3f)) + 1,
                            param_4 >> (bVar9 & 0x3f) & 0xffffffff);
      uVar8 = 0;
      if (iVar7 != 0) {
        if (iVar7 == -0xc) {
          uVar8 = 0x80000002;
        }
        else if (iVar7 == -0x16) {
          uVar8 = 0x80000003;
        }
        else {
          uVar8 = 0x80000001;
        }
      }
    }
    else {
      uVar8 = 0;
      if (param_4 < param_5) {
        uVar12 = CONCAT44(0,param_3);
        uVar10 = 0;
        while( true ) {
          iVar7 = FUN_1007db390(*param_1,param_4 + uVar10 >> ((byte)uVar2 & 0x3f));
          if (0 < iVar7) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar10;
            puVar1 = (uint *)(param_2 + (SUB168(auVar5 / auVar4,0) >> 3 & 0x1ffffffc));
            *puVar1 = *puVar1 | 1 << (SUB161(auVar5 / auVar4,0) & 0x1f);
            auVar3._8_4_ = 0;
            auVar3._0_8_ = uVar12;
            auVar6._8_4_ = 0;
            auVar6._0_8_ = (uVar12 - 1) + uVar10;
            puVar1 = (uint *)(param_2 + (SUB128(auVar6 / auVar3,0) >> 3 & 0x1ffffffc));
            *puVar1 = *puVar1 | 1 << (SUB121(auVar6 / auVar3,0) & 0x1f);
          }
          uVar8 = 0;
          if (param_5 <= uVar12 + param_4 + uVar10) break;
          uVar2 = *(undefined4 *)(param_1 + 1);
          uVar10 = uVar10 + uVar12;
        }
      }
    }
  }
  return uVar8;
}

