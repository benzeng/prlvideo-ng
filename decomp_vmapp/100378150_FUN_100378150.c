
undefined8 FUN_100378150(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar4 = *param_1;
  uVar2 = 3;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0xb8);
    lVar3 = 8;
    if ((int)((ulong)(*(long *)(lVar4 + 0xc0) - lVar5) >> 2) * -0x55555555 != 0) {
      uVar7 = 0;
      do {
        lVar6 = (ulong)(uint)(*(int *)(lVar5 + -8 + lVar3) * 0xf + *(int *)(lVar5 + -4 + lVar3)) *
                0x10;
        lVar4 = *(long *)(param_2 + 0x868 + lVar6);
        if (lVar4 == 0) {
          return 7;
        }
        if ((*(ushort *)(lVar4 + 0xb0) & 0x1000) == 0) {
          return 7;
        }
        (*DAT_1011c7878)(0x8a11,*(undefined4 *)(lVar5 + lVar3),**(undefined4 **)(lVar4 + 0x58),
                         *(undefined4 *)(param_2 + 0x870 + lVar6),
                         *(undefined4 *)(param_2 + 0x874 + lVar6));
        uVar7 = uVar7 + 1;
        lVar4 = *param_1;
        lVar5 = *(long *)(lVar4 + 0xb8);
        lVar3 = lVar3 + 0xc;
      } while (uVar7 < (uint)((int)((ulong)(*(long *)(lVar4 + 0xc0) - lVar5) >> 2) * -0x55555555));
    }
    lVar5 = *(long *)(lVar4 + 0xa0);
    uVar2 = 0;
    if ((int)((ulong)(*(long *)(lVar4 + 0xa8) - lVar5) >> 4) != 0) {
      uVar7 = 0;
      lVar4 = 0xc;
      while( true ) {
        lVar6 = (ulong)(uint)(*(int *)(lVar5 + -8 + lVar4) * 0xf + *(int *)(lVar5 + -4 + lVar4)) *
                0x10;
        lVar3 = *(long *)(param_2 + 0x868 + lVar6);
        uVar2 = 7;
        if (lVar3 == 0) break;
        if ((*(ushort *)(lVar3 + 0xb0) & 0x1000) == 0) {
          uVar1 = *(uint *)(param_2 + 0x870 + lVar6);
          if (*(uint *)(lVar3 + 0xc) < uVar1) {
            return 8;
          }
          if ((ulong)(*(uint *)(lVar3 + 0xc) - uVar1) <
              (ulong)(uint)(*(int *)(lVar5 + lVar4) * 4) << 2) {
            return 8;
          }
          (*DAT_1011c6e18)(*(undefined4 *)(lVar5 + -0xc + lVar4),*(int *)(lVar5 + lVar4),
                           (ulong)**(uint **)(lVar3 + 0x28) + (ulong)uVar1 +
                           *(long *)(param_3 + 0x920));
        }
        else {
          (*DAT_1011c5708)(0x8a11,**(undefined4 **)(lVar3 + 0x58));
          lVar3 = (*DAT_1011c64a0)(0x8a11,35000);
          if ((ulong)*(uint *)(param_2 + 0x870 + lVar6) + lVar3 == 0) {
            return 8;
          }
          (*DAT_1011c6e18)(*(undefined4 *)(lVar5 + -0xc + lVar4),*(undefined4 *)(lVar5 + lVar4));
          (*DAT_1011c6ed0)(0x8a11);
        }
        uVar7 = uVar7 + 1;
        lVar5 = *(long *)(*param_1 + 0xa0);
        lVar4 = lVar4 + 0x10;
        if ((uint)((ulong)(*(long *)(*param_1 + 0xa8) - lVar5) >> 4) <= uVar7) {
          return 0;
        }
      }
    }
  }
  return uVar2;
}

