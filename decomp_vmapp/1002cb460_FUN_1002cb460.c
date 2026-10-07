
undefined4 FUN_1002cb460(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint **local_98;
  uint *local_88;
  ulong uStack_80;
  undefined4 local_78;
  uint *local_68;
  ulong uStack_60;
  undefined4 local_58;
  long local_48 [2];
  undefined4 local_38;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_10008d2d0(local_48,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2008),0x1000);
  uVar4 = 0;
  if (local_48[0] == 0) {
    pcVar3 = "Invalid frame list";
  }
  else {
    uVar2 = *(uint *)(local_48[0] +
                     ((ulong)*(ushort *)(*(long *)(param_1 + 0x40) + 0x2006) & 0x3ff) * 4);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) != 0) {
        FUN_10008d2d0(&local_68,uVar2 & 0xfffffff0,0x20);
        uVar4 = 0;
LAB_1002cb6a0:
        do {
          local_98 = &local_68;
          if (local_68 == (uint *)0x0) goto LAB_1002cb7d7;
          uVar2 = local_68[1];
          if ((uVar2 & 1) == 0) {
            if ((uVar2 & 2) != 0) {
              pcVar3 = "Nested QH (#1)";
              goto LAB_1002cb58c;
            }
            FUN_10008d2d0(&local_88,uVar2 & 0xfffffff0,0x20);
            while( true ) {
              if (local_88 == (uint *)0x0) {
                pcVar3 = "Invalid TD";
                goto LAB_1002cb58c;
              }
              if (uStack_80 == *(ulong *)(param_2 + 8)) goto LAB_1002cb77a;
              uVar2 = *local_88;
              if ((uVar2 & 1) != 0) break;
              if ((uVar2 & 2) != 0) {
                pcVar3 = "Nested QH (#2)";
                goto LAB_1002cb58c;
              }
              if ((uVar2 & 4) == 0) break;
              if (uStack_80 == (uVar2 & 0xfffffff0)) {
                pcVar3 = "Linked to self (TD)";
                goto LAB_1002cb58c;
              }
              uVar4 = uVar4 + 1;
              if (*(uint *)(param_1 + 0x14c8) < uVar4) {
                pcVar3 = "Depth limit reached (TD)";
                goto LAB_1002cb58c;
              }
              FUN_10008d2d0(&local_88,(ulong)(uVar2 & 0xfffffff0),0x20);
            }
          }
          uVar2 = *local_68;
          if ((uVar2 & 1) != 0) {
            pcVar3 = "End of frame list";
            goto LAB_1002cb58c;
          }
          if ((uVar2 & 2) == 0) {
            pcVar3 = "Raw TD in QH chain";
            goto LAB_1002cb58c;
          }
          if (uStack_60 == (uVar2 & 0xfffffff0)) {
            pcVar3 = "Linked to self (QH)";
            goto LAB_1002cb58c;
          }
          uVar4 = uVar4 + 1;
          if (*(uint *)(param_1 + 0x14c8) < uVar4) {
            pcVar3 = "Depth limit reached (QH)";
            goto LAB_1002cb58c;
          }
          FUN_10008d2d0(local_98,(ulong)(uVar2 & 0xfffffff0),0x20);
        } while( true );
      }
      FUN_10008d2d0(&local_88,uVar2 & 0xfffffff0,0x20);
      uVar4 = 0;
      while (local_88 != (uint *)0x0) {
        if (uStack_80 == *(ulong *)(param_2 + 8)) goto LAB_1002cb77a;
        uVar2 = *local_88;
        if ((uVar2 & 1) != 0) {
          pcVar3 = "End of frame list (ISO)";
          goto LAB_1002cb58c;
        }
        uVar6 = (ulong)(uVar2 & 0xfffffff0);
        if ((uVar2 & 2) != 0) {
          FUN_10008d2d0(&local_68,uVar6,0x20);
          goto LAB_1002cb6a0;
        }
        if (uStack_80 == uVar6) {
          pcVar3 = "Linked to self (ISO)";
          goto LAB_1002cb58c;
        }
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 0x14c8) < uVar4) {
          pcVar3 = "Depth limit reached (ISO)";
          goto LAB_1002cb58c;
        }
        FUN_10008d2d0(&local_88,uVar6,0x20);
      }
      pcVar3 = "Invalid TD (ISO)";
    }
    else {
      pcVar3 = "Empty frame list";
    }
  }
LAB_1002cb58c:
  uVar2 = *(int *)(param_1 + 0x14cc) + 1;
  *(uint *)(param_1 + 0x14cc) = uVar2;
  if (uVar2 < *(uint *)(param_1 + 0x14d0)) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","USB",3,"[UHC] Invalid TD, addr: 0x%llx, depth: %u, reason: %s, repeated: %u"
                    ,*(undefined8 *)(param_2 + 8),uVar4,pcVar3,uVar2);
    }
    FUN_1007858f0(3,"[UHC]");
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x14d8) + 0xf0);
  *plVar1 = *plVar1 + 1;
  uVar5 = 0;
LAB_1002cb609:
  FUN_10008d3f0(&local_88);
  FUN_10008d3f0(&local_68);
  FUN_10008d3f0(local_48);
  return uVar5;
LAB_1002cb7d7:
  pcVar3 = "Invalid QH";
  goto LAB_1002cb58c;
LAB_1002cb77a:
  *(undefined4 *)(param_1 + 0x14cc) = 0;
  uVar5 = 1;
  goto LAB_1002cb609;
}

