
undefined1 FUN_100ad28b0(long *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  double local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80;
  undefined1 local_78 [16];
  uint local_68;
  uint local_64;
  double local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  int *local_48;
  long local_40;
  undefined1 local_31;
  
  QMutex::lock();
  FUN_100acd3f0(&local_48,param_1[2]);
  auVar11._8_8_ = local_78._8_8_;
  auVar11._0_8_ = local_78._0_8_;
  if (local_48 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    if (local_48[1] == 0) {
      uVar3 = 0;
    }
    else if (local_40 == 0) {
      uVar3 = 0;
      local_78 = auVar11;
    }
    else {
      local_c0 = (double)param_1[0x158];
      uVar6 = FUN_100319390(param_1[4]);
      FUN_10018c2b0(uVar6);
      if (DAT_100e11050 < local_c0) {
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmCommonOptions();
        iVar4 = CVmCommonOptions::getOsType();
        if (iVar4 == 8) {
          CVmConfiguration::getVmSettings();
          CVmSettings::getVmCommonOptions();
          iVar4 = CVmCommonOptions::getOsVersion();
          if (iVar4 == 0x80c) {
            CVmConfiguration::getVmHardwareList();
            CVmHardware::getVideo();
            cVar1 = CVmVideo::isEnableHiResDrawing();
            if (cVar1 != '\0') {
              CVmConfiguration::getVmHardwareList();
              CVmHardware::getVideo();
              cVar1 = CVmVideo::isUseHiResInGuest();
              if ((cVar1 != '\0') && (local_c0 = local_c0 * DAT_101cd7828, 0 < DAT_10230ffd0)) {
                FUN_100df99c0(DAT_101cd7828,"CHRCLIENT","ChrToolClient",1,
                              "Multiply displays DPI for %f");
              }
            }
          }
        }
      }
      local_78 = (**(code **)(*param_1 + 0x108))(param_1);
      cVar1 = CVmCoherence::isMultiDisplay();
      if (cVar1 == '\0') {
        bVar9 = false;
      }
      else {
        iVar4 = FUN_100acd450(param_1[2]);
        if (iVar4 == 0x806) {
          bVar9 = false;
        }
        else {
          uVar5 = FUN_100acd450(param_1[2]);
          bVar9 = (uVar5 & 0xffffff00) != 0x700;
        }
      }
      local_68 = (uint)bVar9;
      bVar2 = CVmCoherence::isExcludeDock();
      local_64 = (uint)bVar2;
      local_60 = 0.0;
      if (param_2 == '\0') {
        local_60 = local_c0;
      }
      uVar6 = FUN_100319390(param_1[4]);
      uVar6 = FUN_100120d20(uVar6);
      dVar10 = (double)(int)uVar6 / (double)param_1[0x158];
      if (0.0 <= dVar10) {
        iVar4 = (int)(dVar10 + DAT_100e110f0);
      }
      else {
        iVar4 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar10);
      }
      dVar10 = (double)(int)((ulong)uVar6 >> 0x20) / (double)param_1[0x158];
      if (0.0 <= dVar10) {
        iVar7 = (int)(dVar10 + DAT_100e110f0);
      }
      else {
        iVar7 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar10);
      }
      local_58 = CONCAT44(iVar7,iVar4);
      local_50 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar5 = FUN_100acd450(param_1[2]);
      local_4f = true;
      if ((uVar5 & 0xffffff00) != 0x900) {
        uVar5 = FUN_100acd450(param_1[2]);
        if ((uVar5 & 0xffffff00) != 0xf00) {
          uVar5 = FUN_100acd450(param_1[2]);
          local_4f = (uVar5 & 0xffffff00) == 0x1000;
        }
      }
      local_a8 = 0;
      local_a0 = -1;
      local_90 = 0;
      local_98 = 0;
      local_88 = 0xffffffffffffffff;
      (**(code **)(*(long *)param_1[3] + 0x60))(local_b8,(long *)param_1[3],local_78,&local_a8);
      cVar1 = FUN_100ae6240(local_b8,local_4f);
      if (cVar1 == '\0') {
        uVar5 = FUN_100ae6090(local_b8);
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                        "CoherenceToolClient: UpdateBoundsRect() failed: cfgDspCount=%d",uVar5);
        }
        if (uVar5 != 0) {
          uVar8 = 0;
          do {
            auVar11 = FUN_100ae60d0(local_b8,uVar8);
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  rect[%d]: [%d;%d] w=%d; h=%d",uVar8,
                            auVar11._0_8_ & 0xffffffff,auVar11._4_4_,
                            (auVar11._8_4_ + 1) - auVar11._0_4_,(auVar11._12_4_ + 1) - auVar11._4_4_
                           );
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar5);
        }
        if (DAT_10230ffd0 < 1) {
          uVar3 = 0;
        }
        else {
          iVar7 = (1 - local_78._0_4_) + local_78._8_4_;
          iVar4 = (1 - local_78._4_4_) + local_78._12_4_;
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  mainWndGeometry: [%d;%d] w=%d; h=%d",
                        local_78._0_8_,(ulong)local_78._0_8_ >> 0x20,iVar7,iVar4);
          uVar5 = local_68;
          if (DAT_10230ffd0 < 1) {
            uVar3 = 0;
          }
          else {
            uVar3 = CVmCoherence::isExcludeDock();
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  bIsMultiDisplay=%d; isExcludeDock=%d",
                          uVar5,uVar3,iVar7,iVar4);
            if (DAT_10230ffd0 < 1) {
              uVar3 = 0;
            }
            else {
              uVar12 = local_98._4_4_;
              FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                            "  [out] bndsRect: [%d;%d] w=%d; h=%d; basePoint: [%d;%d]",
                            local_a8 & 0xffffffff,local_a8._4_4_,(1 - (int)local_a8) + (int)local_a0
                            ,(1 - local_a8._4_4_) + local_a0._4_4_,(undefined4)local_98,
                            local_98._4_4_);
              if (DAT_10230ffd0 < 1) {
                uVar3 = 0;
              }
              else {
                uVar3 = 0;
                FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                              "  [out] macMenuIncludedRect: [%d;%d] w=%d; h=%d; excludedDockIncluded=%d"
                              ,local_90 & 0xffffffff,local_90._4_4_,
                              (1 - (int)local_90) + (int)local_88,
                              (1 - local_90._4_4_) + local_88._4_4_,local_80,uVar12);
              }
            }
          }
        }
      }
      else {
        param_1[0x135] = local_a0;
        param_1[0x134] = local_a8;
        param_1[0x136] = local_98;
        FUN_100ae5dd0(param_1 + 0x132,local_b8);
        uVar5 = *(uint *)(param_1 + 0x14a) & 0xfffffffc;
        *(uint *)(param_1 + 0x14a) = uVar5;
        if ((int)local_90 <= (int)local_88) {
          if (local_90._4_4_ <= local_88._4_4_) {
            if (1 < DAT_10230ffd0) {
              FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                            "CoherenceToolClient: Mac menu region added into the Coherence Desktop")
              ;
              uVar5 = *(uint *)(param_1 + 0x14a);
            }
            uVar5 = uVar5 | 1;
            *(uint *)(param_1 + 0x14a) = uVar5;
          }
        }
        uVar3 = 1;
        if (local_80 != '\0') {
          if (1 < DAT_10230ffd0) {
            FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                          "CoherenceToolClient: Dock Bar region added into the Coherence Desktop (but excluded by vm config)"
                         );
            uVar5 = *(uint *)(param_1 + 0x14a);
          }
          *(uint *)(param_1 + 0x14a) = uVar5 | 2;
        }
      }
      FUN_100ae5820(local_b8);
      if (local_48 == (int *)0x0) goto LAB_100ad2fda;
    }
    LOCK();
    *local_48 = *local_48 + -1;
    local_31 = *local_48 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_48 != (int *)0x0)) {
      operator_delete(local_48);
    }
  }
LAB_100ad2fda:
  QMutex::unlock();
  return uVar3;
}

