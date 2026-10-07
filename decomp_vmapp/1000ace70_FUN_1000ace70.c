
ulong FUN_1000ace70(long param_1,uint *param_2)

{
  ulong *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(0,0x12,(ulong)*(ushort *)((long)param_2 + 10) << 0x20 | 1);
  }
  iVar5 = *(int *)(param_1 + 0x1164);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x5d8);
    *(int *)(param_1 + 0x1164) = iVar5;
  }
  uVar10 = (int)(1L << ((byte)iVar5 & 0x3f)) - 1;
  uVar9 = uVar10 & param_2[3];
  if (uVar9 == 0) {
    FUN_1008e3970("","vm",0,"zero IRQ affinity: [monev %d] dev=(%d:%d) IRQ=%d:%d (%x:%x)",
                  *(undefined2 *)((long)param_2 + 10),(short)param_2[1],
                  *(undefined2 *)((long)param_2 + 6),*(undefined2 *)((long)param_2 + 0x12),
                  (char)param_2[4],param_2[3],uVar10);
    uVar9 = 1;
  }
  uVar10 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  if (uVar9 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar14 = *(long *)(param_1 + 0x1938);
  if (((*(int *)(lVar14 + 0x3eb84) != 0) && ((char)param_2[4] != '\0')) && ((*param_2 & 6) == 2)) {
    iVar5 = (**(code **)(**(long **)(param_1 + 0x1950) + 0xe8))
                      (*(long **)(param_1 + 0x1950),(char)param_2[5],uVar10);
    if (iVar5 == 0) {
      LOCK();
      puVar1 = (ulong *)(*(long *)(param_1 + 0x1140) + 0xf0);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      return uVar7;
    }
    lVar14 = *(long *)(param_1 + 0x1938);
  }
  uVar13 = (ulong)(*(ushort *)((long)param_2 + 10) >> 5);
  uVar11 = (ulong)uVar10;
  lVar12 = uVar11 * 0x20 + lVar14;
  bVar8 = (byte)*(ushort *)((long)param_2 + 10);
  uVar7 = (ulong)*(uint *)(lVar12 + 0xd028 + uVar13 * 4);
  do {
    uVar6 = (uint)uVar7;
    puVar2 = (uint *)(lVar12 + 0xd028 + uVar13 * 4);
    LOCK();
    uVar9 = *puVar2;
    if (uVar6 == uVar9) {
      *puVar2 = 1 << (bVar8 & 0x1f) | uVar6;
    }
    else {
      uVar7 = (ulong)uVar9;
    }
    UNLOCK();
  } while (uVar6 != uVar9);
  if ((((uint)uVar7 >> (bVar8 & 0x1f) & 1) == 0) && ((*(byte *)(lVar14 + 0xd008 + uVar11) & 1) == 0)
     ) {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),*(undefined1 *)(lVar14 + 0xd008 + uVar11));
    do {
      bVar4 = (byte)uVar7;
      pbVar3 = (byte *)(lVar14 + 0xd008 + uVar11);
      LOCK();
      bVar8 = *pbVar3;
      if (bVar4 == bVar8) {
        *pbVar3 = bVar4 | 1;
      }
      else {
        uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar8);
      }
      UNLOCK();
    } while (bVar4 != bVar8);
    if ((((uVar7 & 1) == 0) && ((*(byte *)(param_1 + 0x1ab1) & 2) != 0)) &&
       ((uVar7 = (**(code **)(**(long **)(param_1 + 0x1950) + 0xd8))
                           (*(long **)(param_1 + 0x1950),1 << ((byte)uVar10 & 0x1f),
                            (*param_2 & 1) * 3 + 1), (int)uVar7 < 0 &&
        (uVar7 = (ulong)DAT_1011b55f8, 0 < (int)DAT_1011b55f8)))) {
      uVar7 = FUN_1008e3970("","vm",1,"%s: KickVcpu failed","MonEventNotify");
      return uVar7;
    }
  }
  return uVar7;
}

