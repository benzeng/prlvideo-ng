
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002aed40(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar19 [16];
  
  QMutex::lock();
  while ((*(long *)(param_1 + 0x8d8) != 0 || (*(char *)(param_1 + 0x8d1) != '\0'))) {
    QWaitCondition::wait((QMutex *)(param_1 + 0x890),param_1 + 0x878);
  }
  QMutex::lock();
  QMutex::unlock();
  *(undefined8 *)(param_1 + 0x960) = 0;
  *(undefined8 *)(param_1 + 0x1250) = 0;
  *(undefined8 *)(param_1 + 0x1b40) = 0;
  *(undefined8 *)(param_1 + 0x2430) = 0;
  *(undefined8 *)(param_1 + 0x2d20) = 0;
  *(undefined8 *)(param_1 + 0x3610) = 0;
  *(undefined8 *)(param_1 + 0x3f00) = 0;
  *(undefined8 *)(param_1 + 0x47f0) = 0;
  *(undefined8 *)(param_1 + 0x50e0) = 0;
  *(undefined8 *)(param_1 + 0x59d0) = 0;
  *(undefined8 *)(param_1 + 0x62c0) = 0;
  *(undefined8 *)(param_1 + 0x6bb0) = 0;
  *(undefined8 *)(param_1 + 0x74a0) = 0;
  *(undefined8 *)(param_1 + 0x7d90) = 0;
  *(undefined8 *)(param_1 + 0x8680) = 0;
  *(undefined8 *)(param_1 + 0x8f70) = 0;
  if (*(long *)(param_1 + 0x900) != 0) {
    FUN_1000d76e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8),0);
    FUN_1002a5590(param_1,*(undefined8 *)(param_1 + 0x900),0);
  }
  *(undefined8 *)(param_1 + 0x900) = 0;
  QMutex::unlock();
  pbVar10 = *(byte **)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x1940) + 0x60) + 0x48);
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  _memset(pbVar10,0xff,(ulong)((*(uint *)(param_1 + 0x928) >> 0xc) + 0x1f >> 3 & 0x1ffffffc));
  lVar9 = 0;
  do {
    lVar12 = lVar9 * 0x8f0;
    uVar2 = *(uint *)(param_1 + 0x930 + lVar12);
    uVar7 = uVar2 >> 0xc;
    iVar13 = *(int *)(param_1 + 0x934 + lVar12) * *(int *)(param_1 + 0x93c + lVar12);
    uVar11 = uVar2 + 0xfff + iVar13 >> 0xc;
    if (uVar7 < uVar11) {
      uVar14 = uVar2 + 0xfff + iVar13 >> 0xc;
      if ((uVar14 - (uVar2 >> 0xc) & 1) != 0) {
        *(uint *)(pbVar10 + (ulong)(uVar2 >> 0x11) * 4) =
             *(uint *)(pbVar10 + (ulong)(uVar2 >> 0x11) * 4) & ~(1 << ((byte)uVar7 & 0x1f));
        uVar7 = uVar7 + 1;
      }
      if (uVar14 - 1 != uVar2 >> 0xc) {
        do {
          *(uint *)(pbVar10 + (ulong)(uVar7 >> 5) * 4) =
               *(uint *)(pbVar10 + (ulong)(uVar7 >> 5) * 4) & ~(1 << ((byte)uVar7 & 0x1f));
          *(uint *)(pbVar10 + (ulong)(uVar7 + 1 >> 5) * 4) =
               *(uint *)(pbVar10 + (ulong)(uVar7 + 1 >> 5) * 4) & ~(1 << ((byte)(uVar7 + 1) & 0x1f))
          ;
          uVar7 = uVar7 + 2;
        } while (uVar7 < uVar11);
      }
    }
    auVar6 = _DAT_100b2ddb0;
    uVar14 = _UNK_100b2ddac;
    uVar11 = _UNK_100b2dda8;
    uVar7 = _UNK_100b2dda4;
    uVar2 = _DAT_100b2dda0;
    iVar5 = _UNK_100b2dd9c;
    iVar4 = _UNK_100b2dd98;
    iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
    iVar13 = (int)PTR___mh_execute_header_100b2dd90;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x10);
  uVar16 = *(uint *)(param_1 + 0x928) >> 0xc;
  lVar9 = 0;
  uVar17 = uVar16 + 7 >> 3;
  if (uVar17 != 0) {
    pbVar18 = pbVar10 + uVar17;
    puVar8 = DAT_1011b9af0;
    do {
      bVar1 = *pbVar10;
      lVar12 = 0;
      if (puVar8 == (undefined4 *)0x0) {
        do {
          iVar15 = (int)lVar12;
          uVar17 = iVar15 + iVar13;
          uVar20 = iVar15 + iVar3;
          uVar21 = iVar15 + iVar4;
          uVar22 = iVar15 + iVar5;
          auVar19._0_4_ =
               (uVar17 >> 7 & uVar2) +
               (uVar17 >> 6 & uVar2) +
               (uVar17 >> 5 & uVar2) +
               (uVar17 >> 4 & uVar2) +
               (uVar17 >> 3 & uVar2) +
               (uVar17 >> 2 & uVar2) + (uVar17 >> 1 & uVar2) + (uVar17 & uVar2);
          auVar19._4_4_ =
               (uVar20 >> 7 & uVar7) +
               (uVar20 >> 6 & uVar7) +
               (uVar20 >> 5 & uVar7) +
               (uVar20 >> 4 & uVar7) +
               (uVar20 >> 3 & uVar7) +
               (uVar20 >> 2 & uVar7) + (uVar20 >> 1 & uVar7) + (uVar20 & uVar7);
          auVar19._8_4_ =
               (uVar21 >> 7 & uVar11) +
               (uVar21 >> 6 & uVar11) +
               (uVar21 >> 5 & uVar11) +
               (uVar21 >> 4 & uVar11) +
               (uVar21 >> 3 & uVar11) +
               (uVar21 >> 2 & uVar11) + (uVar21 >> 1 & uVar11) + (uVar21 & uVar11);
          auVar19._12_4_ =
               (uVar22 >> 7 & uVar14) +
               (uVar22 >> 6 & uVar14) +
               (uVar22 >> 5 & uVar14) +
               (uVar22 >> 4 & uVar14) +
               (uVar22 >> 3 & uVar14) +
               (uVar22 >> 2 & uVar14) + (uVar22 >> 1 & uVar14) + (uVar22 & uVar14);
          auVar19 = pshufb(auVar19,auVar6);
          *(int *)((long)&DAT_1011b99f0 + lVar12) = auVar19._0_4_;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0x100);
        DAT_1011b9af0 = &DAT_1011b99f0;
        puVar8 = &DAT_1011b99f0;
      }
      lVar9 = lVar9 + (ulong)*(byte *)((long)puVar8 + (ulong)bVar1);
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < pbVar18);
  }
  FUN_1008e3970("","LocalDevices",0,"CPCIVideo::PrepareMemBitmap() %llu pages are in use",
                (ulong)uVar16 - lVar9);
  return;
}

