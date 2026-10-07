
undefined8
FUN_10036ab80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
             int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar3 = FUN_10036a210();
  if ((int)uVar3 == 0) {
    FUN_10036a6e0();
    if (param_5 != 0) {
      *(int *)(param_1 + 0x10) = param_6 + param_5;
      uVar6 = *(uint *)(param_1 + 0x18);
      if (uVar6 != 0) {
        uVar7 = 0;
        do {
          if ((uVar6 & 1) != 0) {
            lVar4 = uVar7 * 0x20;
            iVar8 = *(int *)(param_1 + 0x34 + lVar4);
            if (iVar8 == 0x80e1) {
              iVar8 = 4;
            }
            uVar1 = *(int *)(param_1 + 0x30 + lVar4) - 0x1400;
            if (uVar1 < 0xc) {
              if ((0x80cU >> (uVar1 & 0x1f) & 1) == 0) {
                if ((0x70U >> (uVar1 & 0x1f) & 1) == 0) {
                  if ((3U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_10036ac50;
                }
                else {
                  iVar8 = iVar8 << 2;
                }
              }
              else {
                iVar8 = iVar8 * 2;
              }
            }
            else {
LAB_10036ac50:
              iVar8 = 0;
            }
            uVar1 = *(uint *)(param_1 + 0x3c + lVar4);
            uVar2 = param_6 + param_5;
            if (uVar1 != 0) {
              uVar2 = *(uint *)(param_1 + 0xc) / uVar1;
            }
            iVar5 = *(int *)(param_1 + 0x2c + lVar4);
            if (iVar5 == 0) {
              iVar5 = iVar8;
            }
            if (*(uint *)(param_1 + 0x40 + lVar4) <
                iVar8 + *(int *)(param_1 + 0x28 + lVar4) + (uVar2 - 1) * iVar5) {
              return 4;
            }
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar6 = uVar6 * 2;
        } while (uVar6 != 0);
      }
      if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
        uVar3 = 0x8e14;
        if (*(int *)(param_4 + 4) != 5) {
          uVar3 = 0x8e13;
        }
        (*DAT_1011c74a0)(*(int *)(param_4 + 8),uVar3);
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        lVar4 = **(long **)(*(long *)(param_1 + 0x278) + 0x38);
        iVar8 = *(byte *)(*(long *)(*(long *)(param_1 + 0x278) + 0x88) + 3) - 1;
        *(int *)(lVar4 + 0x34) = iVar8;
        *(int *)(lVar4 + 0x2c) = iVar8;
        (*DAT_1011c74a8)(*(undefined4 *)(lVar4 + 0x24));
        (*DAT_1011c56e0)(0x8c87,*(undefined4 *)(lVar4 + 0x30));
        (*DAT_1011c56e0)(0x8c88,*(undefined4 *)(lVar4 + 0x28));
      }
      (*DAT_1011c7558)(*(undefined4 *)(param_1 + 0x14),param_6,param_5,
                       *(undefined4 *)(param_1 + 0xc));
      if (*(int *)(param_1 + 0x228) != 0) {
        (*DAT_1011c5cb8)(0x8c87);
        (*DAT_1011c5cb8)(0x8c88);
        (*DAT_1011c7590)();
      }
      if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
        (*DAT_1011c7588)();
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

