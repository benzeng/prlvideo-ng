
void FUN_100366b30(long param_1,undefined4 param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar1 = *(uint *)(param_7 + 0x238);
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_4 = param_4 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_4 = param_4 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_4 = param_4 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_4 = 0;
  }
  *(uint *)(param_1 + 0x218) = param_4;
  FUN_1003662d0(param_1,param_6,param_7,param_8);
  if (*(char *)(DAT_1011c8478 + 0x32) != '\0') {
    FUN_100366800(param_1,param_2,param_6);
  }
  FUN_1003669b0(param_1);
  lVar2 = *(long *)(param_7 + 0x230);
  if (*(int *)(param_1 + 0x238) != **(int **)(lVar2 + 0x58)) {
    *(int *)(param_1 + 0x238) = **(int **)(lVar2 + 0x58);
    (*DAT_1011c5708)(0x8893);
  }
  uVar5 = *(uint *)(lVar2 + 0xc) / uVar1 - param_3;
  if (*(uint *)(param_1 + 0x218) < uVar5) {
    uVar5 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar5;
  if (uVar1 == 4) {
    cVar4 = FUN_10032d900(lVar2,param_3,uVar5,*(undefined4 *)(param_1 + 0x214));
    uVar11 = 0x1405;
    if (cVar4 != '\0') goto LAB_100366ddb;
    lVar6 = (*DAT_1011c64a0)(0x8893,35000);
    uVar7 = (ulong)*(uint *)(param_1 + 0x218);
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (*(uint *)(param_1 + 0x214) <= *(uint *)(lVar6 + (long)param_3 * 4 + uVar8 * 4)) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar7;
      } while (uVar8 < uVar7);
    }
  }
  else {
    if (uVar1 != 2) {
      *(undefined4 *)(param_1 + 0x218) = 0;
      uVar11 = 0;
      goto LAB_100366ddb;
    }
    uVar11 = 0x1403;
    if ((0xfffe < *(uint *)(param_1 + 0x214)) ||
       (cVar4 = FUN_10032d900(lVar2,param_3,uVar5), cVar4 != '\0')) goto LAB_100366ddb;
    lVar6 = (*DAT_1011c64a0)(0x8893,35000);
    uVar7 = (ulong)*(uint *)(param_1 + 0x218);
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (*(ushort *)(param_1 + 0x214) <= *(ushort *)(lVar6 + (long)param_3 * 2 + uVar8 * 2))
        break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar7;
      } while (uVar8 < uVar7);
    }
  }
  *(int *)(param_1 + 0x218) = (int)uVar9;
  (*DAT_1011c6ed0)(0x8893);
  if (param_4 == *(uint *)(param_1 + 0x218)) {
    FUN_10032d990(lVar2,param_3,param_4,*(undefined4 *)(param_1 + 0x214));
  }
LAB_100366ddb:
  uVar5 = *(uint *)(param_1 + 0x218);
  if (uVar5 != param_4) {
    switch(*(undefined4 *)(param_1 + 0x21c)) {
    case 0:
      break;
    case 1:
    case 10:
      uVar5 = uVar5 & 0xfffffffe;
      break;
    default:
      uVar5 = 0;
      break;
    case 3:
    case 0xb:
      if (uVar5 < 2) {
        uVar5 = 0;
      }
      break;
    case 4:
    case 0xc:
      uVar5 = (uVar5 / 3) * 3;
      break;
    case 5:
    case 6:
    case 0xd:
      if (uVar5 < 3) {
        uVar5 = 0;
      }
    }
    *(uint *)(param_1 + 0x218) = uVar5;
    param_4 = uVar5;
  }
  if (param_4 == 0) {
    return;
  }
  FUN_10035c310(*(undefined8 *)(param_1 + 8));
  uVar9 = (ulong)(param_3 * uVar1);
  uVar5 = *(uint *)(param_1 + 0x218);
  iVar10 = *(int *)(param_1 + 0x21c);
  if ((0xfffe < uVar5) && (iVar10 == 5)) {
    (*DAT_1011c5c28)(5,0xfffe,uVar11,uVar9,*(undefined4 *)(param_1 + 0x210));
    uVar3 = uVar5;
    while( true ) {
      uVar3 = uVar3 - 0xfffc;
      uVar9 = uVar9 + uVar1 * 0xfffc;
      if (uVar3 < 0xffff) break;
      (*DAT_1011c5c28)(*(undefined4 *)(param_1 + 0x21c),0xfffe,uVar11,uVar9,
                       *(undefined4 *)(param_1 + 0x210));
    }
    uVar5 = uVar5 * 2 + ((((uVar5 - 0xffff) / 0xfffc) * -0xfffc + -0x1fffb) - (uVar5 - 0xffff));
    iVar10 = *(int *)(param_1 + 0x21c);
  }
                    /* WARNING: Could not recover jumptable at 0x000100366f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5c28)(iVar10,uVar5,uVar11,uVar9,*(undefined4 *)(param_1 + 0x210));
  return;
}

