
undefined8 FUN_100abf810(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  uVar1 = *param_2;
  if ((uVar1 == 0) && ((int)param_2[1] == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = 0;
    do {
      while( true ) {
        lVar6 = lVar3;
        uVar4 = *(ulong *)(lVar6 + 0x18);
        if (uVar4 != uVar1) break;
        uVar4 = uVar1;
        if ((uint)param_2[1] <= *(uint *)(lVar6 + 0x20)) goto LAB_100abf863;
LAB_100abf852:
        lVar3 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          if (lVar5 == 0) goto LAB_100abf884;
          uVar4 = *(ulong *)(lVar5 + 0x18);
          lVar6 = lVar5;
          goto LAB_100abf87a;
        }
      }
      if (uVar4 < uVar1) goto LAB_100abf852;
LAB_100abf863:
      lVar3 = *(long *)(lVar6 + 8);
      lVar5 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_100abf87a:
    bVar7 = uVar1 < uVar4;
    if (uVar1 == uVar4) {
      bVar7 = (uint)param_2[1] < *(uint *)(lVar6 + 0x20);
    }
    if (!bVar7) goto LAB_100abf888;
  }
LAB_100abf884:
  lVar6 = lVar2 + 8;
LAB_100abf888:
  return CONCAT71((int7)(uVar1 >> 8),lVar6 != lVar2 + 8);
}

