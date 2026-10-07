
undefined1 FUN_1000cdac0(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 local_80 [28];
  undefined4 local_64;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1008e3970("","vm",0,"Constructing header...");
  lVar1 = param_1 + 0x2b8;
  iVar4 = FUN_1000d68f0(lVar1);
  if (iVar4 != 0) {
    pcVar8 = "Constructing sav file header failed";
    goto LAB_1000cdde6;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar2 = local_40;
  lVar7 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  iVar4 = FUN_1000d6a70(lVar1,1,pQVar2 + lVar7,*(int *)(local_48 + 4) + 1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cdbb9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000cdbb9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cdbe9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000cdbe9:
  if (iVar4 != 0) {
    pcVar8 = "Constructing SARE_MEMORY_FILE_NAME_HDR_OPT options failed";
    goto LAB_1000cdde6;
  }
  QFileInfo::absolutePath();
  cVar3 = operator==((QString *)(param_1 + 0x328),&local_50);
  if (cVar3 == '\0') {
    QString::toUtf8();
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    pQVar2 = local_58;
    lVar7 = *(long *)(local_58 + 0x10);
    QString::toUtf8();
    iVar4 = FUN_1000d6a70(lVar1,5,pQVar2 + lVar7,*(int *)(local_60 + 4) + 1);
    bVar10 = iVar4 != 0;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000cdccc;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1000cdccc:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000cdcfc;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
  else {
    bVar10 = false;
  }
LAB_1000cdcfc:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cdd2c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000cdd2c:
  if (bVar10) {
    pcVar8 = "Constructing SARE_MEMORY_FILE_PATH_HDR_OPT options failed";
    goto LAB_1000cdde6;
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x338);
  pvVar5 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x340) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_100ba21c8);
    *(void **)(param_1 + 0x348) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      ___bzero(pvVar5,uVar9);
      ___bzero(pvVar6,uVar9);
      iVar4 = FUN_1000d6a70(lVar1,2,pvVar6,uVar9);
      if (iVar4 == 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1940);
        iVar4 = FUN_1000d6a70(lVar1,4,*(undefined8 *)(lVar7 + 0xb8),*(undefined4 *)(lVar7 + 0xc0));
        if (iVar4 == 0) {
          if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x110) == 0) {
            FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmCfg",
                          "SerializationApp.cpp",0x6e7,"WriteHdrOptions");
          }
          lVar7 = CVmConfiguration::getVmSettings();
          if (lVar7 == 0) {
            FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmSettings",
                          "SerializationApp.cpp",0x6e9,"WriteHdrOptions");
          }
          CVmSettings::getVmRuntimeOptions();
          cVar3 = CVmRunTimeOptions::isCpuFeaturesMaskValid();
          if (cVar3 != '\0') {
            local_64 = FUN_100646bc0(0);
            iVar4 = FUN_1000d6a70(lVar1,6,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "SARE_CPU_VENDOR_HDR_OPT option is missed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getFEATURES_MASK();
            iVar4 = FUN_1000d6a70(lVar1,8,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_FEATURES_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_FEATURES_MASK();
            iVar4 = FUN_1000d6a70(lVar1,9,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_FEATURES_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_80000001_ECX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,10,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_80000001_ECX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_80000001_EDX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,0xb,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_80000001_EDX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_80000007_EDX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,0xc,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_80000007_EDX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_80000008_EAX();
            iVar4 = FUN_1000d6a70(lVar1,0xd,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_80000008_EAX_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_00000007_EBX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,0xf,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_00000007_EBX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_0000000D_EAX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,0x10,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_0000000D_EAX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
            CVmSettings::getVmRuntimeOptions();
            local_64 = CVmRunTimeOptions::getEXT_00000006_EAX_MASK();
            iVar4 = FUN_1000d6a70(lVar1,0x12,&local_64,4);
            if (iVar4 != 0) {
              pcVar8 = "Constructing SARE_EXT_00000006_EAX_MASK_HDR_OPT options failed";
              goto LAB_1000cdde6;
            }
          }
          FUN_100087e20(DAT_1011c3698 + 0x140,local_80);
          iVar4 = FUN_1000d6a70(lVar1,0x11,local_80,0x18);
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(DAT_1011c3698 + 0x109e8);
            iVar4 = FUN_1000d6a70(lVar1,0x13,param_1 + 0x44c,4);
            if (iVar4 == 0) {
              iVar4 = FUN_1000d69b0(lVar1);
              if (iVar4 != 0) {
                FUN_1008e3970("","vm",0,"Constructing header...OK");
                return 1;
              }
              pcVar8 = "Constructing sav file failed";
            }
            else {
              pcVar8 = "Constructing SARE_HYPERVISOR_ENGINE_HDR_OPT option failed";
            }
          }
          else {
            pcVar8 = "Error save to snapshot SARE_FIRMWARE_HDR_OPT";
          }
        }
        else {
          pcVar8 = "Constructing SARE_DIRTY_PAGES_BITMAP_HDR_OPT options failed";
        }
      }
      else {
        pcVar8 = "Constructing SARE_WS_BITMAP_HDR_OPT options failed";
      }
      goto LAB_1000cdde6;
    }
  }
  pcVar8 = "warning: can\'t allocate working set bitmaps";
LAB_1000cdde6:
  FUN_1008e3970("","vm",0,pcVar8);
  return 0;
}

