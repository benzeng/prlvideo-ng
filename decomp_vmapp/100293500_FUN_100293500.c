
byte FUN_100293500(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  char *local_890;
  uint local_870 [2];
  undefined1 local_868 [32];
  char local_848;
  undefined7 uStack_847;
  int local_840;
  undefined4 uStack_83c;
  undefined8 local_838;
  undefined6 local_830;
  short sStack_82a;
  byte local_827;
  ushort local_826;
  ushort local_822;
  uint local_820;
  int local_801;
  undefined1 local_48;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar1 = *(ulong **)(param_2 + 0x38);
  local_38 = lVar10;
  if (*(char *)(param_1 + 0x1088) != '\0') {
    FUN_10026cc10(param_1 + 0x1068);
  }
  bVar3 = 1;
  if (*(long *)(param_1 + 0x1090) != 0) {
    bVar3 = 1;
    FUN_10025b2f0(param_1 + 0x68,1);
    if (*(int *)((long)puVar1 + 0x14) == 1) {
      bVar3 = FUN_1002933c0(param_1,*puVar1,(int)puVar1[2],puVar1[1]);
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        return bVar3 ^ 1;
      }
      goto LAB_100293dd5;
    }
    if (*(int *)((long)puVar1 + 0x14) == 0x69) {
      plVar2 = *(long **)(param_1 + 0x1090);
      uStack_40 = 0;
      uStack_3f = 0;
      uStack_3e = 0;
      local_48 = 0;
      uStack_47 = 0;
      uStack_46 = 0;
      uStack_42 = 0;
      uStack_41 = 0;
      (**(code **)(*plVar2 + 0x20))
                (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,0x12,0xffffffff,
                 local_870);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,0x12,0xffffffff,
                 local_870);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,0x12,0xffffffff,
                 local_870);
      local_48 = 0x43;
      uStack_41 = 8;
      uStack_3f = 0x40;
      iVar4 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,0x12,
                         0xffffffff,local_870);
      iVar6 = local_840;
      bVar11 = false;
      uVar9 = 0;
      if (iVar4 == 0) {
        uStack_3f = 0;
        uStack_3e = 0;
        uStack_47 = 0;
        uStack_42 = 0;
        local_48 = 0x28;
        uVar5 = local_840 + 0x10;
        uStack_46 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                    uVar5 * 0x1000000;
        uStack_41 = 0;
        uStack_40 = 1;
        iVar4 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,0x12,
                           0xffffffff,local_870);
        bVar11 = false;
        uVar9 = 0;
        if (iVar4 == 0) {
          iVar4 = _memcmp(&local_848,&DAT_100b363d0,0x10);
          if (iVar4 == 0) {
LAB_10029399c:
            uVar5 = iVar6 + local_801;
            uStack_3f = 0;
            uStack_3e = 0;
            uStack_47 = 0;
            uStack_42 = 0;
            local_48 = 0x28;
            uStack_46 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 * 0x1000000;
            uStack_41 = 0;
            uStack_40 = 1;
            local_890 = &local_848;
            iVar6 = (**(code **)(*plVar2 + 0x20))
                              (plVar2,&local_48,0xc,local_890,0x800,local_890,0x800,local_868,0x12,
                               0xffffffff,local_870);
            bVar11 = false;
            uVar9 = 0;
            if ((iVar6 == 0) && (((uint)CONCAT71(uStack_847,local_848) & 0xff) == 1)) {
              bVar11 = false;
              uVar9 = 0;
              if (sStack_82a == -0x55ab) {
                bVar11 = false;
                uVar9 = 0;
                if ((short)((short)((uint7)uStack_847 >> 0x18) + (short)((uint7)uStack_847 >> 8) +
                            (short)((uint7)uStack_847 >> 0x28) +
                            (short)CONCAT71(uStack_847,local_848) + (short)local_840 +
                            (short)((uint)local_840 >> 0x10) + (short)uStack_83c +
                            (short)((uint)uStack_83c >> 0x10) + (short)local_838 +
                            (short)((ulong)local_838 >> 0x10) + (short)((ulong)local_838 >> 0x20) +
                            (short)((ulong)local_838 >> 0x30) + (short)local_830 +
                            (short)((uint6)local_830 >> 0x10) + (short)((uint6)local_830 >> 0x20))
                    == 0x55ab) {
                  uVar7 = 0x7c0;
                  if (local_826 != 0) {
                    uVar7 = local_826;
                  }
                  if ((local_827 & 0xf) == 0) {
                    uVar5 = local_822 + 3;
                    uVar8 = uVar5 >> 2;
                    uStack_3f = 0;
                    uStack_3e = 0;
                    uStack_47 = 0;
                    uStack_42 = 0;
                    local_48 = 0x28;
                    uStack_46 = local_820 >> 0x18 | (local_820 & 0xff0000) >> 8 |
                                (local_820 & 0xff00) << 8 | local_820 << 0x18;
                    uStack_40 = (undefined1)uVar8;
                    uStack_41 = (undefined1)(uVar8 >> 8);
                    uVar8 = uVar8 << 0xb;
                    if ((uVar5 < 8) || (local_890 = _malloc((ulong)uVar8), local_890 != (char *)0x0)
                       ) {
                      iVar6 = (**(code **)(*plVar2 + 0x20))
                                        (plVar2,&local_48,0xc,local_890,uVar8,local_890,uVar8,
                                         local_868,0x12,0xffffffff,local_870);
                      bVar11 = iVar6 == 0;
                      if ((bVar11) && (uVar8 == local_870[0])) {
                        FUN_10008c9b0(DAT_1011c3688,(ulong)uVar7 << 4,local_890,uVar8);
                      }
                      if (7 < uVar5) {
                        _free(local_890);
                      }
                      uVar9 = 0;
                      if (iVar6 == 0) {
                        uVar9 = (ulong)uVar7;
                      }
                    }
                    else {
                      FUN_1008e3970("","LocalDevices",0,"[DVDROM:sata] memory allocation error");
                      bVar11 = false;
                      uVar9 = 0;
                    }
                  }
                  else {
                    FUN_1008e3970("","LocalDevices",0,
                                  "[DVDROM:sata] type %d of emulation is required",local_827 & 0xf);
                    bVar11 = false;
                    uVar9 = 0;
                  }
                }
              }
            }
          }
          else {
            bVar11 = false;
            uVar9 = 0;
            if (local_848 != -1) {
              uStack_3f = 0;
              uStack_3e = 0;
              uStack_47 = 0;
              uStack_42 = 0;
              local_48 = 0x28;
              uVar5 = iVar6 + 0x11;
              uStack_46 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 * 0x1000000;
              uStack_41 = 0;
              uStack_40 = 1;
              iVar4 = (**(code **)(*plVar2 + 0x20))
                                (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,local_868,
                                 0x12,0xffffffff,local_870);
              bVar11 = false;
              uVar9 = 0;
              if (iVar4 == 0) {
                iVar4 = _memcmp(&local_848,&DAT_100b363d0,0x10);
                if (iVar4 == 0) goto LAB_10029399c;
                bVar11 = false;
                uVar9 = 0;
                if (local_848 != -1) {
                  uStack_3f = 0;
                  uStack_3e = 0;
                  uStack_47 = 0;
                  uStack_42 = 0;
                  local_48 = 0x28;
                  uVar5 = iVar6 + 0x12;
                  uStack_46 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                              uVar5 * 0x1000000;
                  uStack_41 = 0;
                  uStack_40 = 1;
                  iVar4 = (**(code **)(*plVar2 + 0x20))
                                    (plVar2,&local_48,0xc,&local_848,0x800,&local_848,0x800,
                                     local_868,0x12,0xffffffff,local_870);
                  bVar11 = false;
                  uVar9 = 0;
                  if (iVar4 == 0) {
                    iVar4 = _memcmp(&local_848,&DAT_100b363d0,0x10);
                    if ((iVar4 == 0) || (bVar11 = false, uVar9 = 0, local_848 != -1))
                    goto LAB_10029399c;
                  }
                }
              }
            }
          }
        }
      }
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (bVar11) {
        *puVar1 = uVar9;
        bVar3 = 0;
      }
    }
  }
  if (lVar10 == local_38) {
    return bVar3;
  }
LAB_100293dd5:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

