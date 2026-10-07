
int FUN_100093380(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  CVmOpticalDisk *pCVar9;
  long *plVar10;
  CVmOpticalDisk *pCVar11;
  bool bVar12;
  QArrayData *local_288;
  QString local_280;
  QArrayData *local_278;
  QString local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  CVmOpticalDisk local_258 [240];
  CVmOpticalDisk local_168 [240];
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  Data *local_40;
  undefined1 local_31;
  
  cVar1 = FUN_100091c30();
  if (cVar1 == '\0') {
    return -0x7ffffbdb;
  }
  lVar4 = CVmConfiguration::getVmHardwareList();
  local_40 = *(Data **)(lVar4 + 0x1a8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar7 = (long)*(int *)(local_40 + 8);
      lVar4 = *(long *)(lVar4 + 0x1a8);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_40 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_40 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar7 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar4 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar4, lVar7 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  pCVar11 = (CVmOpticalDisk *)0x0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    pCVar9 = (CVmOpticalDisk *)0x0;
    do {
      if (local_48 == 0) {
LAB_100093507:
        local_58 = local_58 + 8;
        local_48 = 1;
      }
      else {
        pCVar11 = *(CVmOpticalDisk **)local_58;
        iVar2 = CVmDevice::getEnabled();
        if (iVar2 == 0) goto LAB_100093507;
        local_58 = local_58 + 8;
        uVar6 = local_48 ^ 1;
        bVar12 = local_48 == 1;
        pCVar9 = pCVar11;
        local_48 = uVar6;
        if (bVar12) break;
      }
      pCVar11 = pCVar9;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009354e;
    }
    QListData::dispose(local_60);
  }
LAB_10009354e:
  iVar2 = -0x7ffffbe8;
  if (pCVar11 == (CVmOpticalDisk *)0x0) goto LAB_100093ab6;
  FUN_100091bc0(&local_68,param_1,param_2);
  iVar2 = -0x7ffffc90;
  if (*(int *)(local_68.field0_0x0 + 4) != 0) {
    iVar2 = 0;
  }
  CVmDevice::getSystemName();
  cVar1 = operator==(&local_70,&local_68);
  bVar12 = true;
  if (cVar1 != '\0') {
    CVmDevice::getSystemName();
    bVar12 = *(int *)(local_78 + 4) == 0;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000935e7;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1000935e7:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100093617;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100093617:
  if (bVar12) {
    iVar2 = -0x7fffff7d;
  }
  if (-1 < iVar2) {
    CVmOpticalDisk::CVmOpticalDisk(local_168,*(CVmOpticalDisk **)(&DAT_000010e0 + param_1));
    iVar2 = CVmDevice::getConnected();
    if (iVar2 == 1) {
      CVmOpticalDisk::CVmOpticalDisk(local_258,pCVar11);
      CVmDevice::setConnected((uint)local_258);
      local_268 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
      FUN_100098340(&local_260,local_258,&local_268);
      if (*(int *)local_268 != -1) {
        if (*(int *)local_268 != 0) {
          LOCK();
          *(int *)local_268 = *(int *)local_268 + -1;
          local_31 = *(int *)local_268 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000936d5;
        }
        QArrayData::deallocate(local_268,2,8);
      }
LAB_1000936d5:
      CVmDevice::getIndex();
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar10 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_100bef0d0;
        plVar10 = plVar5;
      }
      FUN_100409080(param_1 + 0x10b0);
      iVar2 = 0;
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (lVar4 = CVmConfiguration::getVmHardwareList(), lVar4 != 0)) {
        iVar2 = FUN_1000914b0(0,5,&local_260);
      }
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_31 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000937a6;
        }
        QArrayData::deallocate(local_260,2,8);
      }
LAB_1000937a6:
      CVmOpticalDisk::~CVmOpticalDisk(local_258);
      if (-1 < iVar2) goto LAB_1000937bb;
    }
    else {
LAB_1000937bb:
      iVar3 = CVmDevice::getConnected();
      CVmDevice::setConnected((uint)local_168);
      local_278 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
      FUN_100098340(&local_270,local_168,&local_278);
      if (*(int *)local_278 != -1) {
        if (*(int *)local_278 != 0) {
          LOCK();
          *(int *)local_278 = *(int *)local_278 + -1;
          local_31 = *(int *)local_278 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100093843;
        }
        QArrayData::deallocate(local_278,2,8);
      }
LAB_100093843:
      CVmDevice::getIndex();
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar10 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_100bef0d0;
        plVar10 = plVar5;
      }
      FUN_100409080(param_1 + 0x10b0);
      iVar2 = 0;
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (lVar4 = CVmConfiguration::getVmHardwareList(), lVar4 != 0)) {
        iVar2 = FUN_1000914b0(1,5,&local_270);
      }
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (iVar3 != 1) {
        CVmDevice::setConnected((uint)local_168);
        local_288 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
        FUN_100098340(&local_280,local_168,&local_288);
        QString::operator=(&local_270,&local_280);
        if (*(int *)local_280.field0_0x0 != -1) {
          if (*(int *)local_280.field0_0x0 != 0) {
            LOCK();
            *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
            local_31 = *(int *)local_280.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100093977;
          }
          QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
        }
LAB_100093977:
        if (*(int *)local_288 != -1) {
          if (*(int *)local_288 != 0) {
            LOCK();
            *(int *)local_288 = *(int *)local_288 + -1;
            local_31 = *(int *)local_288 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000939ad;
          }
          QArrayData::deallocate(local_288,2,8);
        }
LAB_1000939ad:
        CVmDevice::getIndex();
        plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar10 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          plVar5[2] = 0;
          *plVar5 = (long)&PTR_FUN_100bef0d0;
          plVar10 = plVar5;
        }
        FUN_100409080(param_1 + 0x10b0);
        iVar2 = 0;
        if ((*(long *)(param_1 + 0x110) != 0) &&
           (lVar4 = CVmConfiguration::getVmHardwareList(), lVar4 != 0)) {
          iVar2 = FUN_1000914b0(0,5,&local_270);
        }
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar5 = plVar10 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (*(int *)local_270.field0_0x0 != -1) {
        if (*(int *)local_270.field0_0x0 != 0) {
          LOCK();
          *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
          local_31 = *(int *)local_270.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100093a7a;
        }
        QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
      }
    }
LAB_100093a7a:
    CVmOpticalDisk::~CVmOpticalDisk(local_168);
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100093ab6;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100093ab6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return iVar2;
}

