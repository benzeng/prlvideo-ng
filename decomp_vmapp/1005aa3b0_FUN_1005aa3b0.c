
void FUN_1005aa3b0(uint *param_1,long param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar8 = CONCAT44(0,param_1[6]);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (ulong)param_1[8] + param_2;
  uVar6 = SUB168(auVar5 / auVar4,0);
  uVar9 = *param_3;
  *param_1 = *param_1 | param_4;
  uVar7 = SUB164(auVar5 / auVar4,0);
  uVar9 = (int)(((((ulong)uVar9 + 0x1ff >> 9) - 1) + ((ulong)param_1[8] + param_2) % uVar8 + uVar8)
               / uVar8) + uVar7;
  if (uVar7 < uVar9) {
    do {
      lVar3 = *(long *)(param_1 + 2);
      uVar8 = uVar6 >> 5 & 0x7ffffff;
      uVar7 = *(uint *)(lVar3 + uVar8 * 4);
      do {
        puVar1 = (uint *)(lVar3 + uVar8 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar10 = uVar7 == uVar2;
        if (bVar10) {
          *puVar1 = 1 << ((byte)uVar6 & 0x1f) | uVar7;
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        UNLOCK();
      } while (!bVar10);
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
    } while (uVar7 != uVar9);
  }
  return;
}

