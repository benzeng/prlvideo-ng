
ulong FUN_10089c210(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long local_78 [2];
  uint local_68;
  int local_64;
  undefined1 local_60 [8];
  ulong local_58 [5];
  
  lVar2 = FUN_10087ccc0();
  if (lVar2 == 0) {
    FUN_100887ce0(0xd,0x6b,0x41,"a_d2i_fp.c",0x9d);
  }
  else {
    FUN_100888070();
    iVar3 = 0;
    uVar9 = 0;
    uVar11 = 0;
    do {
      while( true ) {
        while( true ) {
          if (uVar11 - uVar9 < 9) {
            uVar5 = 8 - (uVar11 - uVar9);
            if ((CARRY8(uVar11,uVar5)) || (iVar1 = FUN_10087ce60(lVar2,uVar11 + uVar5), iVar1 == 0))
            {
              uVar4 = 0x41;
              uVar7 = 0xa7;
              goto LAB_10089c566;
            }
            iVar1 = FUN_10087d6a0(param_1,*(long *)(lVar2 + 8) + uVar11,uVar5 & 0xffffffff);
            if ((uVar11 == uVar9) && (iVar1 < 0)) {
              uVar4 = 0x8e;
              uVar7 = 0xac;
              goto LAB_10089c566;
            }
            if ((0 < iVar1) &&
               (bVar12 = CARRY8(uVar11,(long)iVar1), uVar11 = uVar11 + (long)iVar1, bVar12)) {
              uVar4 = 0x9b;
              uVar7 = 0xb1;
              goto LAB_10089c566;
            }
          }
          lVar6 = *(long *)(lVar2 + 8) + uVar9;
          local_78[0] = lVar6;
          local_68 = FUN_1008af630(local_78,local_58,&local_64,local_60,uVar11 - uVar9);
          if ((local_68 & 0x80) != 0) {
            uVar5 = FUN_100888460();
            if ((uVar5 & 0xfff) != 0x9b) goto LAB_10089c56b;
            FUN_100888070();
          }
          uVar5 = local_58[0];
          uVar9 = (long)((int)local_78[0] - (int)lVar6) + uVar9;
          if ((local_68 & 1) == 0) break;
          if (iVar3 < -1) {
            uVar4 = 0x7b;
            uVar7 = 0xcd;
            goto LAB_10089c566;
          }
          iVar3 = iVar3 + 1;
        }
        if (((iVar3 == 0) || (local_58[0] != 0)) || (local_64 != 0)) break;
        if (iVar3 < 2) goto LAB_10089c53d;
        iVar3 = iVar3 + -1;
      }
      uVar8 = uVar11 - uVar9;
      uVar10 = local_58[0] - uVar8;
      if (uVar8 <= local_58[0] && uVar10 != 0) {
        if ((0x7fffffff < uVar10) || (CARRY8(uVar11,uVar10))) {
          uVar4 = 0x9b;
          uVar7 = 0xdf;
          goto LAB_10089c566;
        }
        iVar1 = FUN_10087ce60(lVar2,uVar11 + uVar10);
        if (iVar1 == 0) {
          uVar4 = 0x41;
          uVar7 = 0xe3;
          goto LAB_10089c566;
        }
        if (uVar5 != uVar8) {
          do {
            iVar1 = FUN_10087d6a0(param_1,*(long *)(lVar2 + 8) + uVar11,uVar10 & 0xffffffff);
            if (iVar1 < 1) {
              uVar4 = 0x8e;
              uVar7 = 0xea;
              goto LAB_10089c566;
            }
            uVar11 = uVar11 + (long)iVar1;
            uVar10 = uVar10 - (long)iVar1;
          } while (uVar10 != 0);
        }
      }
      bVar12 = CARRY8(uVar9,local_58[0]);
      uVar9 = uVar9 + local_58[0];
      if (bVar12) {
        uVar4 = 0x9b;
        uVar7 = 0xf6;
        goto LAB_10089c566;
      }
    } while (0 < iVar3);
LAB_10089c53d:
    if ((uVar9 & 0xffffffff80000000) == 0) {
      *param_2 = lVar2;
      goto LAB_10089c57a;
    }
    uVar4 = 0x9b;
    uVar7 = 0x102;
LAB_10089c566:
    FUN_100887ce0(0xd,0x6b,uVar4,"a_d2i_fp.c",uVar7);
LAB_10089c56b:
    FUN_10087cd20(lVar2);
  }
  uVar9 = 0xffffffff;
LAB_10089c57a:
  return uVar9 & 0xffffffff;
}

