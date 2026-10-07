
undefined4 FUN_100094840(long *param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  Data *pDVar7;
  long lVar8;
  Data *pDVar9;
  long *plVar10;
  long lVar11;
  Data *pDVar12;
  int local_64;
  Data **local_60;
  int local_50;
  int local_4c;
  QArrayData *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = 0;
  lVar6 = *param_1;
  *param_2 = 0;
  if (lVar6 == 0) {
    FUN_1008e3970("","vm",0,"Error accessing configuration object");
    return 0xfffffff;
  }
  lVar6 = CVmConfiguration::getVmHardwareList();
  if (lVar6 == 0) {
    return 0xfffffff;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  CVmStartupOptions::getBootDeviceList();
  pDVar12 = local_40;
  if (1 < *(uint *)local_40) {
    uVar1 = *(uint *)(local_40 + 8);
    pDVar7 = (Data *)QListData::detach((int)&local_40);
    lVar8 = (long)(int)*(uint *)(local_40 + 8);
    if ((pDVar12 + (long)(int)uVar1 * 8 + 0x10 != local_40 + lVar8 * 8 + 0x10) &&
       (lVar11 = (int)*(uint *)(local_40 + 0xc) - lVar8,
       lVar11 != 0 && lVar8 <= (int)*(uint *)(local_40 + 0xc))) {
      _memcpy(local_40 + lVar8 * 8 + 0x10,pDVar12 + (long)(int)uVar1 * 8 + 0x10,lVar11 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_31 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100094912;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100094912:
  local_60 = &local_40;
  pDVar12 = local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10;
  local_64 = 0xfffffff;
  local_50 = 6;
  do {
    pDVar7 = local_40;
    if (1 < *(uint *)local_40) {
      uVar1 = *(uint *)(local_40 + 8);
      pDVar9 = (Data *)QListData::detach((int)local_60);
      lVar8 = (long)(int)*(uint *)(local_40 + 8);
      if ((pDVar7 + (long)(int)uVar1 * 8 + 0x10 != local_40 + lVar8 * 8 + 0x10) &&
         (lVar11 = (int)*(uint *)(local_40 + 0xc) - lVar8,
         lVar11 != 0 && lVar8 <= (int)*(uint *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar8 * 8 + 0x10,pDVar7 + (long)(int)uVar1 * 8 + 0x10,lVar11 * 8);
      }
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          local_31 = *(int *)pDVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000949c0;
        }
        QListData::dispose(pDVar9);
      }
    }
LAB_1000949c0:
    if ((*param_2 != 0) || (pDVar12 == local_40 + (long)(int)*(uint *)(local_40 + 0xc) * 8 + 0x10))
    {
      iVar4 = local_64;
      if (*param_2 == 0) {
        iVar4 = local_50;
      }
      if (local_50 == 6) {
        iVar4 = local_64;
      }
      uVar5 = FUN_1007da300("vm.compat_level",iVar4);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return uVar5;
          }
          local_31 = 0;
        }
        QListData::dispose(local_40);
      }
      return uVar5;
    }
    lVar8 = *(long *)pDVar12;
    if (((**(int **)(lVar8 + 0xb8) == 6) &&
        (((local_50 == 6 || (**(char **)(lVar8 + 0xd0) != '\0')) &&
         (lVar11 = *(long *)(lVar6 + 0x1b0),
         **(uint **)(lVar8 + 0xc0) < (uint)(*(int *)(lVar11 + 0xc) - *(int *)(lVar11 + 8)))))) &&
       ((plVar10 = (long *)FUN_100082610((long *)(lVar6 + 0x1b0)), *plVar10 != 0 &&
        (iVar4 = CVmDevice::getEnabled(), iVar4 == 1)))) {
      CVmDevice::getSystemName();
      plVar10 = (long *)FUN_100407f00(&local_48);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)FUN_10059ac80(&local_48,9,&local_38);
        if (plVar10 != (long *)0x0) {
          bVar2 = false;
          goto LAB_100094a91;
        }
        FUN_1008e3970("","vm",0,"BootableCheck: Failed to open disk image");
      }
      else {
        bVar2 = true;
LAB_100094a91:
        if (local_50 == 6) {
          local_50 = FUN_100094cc0(plVar10);
        }
        if (**(char **)(lVar8 + 0xd0) != '\0') {
          local_4c = 0;
          do {
            bVar3 = (**(code **)(*plVar10 + 0x1a8))(plVar10,&local_4c);
            bVar3 = bVar3 | *param_2;
            *param_2 = bVar3;
            if (-1 < local_4c) goto LAB_100094b2e;
            (**(code **)(*plVar10 + 0x20))(plVar10);
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar10 = (long *)FUN_10059ac80(&local_48,3,&local_38);
            if (plVar10 == (long *)0x0) goto LAB_100094b7f;
          } while (local_4c == -0x7ffdd000);
          bVar3 = *param_2;
LAB_100094b2e:
          if (bVar3 != 0) {
            local_64 = FUN_100094cc0(plVar10);
          }
        }
        if (bVar2) {
          FUN_100407230(&local_48,plVar10);
        }
        else {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
LAB_100094b7f:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100094940;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_100094940:
    pDVar12 = pDVar12 + 8;
  } while( true );
}

