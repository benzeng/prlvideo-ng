
void FUN_1003b4a30(undefined8 param_1,long param_2,byte *param_3,char param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  void *pvVar10;
  ushort *puVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ushort local_34 [2];
  
  lVar5 = *(long *)(param_2 + 0x40);
  if ((param_4 != '\0') && (1 < *(uint *)(param_2 + 0x48))) {
    uVar16 = 1;
    do {
      lVar17 = *(long *)(param_2 + 0x40);
      lVar18 = (ulong)uVar16 * 0x40;
      if (((((*(byte *)(lVar17 + 0x39 + lVar18) & 1) == 0) &&
           (bVar8 = *(byte *)(lVar5 + 0x30), (*(byte *)(lVar17 + 0x30 + lVar18) & bVar8) != 0)) &&
          (*(int *)(lVar5 + 0x28) == *(int *)(lVar17 + 0x28 + lVar18))) &&
         ((*(int *)(lVar5 + 0x2c) == *(int *)(lVar17 + 0x2c + lVar18) &&
          (*(char *)(lVar5 + 0x38) == *(char *)(lVar17 + 0x38 + lVar18))))) {
        lVar6 = *(long *)(lVar5 + 8);
        if ((lVar6 != 0) && (lVar7 = *(long *)(lVar17 + 8 + lVar18), lVar7 != 0)) {
          pcVar15 = (char *)(*(long *)(lVar6 + 0x80) + 0x48);
          if (*(long *)(lVar6 + 0x80) == 0) {
            pcVar15 = (char *)(lVar6 + 0x7c);
          }
          pcVar13 = (char *)(*(long *)(lVar7 + 0x80) + 0x48);
          if (*(long *)(lVar7 + 0x80) == 0) {
            pcVar13 = (char *)(lVar7 + 0x7c);
          }
          if (*pcVar15 != *pcVar13) goto LAB_1003b4c50;
        }
        if ((((((bVar8 & 1) != 0) && (*(char *)(lVar17 + 0x31 + lVar18) != '\0')) ||
             (((bVar8 & 2) != 0 && (*(char *)(lVar17 + 0x32 + lVar18) != '\x01')))) ||
            (((bVar8 & 4) != 0 && (*(char *)(lVar17 + 0x33 + lVar18) != '\x02')))) ||
           (((bVar8 & 8) != 0 && (*(char *)(lVar17 + 0x34 + lVar18) != '\x03')))) {
          uVar9 = FUN_1003b4760(param_1,param_2,lVar17 + lVar18);
          local_34[0] = 0;
          local_34[1] = 0;
          uVar19 = 0;
          do {
            bVar8 = param_3[uVar19];
            if (bVar8 == 0) break;
            uVar14 = (bVar8 >> 3 & 1) << (*(byte *)(lVar17 + 0x34 + lVar18) & 0x1f) |
                     (bVar8 >> 2 & 1) << (*(byte *)(lVar17 + 0x33 + lVar18) & 0x1f) |
                     (bVar8 >> 1 & 1) << (*(byte *)(lVar17 + 0x32 + lVar18) & 0x1f) |
                     (bVar8 & 1) << (*(byte *)(lVar17 + 0x31 + lVar18) & 0x1f);
            puVar11 = local_34;
            do {
              if ((uint)(byte)*puVar11 == (uVar14 & 0xff)) break;
              if ((byte)*puVar11 == 0) {
                *(byte *)puVar11 = (byte)uVar14;
                break;
              }
              puVar11 = (ushort *)((long)puVar11 + 1);
            } while (puVar11 < &stack0xffffffffffffffd0);
            uVar14 = (int)uVar19 + 1;
            uVar19 = (ulong)uVar14;
          } while (uVar14 < 4);
          if (((char)local_34[0] != '\0') && (0xff < local_34[0])) {
            FUN_1003b4a30(param_1,uVar9,local_34,0);
          }
        }
      }
LAB_1003b4c50:
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_2 + 0x48));
  }
  pbVar1 = param_3 + 4;
  do {
    if ((*param_3 == 0) || (bVar8 = ~*param_3 & *(byte *)(lVar5 + 0x30), bVar8 == 0)) break;
    *(byte *)(lVar5 + 0x30) = bVar8;
    pvVar10 = operator_new(0x58);
    FUN_1003aa9b0(pvVar10,*(undefined4 *)(param_2 + 0x48));
    *(long *)((long)pvVar10 + 8) = param_2;
    lVar17 = *(long *)(param_2 + 0x10);
    *(long *)((long)pvVar10 + 0x10) = lVar17;
    *(void **)(lVar17 + 8) = pvVar10;
    *(void **)(param_2 + 0x10) = pvVar10;
    *(undefined2 *)((long)pvVar10 + 0x4c) = *(undefined2 *)(param_2 + 0x4c);
    *(undefined4 *)((long)pvVar10 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    uVar3 = *(ushort *)(param_2 + 0x54);
    uVar16 = *(uint3 *)((long)pvVar10 + 0x54) & 0xffdfff;
    *(char *)((long)pvVar10 + 0x56) = (char)(uVar16 >> 0x10);
    *(ushort *)((long)pvVar10 + 0x54) = uVar3 & 0x2000 | (ushort)uVar16;
    lVar17 = *(long *)(param_2 + 0x38);
    *(long *)((long)pvVar10 + 0x38) = lVar17;
    if (*(long *)(lVar17 + 0x30) == param_2) {
      *(void **)(lVar17 + 0x30) = pvVar10;
    }
    if (*(long *)(lVar17 + 0x28) == param_2) {
      *(void **)(lVar17 + 0x28) = pvVar10;
    }
    if (*(int *)(param_2 + 0x48) != 0) {
      uVar16 = 0;
      lVar17 = 0x28;
      do {
        lVar18 = *(long *)((long)pvVar10 + 0x40);
        lVar6 = *(long *)(param_2 + 0x40);
        *(byte *)(lVar18 + 0x11 + lVar17) =
             *(byte *)(lVar18 + 0x11 + lVar17) & 0xfe | *(byte *)(lVar6 + 0x11 + lVar17) & 1;
        *(undefined1 *)(lVar18 + 0x10 + lVar17) = *(undefined1 *)(lVar6 + 0x10 + lVar17);
        if ((*(byte *)(lVar6 + 0x11 + lVar17) & 1) == 0) {
          uVar9 = *(undefined8 *)(lVar6 + lVar17);
          *(undefined8 *)(lVar18 + 8 + lVar17) = *(undefined8 *)(lVar6 + 8 + lVar17);
          *(undefined8 *)(lVar18 + lVar17) = uVar9;
          if ((*(byte *)(lVar6 + 0xd + lVar17) & 4) == 0) {
            FUN_1003aa7f0(lVar18 + -0x28 + lVar17);
          }
          else {
            *(byte *)(lVar18 + 8 + lVar17) = *param_3;
          }
        }
        else {
          bVar8 = *param_3;
          if ((bVar8 & bVar8 - 1) == 0) {
            iVar12 = 0;
            if (bVar8 != 0) {
              for (; (bVar8 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
              }
            }
            if (bVar8 == 0) {
              iVar12 = -1;
            }
            uVar4 = *(undefined4 *)(lVar17 + lVar6 + (long)iVar12 * 4);
            puVar2 = (undefined4 *)(lVar18 + lVar17);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + lVar17);
            *(undefined8 *)(lVar18 + 8 + lVar17) = *(undefined8 *)(lVar6 + 8 + lVar17);
            *(undefined8 *)(lVar18 + lVar17) = uVar9;
          }
        }
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x40;
      } while (uVar16 < *(uint *)(param_2 + 0x48));
    }
    param_3 = param_3 + 1;
  } while (param_3 < pbVar1);
  lVar17 = 0x40;
  if (1 < *(uint *)(param_2 + 0x48)) {
    uVar16 = 1;
    do {
      lVar18 = *(long *)(param_2 + 0x40);
      if ((*(byte *)(lVar18 + 0x39 + lVar17) & 1) == 0) {
        FUN_1003aa7f0(lVar18 + lVar17);
      }
      else {
        bVar8 = *(byte *)(lVar5 + 0x30);
        if ((bVar8 & bVar8 - 1) == 0) {
          iVar12 = 0;
          if (bVar8 != 0) {
            for (; (bVar8 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
            }
          }
          if (bVar8 == 0) {
            iVar12 = -1;
          }
          uVar4 = *(undefined4 *)(lVar17 + 0x28 + lVar18 + (long)iVar12 * 4);
          puVar2 = (undefined4 *)(lVar18 + 0x28 + lVar17);
          *puVar2 = uVar4;
          puVar2[1] = uVar4;
          puVar2[2] = uVar4;
          puVar2[3] = uVar4;
        }
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x40;
    } while (uVar16 < *(uint *)(param_2 + 0x48));
  }
  return;
}

