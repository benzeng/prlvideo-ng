
undefined8 FUN_10039f080(uint *param_1,uint param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  
  uVar2 = *param_1;
  uVar9 = (**(code **)(*param_3 + 0x18))(param_3,uVar2);
  if ((int)uVar9 == 0) {
    if (1 < param_2) {
      puVar11 = param_1 + 1;
      do {
        uVar3 = *puVar11;
        uVar8 = uVar3 & 0xffff;
        if (uVar8 < 0xfffe) {
          if (1 < uVar8 - 0x2f) {
            if (uVar8 == 0x1f) {
              uVar9 = (**(code **)(*param_3 + 0x20))(param_3,puVar11[1],puVar11[2]);
              if ((int)uVar9 != 0) {
                return uVar9;
              }
              puVar11 = puVar11 + 3;
              goto LAB_10039f1c0;
            }
            if (uVar8 != 0x51) goto LAB_10039f167;
          }
          iVar4 = (uint)(uVar8 != 0x2f) * 3;
          uVar9 = (**(code **)(*param_3 + 0x30))(param_3,uVar3,puVar11[1],puVar11 + 2,iVar4 + 1);
          if ((int)uVar9 != 0) {
            return uVar9;
          }
          puVar11 = puVar11 + (ulong)(iVar4 + 2) + 1;
        }
        else if (uVar8 == 0xfffe) {
          puVar11 = puVar11 + (ulong)(uVar3 >> 0x10 & 0x7fff) + 1;
        }
        else {
          if (uVar8 == 0xffff) {
                    /* WARNING: Could not recover jumptable at 0x00010039f1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (**(code **)(*param_3 + 0x10))(param_3);
            return uVar9;
          }
LAB_10039f167:
          puVar1 = puVar11 + 1;
          if ((uVar2 & 0xfe00) < 0x101) {
            uVar10 = 0;
            uVar8 = *puVar1;
            puVar7 = puVar1;
            puVar6 = puVar11;
            while (puVar5 = puVar7, (int)uVar8 < 0) {
              uVar10 = (ulong)((int)uVar10 + 1);
              uVar8 = puVar6[2];
              puVar7 = puVar6 + 2;
              puVar6 = puVar5;
            }
          }
          else {
            uVar10 = (ulong)(uVar3 >> 0x18 & 0xf);
          }
          uVar9 = (**(code **)(*param_3 + 0x28))(param_3,uVar3,puVar1,uVar10);
          if ((int)uVar9 != 0) {
            return uVar9;
          }
          puVar11 = puVar11 + uVar10 + 1;
        }
LAB_10039f1c0:
      } while (puVar11 < param_1 + param_2);
    }
    uVar9 = 2;
  }
  return uVar9;
}

