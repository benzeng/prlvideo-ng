
void FUN_1004b0850(long param_1,int param_2,ushort *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  if ((param_2 == 4) && (param_3 < (ushort *)0x2)) {
    return;
  }
  QMutex::lock();
  bVar11 = true;
  if (param_2 < 0x10) {
    if (param_2 == 4) {
      if (*(char *)(param_1 + 0x8c) != '\0') {
        cVar2 = FUN_10052aeb0(param_1 + 0xf8);
        if (cVar2 == '\0') {
          if (param_3 == (ushort *)0x3) {
            uVar4 = 2;
            if (0 < DAT_1011b55f8) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                            "Error occuried while set up display configuration. \t\t\t\t\t\tNot enough displays. Cannot start Coherence"
                           );
            }
          }
          else {
            uVar4 = 1;
            if (0 < DAT_1011b55f8) {
              uVar4 = 1;
              FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                            "Error occuried while set up display configuration (errcode=%lld). Cannot start Coherence"
                            ,param_3);
            }
          }
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_50 = 0;
          local_48 = uVar4;
          FUN_1004b43e0(&local_50,0x18,&local_48,0x10);
          if (local_50 != 0) {
            FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
          }
          FUN_10052acc0(param_1 + 0xf8);
          *(undefined1 *)(param_1 + 0x8c) = 0;
          pvVar6 = operator_new(0x18);
          *(undefined4 *)((long)pvVar6 + 4) = 0;
          FUN_1004ae8a0(param_1,pvVar6,param_1 + 0x98,0);
          goto LAB_1004b0f27;
        }
      }
      if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
        cVar2 = FUN_10052aeb0(param_1 + 0xf8);
        if (cVar2 == '\0') {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                          "Error occuried while set up guest display configuration. Stop Coherence")
            ;
          }
          FUN_10052acc0(param_1 + 0xf8);
          FUN_10052acc0(param_1 + 0x108);
          *(undefined1 *)(param_1 + 0x150) = 1;
          pvVar6 = operator_new(0x18);
          *(undefined4 *)((long)pvVar6 + 4) = 0;
          FUN_1004ae8a0(param_1,pvVar6,param_1 + 0x98,0);
          local_80 = 2;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_88 = 0;
          FUN_1004b43e0(&local_88,0x17,&local_80,0x10);
          if (local_88 != 0) {
            FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
          }
        }
      }
    }
    else if (param_2 == 8) {
      uVar5 = *(uint *)(param_1 + 0x88) & 0xfffffffe;
      if ((*(char *)(param_1 + 0x8c) == '\0') || (uVar5 != 2)) {
        if (uVar5 == 2) {
          lVar1 = param_1 + 0xf8;
          cVar2 = FUN_10052aeb0(lVar1);
          if (cVar2 == '\0') {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                            "DR_EVENT_OK: Display Configuration changed successfully in Coherence Mode"
                           );
            }
            FUN_10052ac80(param_1 + 0x108,lVar1);
            FUN_10052acc0(lVar1);
            local_58 = 0;
            FUN_1004b43e0(&local_58,0x12,0,0);
            if (local_58 != 0) {
              FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
            }
          }
        }
      }
      else {
        if ((*(int *)(*(long *)(param_1 + 0x120) + 4) == 0) && (1 < DAT_1011b55f8)) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "DynResCallback(). Coherence active client is empty. Coherence behavior may be broken."
                       );
        }
        lVar1 = param_1 + 0xf8;
        cVar2 = FUN_10052aeb0(lVar1);
        if ((1 < DAT_1011b55f8) && (cVar2 == '\x01')) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "DynResCallback(). Display configuration is empty. Coherence behavior may be broken."
                       );
        }
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "DynResCallback(). send ChrControl_CoherenceStarted to client");
        }
        lVar7 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
        local_68 = 1;
        if (*(long *)(lVar7 + 0x868) != 0) {
          local_68 = 2;
        }
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_70 = 0;
        FUN_1004b43e0(&local_70,1,&local_68,0x10);
        if (local_70 != 0) {
          FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
        }
        FUN_10052ac80(param_1 + 0x108,lVar1);
        FUN_10052acc0(lVar1);
        *(undefined1 *)(param_1 + 0x8c) = 0;
        QMutex::unlock();
        uVar8 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
        bVar11 = false;
        FUN_1002af2c0(uVar8,0);
      }
    }
  }
  else if (param_2 == 0x10) {
    if (((((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) && (*(char *)(param_1 + 0x8c) == '\0')) &&
        (*(char *)(param_1 + 0x8d) == '\0')) &&
       (cVar2 = FUN_10052aeb0(param_1 + 0xf8), cVar2 != '\0')) {
      cVar2 = FUN_10052aeb0(param_1 + 0x108);
      if ((param_3 != (ushort *)0x0) && (cVar2 != '\x01')) {
        auVar12 = FUN_10052af80(param_1 + 0x108,*param_3);
        uVar5 = (auVar12._8_4_ + 1) - auVar12._0_4_;
        if ((uVar5 != param_3[6]) || ((auVar12._12_4_ + 1) - auVar12._4_4_ != (uint)param_3[7])) {
          if (1 < DAT_1011b55f8) {
            uVar10 = (uint)param_3[1];
            uVar9 = (uint)*param_3;
            FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                          "New video mode: x=%d y=%d w=%d h=%d head=%d bpp=%d",
                          *(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 4),(uint)param_3[6]
                          ,param_3[7],uVar9,uVar10);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                            "Currently stored videomode in Coherence: x=%d y=%d w=%d h=%d",
                            auVar12._0_8_,auVar12._0_8_ >> 0x20,uVar5,
                            (auVar12._12_4_ + 1) - auVar12._4_4_,uVar9,uVar10);
            }
          }
          if (((param_3[6] == 0) || (param_3[7] == 0)) &&
             (*(long *)(*(long *)(param_1 + 0x78) + 0x110) != 0)) {
            CVmConfiguration::getVmSettings();
            CVmSettings::getVmCommonOptions();
            iVar3 = CVmCommonOptions::getOsType();
            if (iVar3 == 8) {
              CVmConfiguration::getVmSettings();
              CVmSettings::getVmCommonOptions();
              uVar5 = CVmCommonOptions::getOsVersion();
              if (0x808 < uVar5) {
                if (1 < DAT_1011b55f8) {
                  CVmConfiguration::getVmSettings();
                  CVmSettings::getVmCommonOptions();
                  uVar4 = CVmCommonOptions::getOsVersion();
                  FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                                "   ==> Ignore stopping Coherence after guest display turning OFF (OsVer = 0x%04X)"
                                ,uVar4);
                }
                goto LAB_1004b0f27;
              }
            }
          }
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                          "   ==> Stop Coherence Mode (send command to client)");
          }
          local_38 = 0;
          FUN_1004b43e0(&local_38,0x16,0,0);
          if (local_38 != 0) {
            FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
          }
        }
      }
    }
  }
  else if (param_2 == 0x20) {
    FUN_1004b2ea0(*(undefined8 *)(param_1 + 0xe0),param_3 == (ushort *)0x1);
  }
LAB_1004b0f27:
  if (bVar11) {
    QMutex::unlock();
  }
  return;
}

