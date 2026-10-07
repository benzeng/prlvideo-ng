
undefined8 FUN_1007f50f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
  uVar2 = *(ulong *)(lVar1 + 0x18);
  uVar12 = *(ulong *)(lVar1 + 0x20);
  if ((uVar2 & 0x100) != 0 || (uVar12 & 0x2c) != 0) {
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x130) + 0xa8);
  if (lVar1 == 0) {
    FUN_100887ce0(0x14,0x82,0x44,"s3_clnt.c",0xd04);
    return 0;
  }
  lVar8 = (long)*(int *)(lVar1 + 8);
  uVar9 = *(undefined8 *)(lVar1 + 0x18 + lVar8 * 0x18);
  if (lVar8 == 5) {
    iVar5 = FUN_100810770(uVar9,param_1);
    if (iVar5 != 0) {
      return 1;
    }
    uVar9 = 0x130;
    uVar11 = 0xd15;
    goto LAB_1007f518c;
  }
  lVar3 = *(long *)(lVar1 + 0xd8);
  lVar4 = *(long *)(lVar1 + 0xe0);
  uVar9 = FUN_1008b7420(uVar9);
  iVar5 = FUN_100891d50(uVar9);
  uVar6 = FUN_1008bd4d0(*(undefined8 *)(lVar1 + 0x18 + lVar8 * 0x18),uVar9);
  FUN_1008924e0(uVar9);
  if (((uVar12 & 1) == 0) || ((uVar6 & 0x11) == 0x11)) {
    if (((uVar12 & 2) == 0) || ((uVar6 & 0x12) == 0x12)) {
      if ((uVar2 & 1) == 0) {
LAB_1007f533b:
        uVar12 = uVar2 & 8;
        if ((uVar12 == 0) || (lVar4 != 0)) {
          if (((uVar2 & 2) == 0) || ((uVar6 & 0x104) == 0x104)) {
            if (((uVar2 & 4) == 0) || ((uVar6 & 0x204) == 0x204)) {
              if (uVar12 == 0) {
                uVar10 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x40);
              }
              else {
                iVar7 = FUN_10084b410(*(undefined8 *)(lVar4 + 8));
                uVar10 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x40);
                if (((iVar7 < 0x400) && ((uVar10 & 2) == 0)) ||
                   ((iVar7 < 0x200 && ((uVar10 & 2) != 0)))) {
                  uVar9 = 0x174;
                  uVar11 = 0xd5e;
                  goto LAB_1007f518c;
                }
              }
              if ((uVar10 & 2) == 0) {
                return 1;
              }
              if (iVar5 <= (int)((~((int)uVar10 << 6) & 0x200U) + 0x200)) {
                return 1;
              }
              if ((uVar2 & 1) == 0) {
                if (uVar12 == 0) {
                  if ((uVar2 & 6) == 0) {
                    uVar9 = 0xfa;
                    uVar11 = 0xd8a;
                    goto LAB_1007f518c;
                  }
                  uVar9 = 0xa6;
                  uVar11 = 0xd84;
                }
                else {
                  iVar5 = FUN_10084b410(*(undefined8 *)(lVar4 + 8));
                  if (iVar5 <= (int)((~(*(int *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x40
                                                ) << 6) & 0x200U) + 0x200)) {
                    return 1;
                  }
                  uVar9 = 0xa6;
                  uVar11 = 0xd7d;
                }
              }
              else {
                if (lVar3 == 0) {
                  uVar9 = 0xa7;
                  uVar11 = 0xd6a;
                  goto LAB_1007f518c;
                }
                iVar5 = FUN_10084b410(*(undefined8 *)(lVar3 + 0x20));
                if (iVar5 <= (int)((~(*(int *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x40)
                                     << 6) & 0x200U) + 0x200)) {
                  return 1;
                }
                uVar9 = 0xa7;
                uVar11 = 0xd71;
              }
              FUN_100887ce0(0x14,0x82,uVar9,"s3_clnt.c",uVar11);
              uVar9 = 0x3c;
              goto LAB_1007f5273;
            }
            uVar9 = 0xa2;
            uVar11 = 0xd54;
          }
          else {
            uVar9 = 0xa4;
            uVar11 = 0xd4e;
          }
LAB_1007f518c:
          FUN_100887ce0(0x14,0x82,uVar9,"s3_clnt.c",uVar11);
          uVar9 = 0x28;
          goto LAB_1007f5273;
        }
        uVar9 = 0xd49;
      }
      else {
        uVar12 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x40);
        uVar10 = uVar12 & 2;
        if (((uVar6 & 0x21) != 0x21) && (uVar10 == 0)) {
          uVar9 = 0xa9;
          uVar11 = 0xd33;
          goto LAB_1007f518c;
        }
        if ((uVar10 == 0) || ((int)((~((int)uVar12 << 6) & 0x200U) + 0x200) < iVar5))
        goto LAB_1007f533b;
        if ((uVar6 & 0x21) != 0x21) {
          uVar9 = 0xa9;
          uVar11 = 0xd39;
          goto LAB_1007f518c;
        }
        if (lVar3 == 0) goto LAB_1007f533b;
        uVar9 = 0xd3f;
      }
      FUN_100887ce0(0x14,0x82,0x44,"s3_clnt.c",uVar9);
      uVar9 = 0x50;
      goto LAB_1007f5273;
    }
    uVar9 = 0xa5;
    uVar11 = 0xd2a;
  }
  else {
    uVar9 = 0xaa;
    uVar11 = 0xd24;
  }
  FUN_100887ce0(0x14,0x82,uVar9,"s3_clnt.c",uVar11);
  uVar9 = 0x28;
LAB_1007f5273:
  FUN_1007fd650(param_1,2,uVar9);
  return 0;
}

