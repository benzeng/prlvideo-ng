
void FUN_10026e2b0(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x8d8;
  uVar8 = FUN_1002eefa0(*(undefined8 *)(param_1 + 0x40));
  FUN_100401de0(lVar1,uVar8);
  bVar2 = true;
  bVar4 = false;
  while( true ) {
    do {
      bVar3 = bVar2;
      if (bVar4) {
        iVar7 = FUN_100402080(lVar1);
        if ((iVar7 == 0) || (*(long *)(param_1 + 0x12e0) == 0)) {
          bVar5 = FUN_1002583d0(param_1);
          bVar6 = bVar5 ^ 1;
          if ((bVar2) && (bVar5 == 0)) {
            FUN_100403000(lVar1);
            iVar7 = FUN_100402080(lVar1);
            if ((iVar7 == 0) || (*(long *)(param_1 + 0x12e0) == 0)) {
              bVar6 = FUN_1002583d0(param_1);
              bVar6 = bVar6 ^ 1;
            }
            else {
              bVar6 = 0;
            }
            if (bVar6 != 0) {
              bVar3 = false;
            }
          }
        }
        else {
          bVar6 = 0;
        }
      }
      else {
        bVar6 = 0;
      }
      iVar7 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),bVar6,0xffffffff);
      if (iVar7 == -0xfffc) {
        FUN_100403000(lVar1);
        FUN_100401de0(lVar1,0);
        return;
      }
      bVar2 = bVar3;
    } while (*(long *)(param_1 + 0x12e0) == 0);
    if (iVar7 == -0xfffd) {
      bVar4 = false;
    }
    bVar2 = true;
    if (iVar7 != -0xfffd) {
      bVar2 = bVar3;
    }
    if (bVar2) break;
LAB_10026e47b:
    if (iVar7 == -0xfffe) {
      bVar4 = true;
    }
    else if (iVar7 == 3) {
      FUN_10026e1f0(param_1);
    }
  }
  uVar8 = FUN_1000b3d20(DAT_1011c3698);
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  do {
    FUN_10026e4d0(param_1);
    while( true ) {
      lVar9 = FUN_100257d80(param_1);
      if (((*(long *)(param_1 + 0x1278) != 0) &&
          ((*(uint *)(*(long *)(param_1 + 0x1278) + 0x10) & 1) != 0)) ||
         (*(int *)(lVar9 + 0x2debc + (ulong)*(uint *)(param_1 + 0x12e8) * 0x538) == 1)) break;
      FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
      lVar9 = FUN_100257d80(param_1);
      if (((*(long *)(param_1 + 0x1278) == 0) ||
          ((*(uint *)(*(long *)(param_1 + 0x1278) + 0x10) & 1) == 0)) &&
         (*(int *)(lVar9 + 0x2debc + (ulong)*(uint *)(param_1 + 0x12e8) * 0x538) != 1)) {
        if (!bVar4) {
          FUN_100403100(lVar1);
        }
        goto LAB_10026e47b;
      }
      FUN_1002ef6d0(*(undefined8 *)(param_1 + 0x40));
    }
  } while( true );
}

