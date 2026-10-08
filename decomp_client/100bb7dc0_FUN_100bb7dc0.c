
void FUN_100bb7dc0(long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
                  long param_7)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  
  if ((param_4 == 8) && (param_6 == 0 && param_5 == 0)) {
    FUN_100bb6e00(param_1,param_2,param_3);
    return;
  }
  if ((int)param_4 < 0x10) {
    FUN_100bb8300(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    if (-1 < param_6 + param_5) {
      return;
    }
    ___bzero(param_1 + (long)(int)(param_5 + param_4 * 2 + param_6) * 8,
             (long)-(param_6 + param_5) << 3);
    return;
  }
  iVar6 = (int)param_4 / 2;
  iVar11 = iVar6 + param_5;
  iVar14 = iVar6 + param_6;
  lVar15 = (long)iVar6;
  lVar10 = param_2 + lVar15 * 8;
  iVar16 = -param_5;
  iVar7 = FUN_100bb8460(param_2,lVar10,iVar11,iVar16);
  lVar1 = param_3 + lVar15 * 8;
  iVar8 = FUN_100bb8460(lVar1,param_3,iVar14,param_6);
  bVar4 = false;
  switch(iVar8 + 4 + iVar7 * 3) {
  case 0:
    FUN_100bb8510(param_7,lVar10,param_2,iVar11,param_5);
    iVar7 = -param_6;
    lVar12 = lVar1;
    lVar13 = param_3;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    bVar4 = true;
  default:
    bVar5 = false;
    goto LAB_100bb7ffd;
  case 2:
    FUN_100bb8510(param_7,lVar10,param_2,iVar11,param_5);
    lVar12 = param_3;
    lVar13 = lVar1;
    iVar7 = param_6;
    goto LAB_100bb7fb4;
  case 6:
    FUN_100bb8510(param_7,param_2,lVar10,iVar11,iVar16);
    lVar12 = lVar1;
    lVar13 = param_3;
    iVar7 = -param_6;
LAB_100bb7fb4:
    FUN_100bb8510(param_7 + lVar15 * 8,lVar13,lVar12,iVar14,iVar7);
    bVar5 = true;
    goto LAB_100bb7ff7;
  case 8:
    FUN_100bb8510(param_7,param_2,lVar10,iVar11,iVar16);
    lVar12 = param_3;
    lVar13 = lVar1;
    iVar7 = param_6;
  }
  FUN_100bb8510(param_7 + lVar15 * 8,lVar13,lVar12,iVar14,iVar7);
  bVar5 = false;
LAB_100bb7ff7:
  bVar4 = false;
LAB_100bb7ffd:
  if (((param_4 & 0xfffffffe) == 8) && (param_6 == 0 && param_5 == 0)) {
    puVar17 = (undefined8 *)(param_7 + (long)(int)param_4 * 8);
    if (bVar4) {
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    else {
      FUN_100bb8800(puVar17,param_7,param_7 + lVar15 * 8);
    }
    FUN_100bb8800(param_1,param_2,param_3);
    lVar13 = param_1 + (long)(int)param_4 * 8;
    FUN_100bb8800(lVar13,lVar10,lVar1);
  }
  else if (((param_4 & 0xfffffffe) == 0x10) && (param_6 == 0 && param_5 == 0)) {
    puVar17 = (undefined8 *)(param_7 + (long)(int)param_4 * 8);
    if (bVar4) {
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    else {
      FUN_100bb6e00(puVar17,param_7,param_7 + lVar15 * 8);
    }
    FUN_100bb6e00(param_1,param_2,param_3);
    lVar13 = param_1 + (long)(int)param_4 * 8;
    FUN_100bb6e00(lVar13,lVar10,lVar1);
  }
  else {
    lVar12 = param_7 + (long)(int)(param_4 * 2) * 8;
    lVar13 = (long)(int)param_4;
    puVar17 = (undefined8 *)(param_7 + lVar13 * 8);
    if (bVar4) {
      ___bzero(puVar17,lVar13 * 8);
    }
    else {
      FUN_100bb7dc0(puVar17,param_7,param_7 + lVar15 * 8,lVar15,0,0,lVar12);
    }
    FUN_100bb7dc0(param_1,param_2,param_3,iVar6,0,0,lVar12);
    lVar13 = param_1 + lVar13 * 8;
    FUN_100bb7dc0(lVar13,lVar10,lVar1,iVar6,param_5,param_6,lVar12);
  }
  iVar7 = FUN_100bb6bb0(param_7,param_1,lVar13,param_4);
  if (bVar5) {
    iVar8 = FUN_100bb8740(puVar17,param_7,puVar17,param_4);
    iVar8 = -iVar8;
  }
  else {
    iVar8 = FUN_100bb6bb0(puVar17,puVar17,param_7,param_4);
  }
  lVar10 = param_1 + lVar15 * 8;
  iVar11 = FUN_100bb6bb0(lVar10,lVar10,puVar17,param_4);
  iVar11 = iVar11 + iVar7 + iVar8;
  if (iVar11 != 0) {
    lVar10 = (long)(int)(iVar6 + param_4);
    puVar2 = (ulong *)(param_1 + lVar10 * 8);
    uVar3 = *puVar2;
    *(ulong *)(param_1 + lVar10 * 8) = (long)iVar11 + *puVar2;
    if (CARRY8((long)iVar11,uVar3)) {
      plVar9 = (long *)(param_1 + 8 + lVar10 * 8);
      do {
        *plVar9 = *plVar9 + 1;
        lVar10 = *plVar9;
        plVar9 = plVar9 + 1;
      } while (lVar10 == 0);
    }
  }
  return;
}

