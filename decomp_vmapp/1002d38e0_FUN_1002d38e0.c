
void FUN_1002d38e0(long param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  int *piVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff48;
  ulong local_a0;
  ulong local_90;
  ulong local_58;
  byte local_4c;
  ulong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar15 = (ulong)param_3;
  uVar7 = (ulong)param_2;
  lVar12 = uVar7 * 0x510 + param_1;
  puVar1 = (ulong *)(lVar12 + 0x1610 + uVar15 * 0x28);
  if (3 < DAT_1011c568c) {
    in_stack_ffffffffffffff38 =
         CONCAT44((int)((ulong)in_stack_ffffffffffffff38 >> 0x20),(int)(*puVar1 >> 0x20));
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d] PROCESS RING (dp:%08x%08x c:%d)",uVar7 & 0xff,
                  uVar15 & 0xff,in_stack_ffffffffffffff38,(int)*puVar1,
                  CONCAT44((int)((ulong)in_stack_ffffffffffffff48 >> 0x20),
                           (uint)*(byte *)(lVar12 + 0x1620 + uVar15 * 0x28)) & 0xffffffff00000001);
  }
  uVar13 = *puVar1;
  if (uVar13 == 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d] Ring not initialized!",uVar7 & 0xff,
                    uVar15 & 0xff);
      return;
    }
  }
  else {
    pbVar2 = (byte *)(lVar12 + 0x1620 + uVar15 * 0x28);
    piVar3 = (int *)(lVar12 + 0x1634 + uVar15 * 0x28);
    *(undefined4 *)(lVar12 + 0x1634 + uVar15 * 0x28) = 0;
    bVar5 = *(byte *)(lVar12 + 0x1620 + uVar15 * 0x28) & 1;
    param_2 = param_2 & 0xff;
    param_3 = param_3 & 0xff;
    local_a0 = 0;
    local_90 = uVar13;
    do {
      uVar7 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar7 = 0xb0000000;
      }
      uVar4 = uVar13;
      if (uVar7 <= uVar13) break;
      local_48 = (ulong *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_10008d2d0(&local_48,uVar13,0x10);
      uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
      if ((*(uint *)((long)local_48 + 0xc) & 1) != (*pbVar2 & 1)) {
        if (2 < DAT_1011c568c) {
          iVar11 = *piVar3;
          uVar8 = FUN_1002da200(local_48,*puVar1);
          FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d][%c%d] %s -> RING IS EMPTY",param_2,param_3
                        ,CONCAT44(uVar16,(iVar11 != 0) + 0x4e + (uint)(iVar11 != 0)),iVar11,uVar8);
        }
LAB_1002d3dda:
        FUN_10008d3f0(&local_48);
        *puVar1 = local_90;
        *pbVar2 = *pbVar2 & 0xfe | bVar5;
        return;
      }
      uVar14 = *(uint *)((long)local_48 + 0xc) >> 10 & 0x3f;
      if ((0x32 < uVar14) || ((0x6000000fffffeU >> uVar14 & 1) == 0)) {
        if (-1 < DAT_1011c568c) {
          iVar11 = *piVar3;
          uVar8 = FUN_1002da200(local_48,*puVar1);
          FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d][%c%d] %s -> UNSUPPORTED COMMAND!!!",
                        param_2,param_3,CONCAT44(uVar16,(iVar11 != 0) + 0x4e + (uint)(iVar11 != 0)),
                        iVar11,uVar8);
        }
        goto LAB_1002d3dda;
      }
      uVar6 = (**(code **)(&DAT_100bb3840 + (ulong)uVar14 * 8))
                        (param_1,local_48,&local_58,param_2,param_3);
      uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
      if (1 < DAT_1011c568c) {
        iVar11 = *piVar3;
        uVar8 = FUN_1002da200(local_48,*puVar1);
        uVar9 = FUN_1002da590(uVar6);
        in_stack_ffffffffffffff38 = CONCAT44(uVar16,(iVar11 != 0) + 0x4e + (uint)(iVar11 != 0));
        FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d][%c%d] %s -> %s",param_2,param_3,
                      in_stack_ffffffffffffff38,iVar11,uVar8,uVar9);
      }
      if ((uVar6 & 0x8000) == 0) {
        iVar11 = 0;
        if ((uVar6 & 0x4000) != 0 || *piVar3 != 0) {
          iVar11 = *piVar3 + 1;
          *piVar3 = iVar11;
        }
        if (((uVar6 & 0x800) == 0) ||
           ((((uVar14 | 4) != 6 && (iVar11 != 0)) && ((*(byte *)((long)local_48 + 0xc) & 0x10) == 0)
            ))) goto LAB_1002d3dda;
        if ((uVar6 & 0x2000) != 0) {
          puVar10 = puVar1;
          if ((local_4c & 4) != 0) {
            puVar10 = local_48;
          }
          local_58 = *puVar10;
          FUN_1002d20c0(param_1,uVar6 & 0x3ff,&local_58,uVar6 >> 10 & 1,0);
        }
        uVar14 = *(uint *)((long)local_48 + 0xc);
        if ((uVar14 & 0x10) == 0) {
          *(undefined4 *)(lVar12 + 0x1624 + uVar15 * 0x28) = 0x1000000;
          uVar14 = *(uint *)((long)local_48 + 0xc);
        }
        if ((uVar14 & 0xfc00) == 0x1800) {
          uVar7 = *local_48 & 0xfffffffffffffff0;
        }
        else {
          uVar7 = *puVar1 + 0x10;
        }
        *puVar1 = uVar7;
        if ((uVar6 & 0x1000) != 0) {
          *pbVar2 = *pbVar2 ^ 1;
        }
        if (*piVar3 == 0) {
          bVar5 = *pbVar2 & 1;
          local_90 = uVar7;
        }
      }
      else {
        *piVar3 = 0;
        *puVar1 = local_90;
        *pbVar2 = *pbVar2 & 0xfe | bVar5;
      }
      FUN_10008d3f0(&local_48);
      uVar13 = *puVar1;
      uVar4 = local_a0;
    } while (uVar13 != 0);
    local_a0 = uVar4;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][RING%d] Ring has invalid ep address 0x%llx!",param_2,
                    param_3,local_a0);
    }
  }
  return;
}

