
void FUN_1002cee70(long param_1,long param_2,long *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar7 = *param_4;
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,uVar7 & 0xffffffe0,0x20);
  uVar3 = *(ushort *)(*param_3 + 6) & 0x7ff;
  *param_4 = 0;
  uVar9 = local_48[2];
  uVar6 = *(uint *)(param_2 + 0x438);
  uVar8 = *(uint *)(param_2 + 0x43c);
  while( true ) {
    uVar9 = (uVar9 >> 0x10 & 0x7fff) - *param_5;
    uVar10 = uVar6 - uVar8;
    if (uVar9 <= uVar6 - uVar8) {
      uVar10 = uVar9;
    }
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[EHC] SKB_PUT %u %u %x",uVar10,*param_5,uVar7);
    }
    if (*(int *)(param_2 + 0x450) != 0x69) {
      uVar9 = ((local_48[3] & 0xfff) + *param_5 >> 0xc) + (local_48[2] >> 0xc & 7);
      bVar11 = uVar10 != 0;
      uVar5 = 0;
      if ((uVar9 < 5) && (uVar10 != 0)) {
        uVar6 = *param_5 + local_48[3] & 0xfff;
        lVar4 = (ulong)uVar9 + 3;
        uVar5 = 0;
        while( true ) {
          uVar8 = uVar10 - (int)uVar5;
          uVar9 = 0x1000 - uVar6;
          if (uVar8 < 0x1000 - uVar6) {
            uVar9 = uVar8;
          }
          if ((uVar9 != 0) && (uVar6 = local_48[lVar4] & 0xfffff000 | uVar6, uVar6 != 0)) {
            FUN_10008cba0(DAT_1011c3688,param_2 + 0x4d8 + uVar5 + *(uint *)(param_2 + 0x43c),uVar6);
          }
          uVar9 = (int)uVar5 + uVar9;
          uVar5 = (ulong)uVar9;
          bVar11 = uVar9 < uVar10;
          if ((4 < (int)lVar4 - 2U) || (uVar10 <= uVar9)) break;
          lVar4 = lVar4 + 1;
          uVar6 = 0;
        }
      }
      if ((bVar11) || (0x50000000 < (local_48[2] & 0x7fff0000))) {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,
                        "[EHC] invalid USB qTD descriptor fixup. Too much BytesToTransfer %u/%u",
                        uVar5,uVar10);
        }
        local_48[2] = local_48[2] & 0x8000ffff |
                      ((uint)uVar5 - uVar10) * 0x10000 + local_48[2] & 0x7fff0000;
        uVar10 = (uint)uVar5;
      }
    }
    *(int *)(param_2 + 0x43c) = *(int *)(param_2 + 0x43c) + uVar10;
    uVar9 = *param_5;
    *param_5 = uVar9 + uVar10;
    if ((*(int *)(param_2 + 0x43c) == *(int *)(param_2 + 0x438)) &&
       (uVar9 + uVar10 < (*(ushort *)((long)local_48 + 10) & 0x7fff))) break;
    lVar4 = (long)*(int *)(param_1 + 0x14c8);
    if (lVar4 < 0x400) {
      *(uint *)(param_1 + 0x14cc + lVar4 * 4) = uVar7;
      *(int *)(param_1 + 0x14c8) = *(int *)(param_1 + 0x14c8) + 1;
    }
    uVar7 = *local_48;
    *param_5 = 0;
    if (((uVar7 & 1) != 0) || ((uVar7 & 0xffffffe0) == 0)) goto LAB_1002cf267;
    uVar5 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar5 = 0xb0000000;
    }
    if ((uVar5 <= (uVar7 & 0xffffffe0)) ||
       (cVar2 = FUN_1002c78a0((int *)(param_1 + 0x14c8),uVar7), cVar2 != '\0')) goto LAB_1002cf267;
    uVar1 = local_48[2];
    FUN_10008d3f0(&local_48);
    uStack_40 = 0;
    FUN_10008d2d0(&local_48,(ulong)(uVar7 & 0xffffffe0),0x20);
    uVar9 = local_48[2];
    if ((uVar9 & 0xc0) != 0x80) goto LAB_1002cf267;
    if (((((*(uint *)(param_2 + 0x450) != (uint)(byte)(&DAT_100b38460)[uVar9 >> 8 & 3]) ||
          (uVar10 == 0)) || ((uVar9 & 0x7fff0000) == 0)) ||
        ((uVar8 = *(uint *)(param_2 + 0x43c), uVar8 % uVar3 != 0 ||
         (uVar6 = *(uint *)(param_2 + 0x438), uVar8 == uVar6)))) ||
       (((uVar1 & 0x8000) != 0 && ((*(byte *)(*(long *)(param_2 + 0x458) + 0x90) & 2) == 0))))
    goto LAB_1002cf225;
  }
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[EHC] partial packet at %u");
  }
  *param_4 = uVar7;
LAB_1002cf2b8:
  FUN_10008d3f0(&local_48);
  return;
LAB_1002cf225:
  *param_4 = uVar7;
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[EHC] break packet at %x %u",uVar7,*param_5);
  }
LAB_1002cf267:
  if ((*(int *)(param_2 + 0x450) == 0x69) && (*(int *)(param_2 + 0x44c) != 0)) {
    uVar7 = (uVar3 - 1) + *(int *)(param_2 + 0x43c);
    *(uint *)(param_2 + 0x43c) = uVar7 - uVar7 % uVar3;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x458) + 0x90) & 1) == 0) {
    *param_4 = 0;
  }
  goto LAB_1002cf2b8;
}

