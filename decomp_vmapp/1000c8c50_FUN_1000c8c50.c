
undefined1 FUN_1000c8c50(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 local_1040 [24];
  undefined1 local_1028 [24];
  undefined4 local_1010;
  undefined4 local_100c;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined4 *local_fe8;
  undefined4 *puStack_fe0;
  undefined4 *local_fd8;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  undefined1 local_fc0 [24];
  undefined1 local_fa8 [1132];
  uint local_b3c;
  int local_b38;
  undefined1 local_5e8 [1456];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar12;
  FUN_1000c95f0(param_1,param_3);
  cVar4 = FUN_1000cae30(param_1);
  if (cVar4 == '\0') {
    uVar9 = 0;
    goto LAB_1000c8d47;
  }
  lVar1 = param_1 + 0x2b8;
  cVar4 = FUN_1000d6640(lVar1,param_1 + 0x1d0);
  if (cVar4 != '\0') {
    cVar4 = FUN_1000d6f20(lVar1);
    if (cVar4 != '\0') {
      local_fc4 = 0x18;
      iVar5 = FUN_1000d6c10(lVar1,0x11,local_fc0,&local_fc4);
      if (iVar5 == 0x11) {
        FUN_1008e3970("","vm",0,"SARE_FIRMWARE_HDR_OPT found");
        puVar11 = local_fc0;
      }
      else {
        FUN_1008e3970("","vm",0,"SARE_FIRMWARE_HDR_OPT not found; defaults will be used");
        puVar11 = (undefined1 *)0x0;
      }
      FUN_100087de0(puVar11);
      local_fc8 = 4;
      iVar5 = FUN_1000d6c10(lVar1,0x13,(int *)(param_1 + 0x44c),&local_fc8);
      if (iVar5 == 0x13) {
        uVar6 = *(int *)(param_1 + 0x44c) - 1;
        if (uVar6 < 4) {
          pcVar8 = (&PTR_s_SelfContext_100ba8f70)[(int)uVar6];
        }
        else {
          pcVar8 = "Unknown";
        }
        FUN_1008e3970("","vm",0,"SaRe state hypervisor engine: %s",pcVar8);
      }
      uVar6 = FUN_1000d6ee0(lVar1,0);
      if (0x3002c < uVar6) {
        local_fcc = 4;
        *(undefined8 *)(param_1 + 0x310) = 0;
        *(undefined8 *)(param_1 + 0x308) = 0;
        *(undefined8 *)(param_1 + 0x300) = 0;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        iVar5 = FUN_1000d6c10(lVar1,6,param_1 + 0x2ec,&local_fcc);
        if (iVar5 == 6) {
          iVar5 = FUN_1000d6c10(lVar1,8,param_1 + 0x2f4,&local_fcc);
          if (iVar5 == 8) {
            iVar5 = FUN_1000d6c10(lVar1,9,param_1 + 0x2f8,&local_fcc);
            if (iVar5 == 9) {
              iVar5 = FUN_1000d6c10(lVar1,10,param_1 + 0x2fc,&local_fcc);
              if (iVar5 == 10) {
                iVar5 = FUN_1000d6c10(lVar1,0xb,param_1 + 0x300,&local_fcc);
                if (iVar5 == 0xb) {
                  iVar5 = FUN_1000d6c10(lVar1,0xc,param_1 + 0x304,&local_fcc);
                  if (iVar5 == 0xc) {
                    iVar5 = FUN_1000d6c10(lVar1,0xd,param_1 + 0x308,&local_fcc);
                    if (iVar5 == 0xd) {
                      if (uVar6 < 0x30046) {
LAB_1000c90eb:
                        *(byte *)(param_1 + 0x2fb) = *(byte *)(param_1 + 0x2fb) | 0x80;
LAB_1000c90ef:
                        FUN_1000effe0(param_1 + 0x2f0,local_fa8,2000);
                        FUN_1008e3970("","vm",0,"Loaded CPU features mask: %s",local_fa8);
                        FUN_1000eee30(param_1 + 0x2f0,local_fa8,2000);
                        FUN_1008e3970("","vm",0,"Loaded CPU features mask: %s",local_fa8);
                        *(undefined1 *)(param_1 + 0x2e8) = 1;
                        goto LAB_1000c9166;
                      }
                      iVar5 = FUN_1000d6c10(lVar1,0xf,param_1 + 0x30c,&local_fcc);
                      if (iVar5 == 0xf) {
                        if (uVar6 < 0x30070) {
                          if (uVar6 < 0x30056) goto LAB_1000c90eb;
                          goto LAB_1000c90ef;
                        }
                        iVar5 = FUN_1000d6c10(lVar1,0x10,param_1 + 0x310,&local_fcc);
                        if (iVar5 == 0x10) {
                          if ((uVar6 < 0x3007d) ||
                             (iVar5 = FUN_1000d6c10(lVar1,0x12,param_1 + 0x314,&local_fcc),
                             iVar5 == 0x12)) goto LAB_1000c90ef;
                          pcVar8 = "SARE_EXT_00000006_EAX_MASK_HDR_OPT option is missed";
                        }
                        else {
                          pcVar8 = "SARE_EXT_0000000D_EAX_MASK_HDR_OPT option is missed";
                        }
                      }
                      else {
                        pcVar8 = "SARE_EXT_00000007_EBX_MASK_HDR_OPT option is missed";
                      }
                    }
                    else {
                      pcVar8 = "SARE_EXT_80000008_EAX_HDR_OPT option is missed";
                    }
                  }
                  else {
                    pcVar8 = "SARE_EXT_80000007_EDX_MASK_HDR_OPT option is missed";
                  }
                }
                else {
                  pcVar8 = "SARE_EXT_80000001_EDX_MASK_HDR_OPT option is missed";
                }
              }
              else {
                pcVar8 = "SARE_EXT_80000001_ECX_MASK_HDR_OPT option is missed";
              }
            }
            else {
              pcVar8 = "SARE_EXT_FEATURES_MASK_HDR_OPT option is missed";
            }
          }
          else {
            pcVar8 = "SARE_FEATURES_MASK_HDR_OPT option is missed";
          }
        }
        else {
          pcVar8 = "SARE_CPU_VENDOR_HDR_OPT option is missed";
        }
        uVar9 = 0;
        FUN_1008e3970("","vm",0,pcVar8);
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_1000c8d47;
      }
LAB_1000c9166:
      FUN_100083820(local_fa8);
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
        _memcpy(local_fa8,(void *)(*(long *)(param_1 + 0x2b0) + 0x140),0xf6c);
      }
      else {
        cVar4 = FUN_1000c8740();
        if (cVar4 == '\0') {
          uVar9 = 0;
          FUN_1008e3970("","vm",0,"Configuration parsing failed");
          goto LAB_1000c8d47;
        }
      }
      uVar9 = 0;
      if (*(char *)(param_1 + 0x2e8) != '\0') {
        iVar5 = FUN_100646bc0(0);
        if ((iVar5 != *(int *)(param_1 + 0x2ec)) ||
           (iVar5 = FUN_1000eec60(param_1 + 0x2f0,local_5e8), iVar5 == 0)) {
          iVar5 = FUN_1000c8430(param_1,1);
          if (iVar5 < 0x3e91) goto LAB_1000c922f;
          if (iVar5 < 0x3e9e) {
            if (iVar5 != 0x3e91) {
              if (iVar5 == 0x3e9a) goto LAB_1000c9265;
LAB_1000c92ea:
              *(undefined4 *)(param_1 + 500) = 0x80020000;
              uVar9 = 0;
              goto LAB_1000c8d47;
            }
          }
          else {
            if (iVar5 == 0x3e9e) goto LAB_1000c927e;
            if (iVar5 != 0x3e9f) goto LAB_1000c92ea;
          }
        }
        uVar9 = 0;
        if (*(char *)(param_1 + 0x2e8) != '\0') {
          uVar9 = *(undefined1 *)(param_1 + 0x308);
        }
      }
      CDispCommonPreferences::getMemoryPreferences();
      cVar4 = CDispMemoryPreferences::isAdjustMemAuto();
      CDispCommonPreferences::getMemoryPreferences();
      if (cVar4 == '\0') {
        uVar6 = CDispMemoryPreferences::getReservedMemoryLimit();
      }
      else {
        uVar6 = CDispMemoryPreferences::getMaxReservedMemoryLimit();
      }
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getMemory();
      iVar5 = CVmMemory::getMaxBalloonSize();
      uVar7 = FUN_1007792d0(uVar9);
      uVar10 = 0x40;
      if (0x58 < uVar6) {
        uVar10 = ((uint)(((((ulong)uVar6 * 100) / (ulong)(100 - iVar5)) * 0x640000 - 0x29680000) /
                        0x664200) & 0xfffffffc) - 0x20;
      }
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((uVar7 < local_b3c) || (uVar10 < local_b38 + local_b3c)) {
        local_fe8 = (undefined4 *)0x0;
        puStack_fe0 = (undefined4 *)0x0;
        local_fd8 = (undefined4 *)0x0;
        local_1008 = 0;
        uStack_1000 = 0;
        local_ff8 = 0;
        FUN_1008e3970("","vm",0,"Cannot resume since too large RAM(%u,%u,%u) < (%u+%u)",uVar6,uVar10
                      ,uVar7,local_b3c,local_b38);
        local_100c = 0x3e9e;
        FUN_10002de70(&local_fe8,&local_100c);
        local_1010 = 0x3e81;
        if (puStack_fe0 == local_fd8) {
          FUN_10002de70(&local_fe8,&local_1010);
        }
        else {
          *puStack_fe0 = 0x3e81;
          puStack_fe0 = puStack_fe0 + 1;
        }
        uVar3 = DAT_1011c3650;
        FUN_10002ddb0(local_1040,&local_1008);
        FUN_10006a5d0(local_1028,local_1040);
        iVar5 = FUN_1000648b0(uVar3,0x3301,&local_fe8,local_1028);
        FUN_10006a680(local_1028);
        FUN_10002d9d0(local_1040);
        if (iVar5 == 0x3e81) {
          *(undefined4 *)(param_1 + 500) = 0x80000275;
LAB_1000c94ec:
          bVar2 = true;
        }
        else {
          bVar2 = false;
          if (iVar5 == 0x3e9e) {
            *(undefined4 *)(param_1 + 500) = 0x80020019;
            goto LAB_1000c94ec;
          }
        }
        FUN_10002d9d0(&local_1008);
        if (local_fe8 != (undefined4 *)0x0) {
          if (puStack_fe0 != local_fe8) {
            puStack_fe0 = (undefined4 *)
                          ((~((long)puStack_fe0 + (-4 - (long)local_fe8)) & 0xfffffffffffffffcU) +
                          (long)puStack_fe0);
          }
          operator_delete(local_fe8);
        }
        if (bVar2) {
          uVar9 = 0;
          goto LAB_1000c8d47;
        }
      }
      uVar9 = 1;
      goto LAB_1000c8d47;
    }
    FUN_1008e3970("","vm",0,"Sav file verification failed");
    cVar4 = FUN_1000d6f00(lVar1);
    if (cVar4 == '\0') {
      iVar5 = FUN_1000c8430(param_1,0);
      if (iVar5 == 0x3e9e) {
LAB_1000c927e:
        *(undefined4 *)(param_1 + 500) = 0x80020019;
        uVar9 = 0;
        goto LAB_1000c8d47;
      }
      if (iVar5 == 0x3e9a) {
LAB_1000c9265:
        *(undefined4 *)(param_1 + 500) = 0x80020012;
        uVar9 = 0;
        goto LAB_1000c8d47;
      }
LAB_1000c922f:
      if (iVar5 == 0x3e81) {
        *(undefined4 *)(param_1 + 500) = 0x80000275;
        uVar9 = 0;
        goto LAB_1000c8d47;
      }
      goto LAB_1000c92ea;
    }
  }
  *(undefined4 *)(param_1 + 500) = 0x80020002;
  uVar9 = 0;
LAB_1000c8d47:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

