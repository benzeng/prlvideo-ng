
void FUN_1003b5a00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  uint uVar14;
  
  pvVar12 = (void *)**(long **)(param_2 + 8);
  if (pvVar12 == (void *)0x0) {
    return;
  }
  iVar10 = 0;
LAB_1003b5a2f:
  pvVar13 = pvVar12;
  do {
    if (*(int *)(param_2 + 0x34) != *(int *)((long)pvVar13 + 0x34)) break;
    pvVar12 = (void *)**(long **)((long)pvVar13 + 8);
    if ((*(short *)(param_2 + 0x4c) == *(short *)((long)pvVar13 + 0x4c)) &&
       (((*(ushort *)((long)pvVar13 + 0x54) ^ *(ushort *)(param_2 + 0x54)) & 0x2000) == 0)) {
      uVar14 = *(uint *)(param_2 + 0x48);
      if (uVar14 == 0) goto LAB_1003b5cba;
      pbVar9 = (byte *)(*(long *)((long)pvVar13 + 0x40) + 0x38);
      pbVar8 = (byte *)(*(long *)(param_2 + 0x40) + 0x39);
      uVar3 = 0;
      while ((pbVar8[-1] == *pbVar9 &&
             (((*pbVar8 & 1) != 0 ||
              ((((*(int *)(pbVar8 + -0x11) == *(int *)(pbVar9 + -0x10) &&
                 (*(int *)(pbVar8 + -0xd) == *(int *)(pbVar9 + -0xc))) &&
                (((pbVar9[-3] ^ pbVar8[-4]) & 0x18) == 0)) &&
               (((pbVar8[-4] & 4) == 0 || ((pbVar8[-9] & pbVar9[-8]) == 0))))))))) {
        if (*(long *)(pbVar8 + -0x31) != *(long *)(pbVar9 + -0x30)) {
          bVar7 = *(byte *)(*(long *)(pbVar9 + -0x30) + 0x7c) |
                  *(byte *)(*(long *)(pbVar8 + -0x31) + 0x7c);
          uVar5 = bVar7 - 1;
          if (uVar5 < 8) {
            bVar6 = 0x8bU >> ((byte)uVar5 & 0x1f) & 1;
          }
          else {
            bVar6 = 0;
          }
          if (((bVar7 & 0xf8) != 0) && (bVar6 == 0)) break;
        }
        uVar3 = uVar3 + 1;
        pbVar9 = pbVar9 + 0x40;
        pbVar8 = pbVar8 + 0x40;
        if (uVar14 <= uVar3) {
          if (uVar14 != 0) {
            lVar11 = 0;
            iVar4 = 0;
            bVar7 = 0;
            uVar14 = 0;
            do {
              lVar1 = *(long *)(param_2 + 0x40);
              lVar2 = *(long *)((long)pvVar13 + 0x40);
              if (*(long *)(lVar1 + 8 + lVar11) != *(long *)(lVar2 + 8 + lVar11)) {
                FUN_1003c4bd0(param_1,lVar1 + lVar11,lVar2 + lVar11);
                *(undefined4 *)(*(long *)(lVar1 + 8 + lVar11) + 0x78) = 1;
                iVar4 = iVar4 + 1;
              }
              if ((*(byte *)(lVar1 + 0x39 + lVar11) & 1) == 0) {
                if ((*(byte *)(lVar1 + 0x35 + lVar11) & 4) == 0) {
                  if ((bVar7 & 1) != 0) {
                    *(undefined1 *)(lVar1 + 0x31 + lVar11) = *(undefined1 *)(lVar2 + 0x31 + lVar11);
                  }
                  if ((bVar7 & 2) != 0) {
                    *(undefined1 *)(lVar1 + 0x32 + lVar11) = *(undefined1 *)(lVar2 + 0x32 + lVar11);
                  }
                  if ((bVar7 & 4) != 0) {
                    *(undefined1 *)(lVar1 + 0x33 + lVar11) = *(undefined1 *)(lVar2 + 0x33 + lVar11);
                  }
                  if ((bVar7 & 8) != 0) {
                    *(undefined1 *)(lVar1 + 0x34 + lVar11) = *(undefined1 *)(lVar2 + 0x34 + lVar11);
                  }
                }
                else {
                  bVar6 = *(byte *)(lVar2 + 0x30 + lVar11);
                  bVar7 = bVar7 | bVar6;
                  pbVar8 = (byte *)(lVar1 + 0x30 + lVar11);
                  *pbVar8 = *pbVar8 | bVar6;
                }
              }
              else {
                if ((bVar7 & 1) != 0) {
                  *(undefined4 *)(lVar1 + 0x28 + lVar11) = *(undefined4 *)(lVar2 + 0x28 + lVar11);
                }
                if ((bVar7 & 2) != 0) {
                  *(undefined4 *)(lVar1 + 0x2c + lVar11) = *(undefined4 *)(lVar2 + 0x2c + lVar11);
                }
                if ((bVar7 & 4) != 0) {
                  *(undefined4 *)(lVar1 + 0x30 + lVar11) = *(undefined4 *)(lVar2 + 0x30 + lVar11);
                }
                if ((bVar7 & 8) != 0) {
                  *(undefined4 *)(lVar1 + 0x34 + lVar11) = *(undefined4 *)(lVar2 + 0x34 + lVar11);
                }
              }
              uVar14 = uVar14 + 1;
              uVar3 = *(uint *)(param_2 + 0x48);
              lVar11 = lVar11 + 0x40;
            } while (uVar14 < uVar3);
            if (iVar4 != 0) {
              uVar14 = 0;
              lVar11 = 8;
              if (uVar3 != 0) {
                do {
                  lVar1 = *(long *)(*(long *)(param_2 + 0x40) + lVar11);
                  if (*(int *)(lVar1 + 0x78) != 0) {
                    *(undefined4 *)(lVar1 + 0x78) = 0;
                    FUN_1003ab6c0();
                    uVar3 = *(uint *)(param_2 + 0x48);
                  }
                  uVar14 = uVar14 + 1;
                  lVar11 = lVar11 + 0x40;
                } while (uVar14 < uVar3);
              }
            }
          }
          goto LAB_1003b5cba;
        }
      }
    }
    pvVar13 = pvVar12;
  } while (pvVar12 != (void *)0x0);
  goto LAB_1003b5cda;
LAB_1003b5cba:
  FUN_1003aab10(pvVar13);
  operator_delete(pvVar13);
  iVar10 = iVar10 + 1;
  if (pvVar12 == (void *)0x0) {
LAB_1003b5cda:
    if (iVar10 == 0) {
      return;
    }
    uVar14 = *(uint *)(param_2 + 0x48);
    if (uVar14 == 0) {
      return;
    }
    lVar11 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x40);
      if (((*(byte *)(lVar1 + 0x39 + lVar11) & 1) == 0) &&
         ((*(byte *)(lVar1 + 0x35 + lVar11) & 5) == 0)) {
        FUN_1003aa7f0(lVar1 + lVar11);
        uVar14 = *(uint *)(param_2 + 0x48);
      }
      uVar3 = uVar3 + 1;
      lVar11 = lVar11 + 0x40;
    } while (uVar3 < uVar14);
    return;
  }
  goto LAB_1003b5a2f;
}

