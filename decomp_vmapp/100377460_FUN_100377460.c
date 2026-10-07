
long FUN_100377460(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *(long *)(param_2 + 0x618);
  lVar12 = 0;
  if (lVar6 != 0) {
    lVar12 = *(long *)(lVar6 + 0x1b8);
    if (*(int *)(param_1 + 0x1c) == -1) {
      lVar4 = *(long *)(lVar12 + 0x10);
      if (lVar4 == 0) {
        lVar4 = *(long *)(lVar12 + 8);
      }
      *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
    }
    if (*(char *)(param_1 + 0x19) != '\0') {
      lVar4 = *(long *)(lVar12 + 0x10);
      if (lVar4 == 0) {
        lVar4 = *(long *)(lVar12 + 8);
      }
      *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 0x10;
    }
    FUN_100378f30(lVar12,lVar6,param_2);
  }
  lVar6 = *(long *)(param_2 + 0x620);
  lVar4 = 0;
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + 0x1b8);
    FUN_100378f30(lVar4,lVar6,param_2);
  }
  lVar6 = *(long *)(param_2 + 0x628);
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x1b8);
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar5 = *(long *)(lVar7 + 0x10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar7 + 8);
      }
      *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 0x40;
    }
    if (((*(long *)(lVar6 + 0x1e8) != 0) && (*(long *)(param_2 + 0x620) != 0)) &&
       (*(long *)(*(long *)(param_2 + 0x620) + 0x1c8) != 0)) {
      lVar5 = *(long *)(lVar7 + 0x10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar7 + 8);
      }
      *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 8;
    }
    FUN_100378f30(lVar7,lVar6,param_2);
  }
  FUN_10039aa00(*(undefined8 *)(param_1 + 0x10),param_2);
  lVar6 = *(long *)(param_2 + 0x620);
  if ((lVar6 == 0) && (lVar6 = *(long *)(param_2 + 0x628), lVar6 == 0)) {
    lVar6 = *(long *)(param_2 + 0x618);
  }
  lVar5 = **(long **)(lVar6 + 0x1a8);
  do {
    if (lVar5 == 0) {
      return 0;
    }
    lVar2 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)(lVar5 + 0x18);
    lVar10 = *(long *)(lVar5 + 0x20);
    if ((((lVar2 != 0) == (lVar12 != 0)) && ((lVar4 != 0) == (lVar11 != 0))) &&
       ((lVar7 != 0) == (lVar10 != 0))) {
      if (lVar4 != 0) {
        lVar9 = *(long *)(lVar4 + 0x10);
        if (lVar9 == 0) {
          lVar9 = *(long *)(lVar4 + 8);
        }
        lVar8 = *(long *)(lVar11 + 0x40);
        if (lVar8 == 0) {
          lVar8 = *(long *)(lVar11 + 0x38);
        }
        uVar1 = *(ushort *)(lVar9 + 2);
        if ((uVar1 != *(ushort *)(lVar8 + 2)) ||
           (iVar3 = _memcmp((ushort *)(lVar9 + 2),(void *)(lVar8 + 2),(ulong)uVar1), iVar3 != 0))
        goto LAB_1003776f0;
      }
      if (lVar7 != 0) {
        lVar11 = *(long *)(lVar7 + 0x10);
        if (lVar11 == 0) {
          lVar11 = *(long *)(lVar7 + 8);
        }
        lVar9 = *(long *)(lVar10 + 0x40);
        if (lVar9 == 0) {
          lVar9 = *(long *)(lVar10 + 0x38);
        }
        uVar1 = *(ushort *)(lVar11 + 2);
        if ((uVar1 != *(ushort *)(lVar9 + 2)) ||
           (iVar3 = _memcmp((ushort *)(lVar11 + 2),(void *)(lVar9 + 2),(ulong)uVar1), iVar3 != 0))
        goto LAB_1003776f0;
      }
      if (lVar12 == 0) {
LAB_100377703:
        lVar12 = lVar5 + 0x70;
        lVar4 = *(long *)(lVar5 + 0x80);
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 0x78);
        *(long *)(*(long *)(lVar5 + 0x78) + 0x10) = lVar4;
        *(long *)(lVar5 + 0x78) = lVar12;
        *(long *)(lVar5 + 0x80) = lVar6 + 0x1a0;
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar6 + 0x1a8);
        *(long *)(*(long *)(lVar6 + 0x1a8) + 0x10) = lVar12;
        *(long *)(lVar6 + 0x1a8) = lVar12;
        return lVar5;
      }
      lVar11 = *(long *)(lVar12 + 0x10);
      if (lVar11 == 0) {
        lVar11 = *(long *)(lVar12 + 8);
      }
      lVar10 = *(long *)(lVar2 + 0x40);
      if (lVar10 == 0) {
        lVar10 = *(long *)(lVar2 + 0x38);
      }
      uVar1 = *(ushort *)(lVar11 + 2);
      if ((uVar1 == *(ushort *)(lVar10 + 2)) &&
         (iVar3 = _memcmp((ushort *)(lVar11 + 2),(void *)(lVar10 + 2),(ulong)uVar1), iVar3 == 0))
      goto LAB_100377703;
    }
LAB_1003776f0:
    lVar5 = **(long **)(lVar5 + 0x78);
  } while( true );
}

