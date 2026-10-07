
void FUN_100369ae0(long param_1,undefined4 param_2,int param_3,int param_4,long param_5,
                  undefined8 param_6,void *param_7,undefined8 param_8,uint param_9,long param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar3 = *(uint *)(param_5 + 0xbb64);
  *(uint *)(param_1 + 0x214) = param_9 / uVar3;
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
  uVar1 = param_3 * 2;
  FUN_100367930(param_1,**(undefined4 **)(*(long *)(param_10 + 0x128) + 0x58),param_6,
                param_4 * uVar3,uVar3,param_9,param_10);
  FUN_1003669b0(param_1);
  if (*(int *)(param_1 + 0x25c) != *(int *)(param_1 + 0x238)) {
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x25c);
    (*DAT_1011c5708)(0x8893);
  }
  iVar2 = *(int *)(param_1 + 0x260);
  if ((uint)(*(int *)(param_1 + 0x264) - iVar2) < uVar1) {
    iVar2 = *(int *)(param_1 + 0x268) * 2;
    *(int *)(param_1 + 0x264) = iVar2;
    *(undefined4 *)(param_1 + 0x260) = 0;
    (*DAT_1011c57d8)(0x8893,iVar2,0,0x88e0);
    iVar2 = *(int *)(param_1 + 0x260);
  }
  pvVar5 = (void *)(*DAT_1011c64b0)(0x8893,iVar2,(ulong)uVar1,0x22);
  _memcpy(pvVar5,param_7,(ulong)uVar1);
  (*DAT_1011c6ed0)(0x8893);
  uVar7 = (ulong)*(uint *)(param_1 + 0x218);
  uVar6 = 0;
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      if (*(ushort *)(param_1 + 0x214) <= *(ushort *)((long)param_7 + uVar6 * 2))
      goto LAB_100369c56;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
    goto LAB_100369d42;
  }
LAB_100369c56:
  uVar3 = (uint)uVar6;
  if (uVar3 == *(uint *)(param_1 + 0x218)) goto LAB_100369d42;
  uVar4 = uVar3;
  switch(*(undefined4 *)(param_1 + 0x21c)) {
  case 0:
    break;
  case 1:
  case 10:
    uVar4 = uVar3 & 0xfffffffe;
    break;
  default:
    uVar4 = 0;
    break;
  case 3:
  case 0xb:
    bVar8 = uVar3 < 2;
    goto LAB_100369d1f;
  case 4:
  case 0xc:
    uVar4 = (int)((uVar6 & 0xffffffff) / 3) * 3;
    break;
  case 5:
  case 6:
  case 0xd:
    bVar8 = uVar3 < 3;
LAB_100369d1f:
    uVar4 = 0;
    if (!bVar8) {
      uVar4 = uVar3;
    }
  }
  *(uint *)(param_1 + 0x218) = uVar4;
  uVar7 = (ulong)uVar4;
LAB_100369d42:
  if ((int)uVar7 != 0) {
    (*DAT_1011c5c18)(*(undefined4 *)(param_1 + 0x21c),uVar7,0x1403,*(undefined4 *)(param_1 + 0x260))
    ;
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + uVar1;
  }
  return;
}

