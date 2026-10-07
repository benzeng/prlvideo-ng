
void FUN_1002d2890(long param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  bool bVar7;
  ulong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar6 = (ulong)param_2;
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x590 + uVar6 * 0x20) & 0xfffffffffffffff0;
  if (uVar3 == 0) {
    bVar7 = false;
LAB_1002d2a08:
    if (1 < DAT_1011c568c) {
      pcVar5 = "invalid ERST memory";
      if (bVar7) {
        pcVar5 = "ring is disabled.";
      }
      FUN_1008e3970("","USB",0,"[XHC][ER%d] Deinit %s",uVar6,pcVar5);
    }
    *(undefined8 *)(param_1 + 0x14f0 + uVar6 * 0x28) = 0;
    *(undefined8 *)(param_1 + 0x14e8 + uVar6 * 0x28) = 0;
    *(undefined8 *)(param_1 + 0x14e0 + uVar6 * 0x28) = 0;
    *(undefined8 *)(param_1 + 0x14d8 + uVar6 * 0x28) = 0;
    *(undefined8 *)(param_1 + 0x14d0 + uVar6 * 0x28) = 0;
    return;
  }
  uVar4 = DAT_1011c5640;
  if (0xb0000000 < DAT_1011c5640) {
    uVar4 = 0xb0000000;
  }
  if (uVar4 <= uVar3) {
    bVar7 = false;
    goto LAB_1002d2a08;
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x40) + 0x588 + uVar6 * 0x20);
  uVar2 = uVar1 + uVar3;
  if (uVar2 == 0) {
    bVar7 = false;
    goto LAB_1002d2a08;
  }
  bVar7 = uVar2 < uVar4;
  if ((uVar1 == 0) || (uVar4 <= uVar2)) goto LAB_1002d2a08;
  local_48 = (ulong *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,uVar3 + (ulong)param_3 * 0x10,0x10);
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC][ER%d] Update ER ST. ERST_ENTRY[%08x%08x/%x] = (%08x%08x, %04x)",
                  param_2,uStack_40._4_4_,(undefined4)uStack_40,local_38,
                  *(undefined4 *)((long)local_48 + 4),(int)*local_48,(short)local_48[1]);
  }
  uVar3 = *local_48 & 0xffffffffffffffc0;
  if (uVar3 != 0) {
    uVar4 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar4 = 0xb0000000;
    }
    if (uVar3 < uVar4) {
      *(ulong *)(param_1 + 0x14d0 + uVar6 * 0x28) = uVar3;
      uVar1 = (ushort)local_48[1];
      *(uint *)(param_1 + 0x14dc + uVar6 * 0x28) = (uint)uVar1;
      if (((uVar1 < 0x10) || (0x1000 < uVar1)) && (-1 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[XHC][ER%d] Incorrect ER segment size (%d)!",uVar6);
      }
      *(uint *)(param_1 + 0x14d8 + uVar6 * 0x28) = param_3;
      *(byte *)(param_1 + 0x14e0 + uVar6 * 0x28) =
           *(byte *)(param_1 + 0x14e0 + uVar6 * 0x28) & 0xfe | param_4 != 0;
      goto LAB_1002d2b5f;
    }
  }
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC][ER%d] Invalid endpoint address (0x%llx)!",uVar6);
  }
  *(undefined8 *)(param_1 + 0x14f0 + uVar6 * 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14e8 + uVar6 * 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14e0 + uVar6 * 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14d8 + uVar6 * 0x28) = 0;
  *(undefined8 *)(param_1 + 0x14d0 + uVar6 * 0x28) = 0;
LAB_1002d2b5f:
  FUN_10008d3f0(&local_48);
  return;
}

