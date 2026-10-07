
void FUN_1003681d0(long param_1,undefined4 param_2,int param_3,int param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,uint param_9,undefined8 param_10)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  
  uVar4 = *(uint *)(param_5 + 0xbb64);
  *(uint *)(param_1 + 0x214) = param_9 / uVar4;
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_3 = param_3 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_3 = param_3 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_3 = param_3 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_3 = 0;
  }
  *(int *)(param_1 + 0x218) = param_3;
  uVar1 = 0;
  FUN_100367930(param_1,0,param_6,param_4 * uVar4,uVar4,param_9,param_10);
  if (*(char *)(DAT_1011c8478 + 0x32) != '\0') {
    param_8 = FUN_100367320(param_1,param_2,param_5,param_8);
  }
  (*DAT_1011c5770)(0);
  uVar4 = *(uint *)(param_1 + 0x220);
  (*DAT_1011c5708)(0x8892,0);
  for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      lVar6 = (ulong)uVar1 * 0x20;
      (*DAT_1011c72b0)(uVar1,*(undefined4 *)(param_1 + 0x20 + lVar6),
                       *(undefined4 *)(param_1 + 0x1c + lVar6),
                       *(undefined1 *)(param_1 + 0x24 + lVar6),
                       *(undefined4 *)(param_1 + 0x18 + lVar6),
                       *(int *)(param_1 + 0x14 + lVar6) + param_8);
      (*DAT_1011c7200)(uVar1,0);
      (*DAT_1011c5c90)(uVar1);
      *(undefined8 *)(param_1 + 0x28 + lVar6) = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar6) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar6) = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar6) = 0;
    }
    uVar1 = uVar1 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x230);
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      if ((uVar4 & 1) != 0) {
        (*DAT_1011c7180)(0,0,0,DAT_100b39678,iVar5);
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x228);
  if (uVar4 != 0) {
    uVar1 = 0;
    do {
      if ((uVar4 & 1) != 0) {
        (*DAT_1011c5bd8)(uVar1);
        lVar6 = (ulong)uVar1 * 0x20;
        *(undefined8 *)(param_1 + 0x28 + lVar6) = 0;
        *(undefined8 *)(param_1 + 0x20 + lVar6) = 0;
        *(undefined8 *)(param_1 + 0x18 + lVar6) = 0;
        *(undefined8 *)(param_1 + 0x10 + lVar6) = 0;
      }
      uVar1 = uVar1 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  uVar2 = 0;
  (*DAT_1011c5708)(0x8893,0);
  uVar3 = (ulong)*(uint *)(param_1 + 0x218);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if (*(ushort *)(param_1 + 0x214) <= *(ushort *)(param_7 + uVar2 * 2)) goto LAB_100368435;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
    goto LAB_100368534;
  }
LAB_100368435:
  uVar4 = (uint)uVar2;
  if (uVar4 == *(uint *)(param_1 + 0x218)) goto LAB_100368534;
  uVar1 = uVar4;
  switch(*(undefined4 *)(param_1 + 0x21c)) {
  case 0:
    break;
  case 1:
  case 10:
    uVar1 = uVar4 & 0xfffffffe;
    break;
  default:
    uVar1 = 0;
    break;
  case 3:
  case 0xb:
    bVar7 = uVar4 < 2;
    goto LAB_100368511;
  case 4:
  case 0xc:
    uVar1 = (int)((uVar2 & 0xffffffff) / 3) * 3;
    break;
  case 5:
  case 6:
  case 0xd:
    bVar7 = uVar4 < 3;
LAB_100368511:
    uVar1 = 0;
    if (!bVar7) {
      uVar1 = uVar4;
    }
  }
  *(uint *)(param_1 + 0x218) = uVar1;
  uVar3 = (ulong)uVar1;
LAB_100368534:
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010036855d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5c18)(*(undefined4 *)(param_1 + 0x21c),uVar3,0x1403);
    return;
  }
  return;
}

