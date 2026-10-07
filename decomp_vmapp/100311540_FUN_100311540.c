
void FUN_100311540(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,uint param_10,undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  int local_34;
  
  piVar12 = *(int **)(param_1 + 0xa678);
  iVar13 = 0;
  if (piVar12 != (int *)0x0) {
    iVar13 = *piVar12;
  }
  cVar5 = FUN_100329520(param_1 + 0x38,0xc02,&local_34);
  if (cVar5 == '\0') {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc02,&local_34);
  }
  FUN_100303740(param_1 + 0x38);
  if (piVar12 == (int *)0x0) {
    cVar5 = '\0';
  }
  else if (*(int *)(param_1 + 0x15e0) == *(int *)(param_1 + 0xa680)) {
    if ((local_34 == *(int *)(param_1 + 0xa698)) || (local_34 == *(int *)(param_1 + 0xa694))) {
      cVar5 = (char)((param_10 & 0x4000) >> 0xe);
    }
    else {
      cVar5 = '\0';
    }
  }
  else {
    cVar5 = '\0';
  }
  uVar6 = *(uint *)(param_1 + 0x2630);
  if (((iVar13 == 0x84f5) && (cVar5 != '\0')) && ((uVar6 & 0x10) != 0)) {
    FUN_1003119a0(param_1,**(undefined4 **)(param_1 + 0x30),
                  *(undefined4 *)
                   (param_1 + 0xa684 + (ulong)(local_34 == *(int *)(param_1 + 0xa698)) * 4),0x84f5,
                  0xffffffff,0,0,piVar12[2],piVar12[3],param_2,param_3,param_4,param_5,param_6,
                  param_7,param_8,param_9,0x4000,param_11);
    param_10 = param_10 & 0xffffbfff;
    uVar6 = *(uint *)(param_1 + 0x2630);
  }
  if (((((param_10 & 0x100) != 0) && ((uVar6 & 0x10) != 0)) &&
      ((299 < *(ushort *)(param_1 + 0xa6ac) &&
       ((uVar6 = *(uint *)(param_1 + 0x15e4), uVar6 != 0 &&
        (uVar1 = *(uint *)(param_1 + 0x15e0), uVar1 != 0)))))) && (uVar1 != uVar6)) {
    lVar3 = *(long *)(param_1 + 0x30);
    uVar2 = *(uint *)(lVar3 + 0x2058);
    uVar10 = uVar6;
    if (uVar2 < 0x20) {
      uVar9 = 0x20;
      do {
        uVar9 = uVar9 >> 1;
        uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar9;
      } while (uVar2 < uVar9);
    }
    puVar8 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar10 & 0xff) * 8);
    lVar11 = 0;
    if (puVar8 != (uint *)0x0) {
      lVar11 = 0;
      do {
        if (*puVar8 == uVar6) {
          lVar11 = *(long *)(puVar8 + 2);
          break;
        }
        puVar8 = *(uint **)(puVar8 + 4);
      } while (puVar8 != (uint *)0x0);
    }
    uVar6 = uVar1;
    if (uVar2 < 0x20) {
      uVar10 = 0x20;
      do {
        uVar10 = uVar10 >> 1;
        uVar6 = uVar6 ^ uVar6 >> (sbyte)uVar10;
      } while (uVar2 < uVar10);
    }
    puVar8 = *(uint **)(lVar3 + 0x1858 + (ulong)(uVar6 & 0xff) * 8);
    while( true ) {
      if (puVar8 == (uint *)0x0) goto LAB_100311958;
      if (*puVar8 == uVar1) break;
      puVar8 = *(uint **)(puVar8 + 4);
    }
    if (((lVar11 == 0) || (lVar4 = *(long *)(puVar8 + 2), lVar4 == 0)) ||
       (*(int *)(lVar4 + 0x150) != 0x1702)) goto LAB_100311958;
    uVar6 = *(uint *)(lVar4 + 0x140);
    uVar1 = *(uint *)(lVar11 + 0x140);
    uVar2 = *(uint *)(lVar3 + 0x1848);
    uVar7 = (ulong)uVar6;
    if (uVar2 < 0x20) {
      uVar10 = 0x20;
      uVar7 = (ulong)uVar6;
      do {
        uVar10 = uVar10 >> 1;
        uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar10);
      } while (uVar2 < uVar10);
    }
    puVar8 = *(uint **)(lVar3 + 0x1048 + (uVar7 & 0xff) * 8);
    piVar12 = (int *)0x0;
    if (puVar8 != (uint *)0x0) {
      piVar12 = (int *)0x0;
      do {
        if (*puVar8 == uVar6) {
          piVar12 = *(int **)(puVar8 + 2);
          break;
        }
        puVar8 = *(uint **)(puVar8 + 4);
      } while (puVar8 != (uint *)0x0);
    }
    uVar10 = uVar1;
    if (uVar2 < 0x20) {
      uVar9 = 0x20;
      do {
        uVar9 = uVar9 >> 1;
        uVar10 = uVar10 ^ uVar10 >> (sbyte)uVar9;
      } while (uVar2 < uVar9);
    }
    puVar8 = *(uint **)(lVar3 + 0x1048 + (ulong)(uVar10 & 0xff) * 8);
    while( true ) {
      if (puVar8 == (uint *)0x0) goto LAB_100311958;
      if (*puVar8 == uVar1) break;
      puVar8 = *(uint **)(puVar8 + 4);
    }
    if (((piVar12 != (int *)0x0) && (lVar11 = *(long *)(puVar8 + 2), lVar11 != 0)) &&
       (*piVar12 == 0xde1)) {
      FUN_1003119a0(param_1,*(undefined4 *)(lVar3 + 4),(ulong)uVar6,0xde1,
                    *(undefined4 *)(lVar4 + 0x144),0,0,*(undefined4 *)(lVar11 + 0xc),
                    *(undefined4 *)(lVar11 + 0x10),param_2,param_3,param_4,param_5,param_6,param_7,
                    param_8,param_9,0x100,0x2600);
      param_10 = param_10 & 0xfffffeff;
    }
  }
LAB_100311958:
  if (param_10 != 0) {
    (*DAT_1011c57c8)(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     param_11);
  }
  return;
}

