
undefined8 * FUN_1005c1a20(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 extraout_AH;
  undefined4 uVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  int iVar5;
  long lVar6;
  QString local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int local_58;
  QString local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper(".",1);
  QString::split(&local_40,param_3,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005c1a97;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005c1a97:
  if (*(int *)(local_40 + 0xc) - *(int *)(local_40 + 8) != 2) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_1005c1daf;
  }
  local_50.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x18);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_1005bbe80(&local_78,*(undefined8 *)(param_2 + 0x20));
  FUN_1005c0840(&local_70,&local_78);
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  if (*local_78 == -1) {
LAB_1005c1b40:
    iVar5 = 2;
    if (local_68 != local_60) {
      do {
        CAppliance::getApplianceId();
        cVar1 = operator==(&local_80,&local_50);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005c1bc9;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1005c1bc9:
        if (cVar1 != '\0') {
          CAppliance::getApplianceOsVer();
          uVar2 = CAppliance::getApplianceOsVer();
          iVar5 = 1;
          ResourceUtils::getOsIconPath(param_1,extraout_AH,uVar2,2);
          break;
        }
        local_68 = local_68 + 2;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  else {
    if (*local_78 == 0) {
LAB_1005c1b27:
      FUN_1005bfdc0(&local_78,local_78);
    }
    else {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005c1b27;
    }
    iVar5 = 2;
    if (local_58 != 0) goto LAB_1005c1b40;
  }
  if (*local_70 != -1) {
    if (*local_70 != 0) {
      LOCK();
      *local_70 = *local_70 + -1;
      local_31 = *local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005c1d6e;
    }
    FUN_1005bfdc0(&local_70,local_70);
  }
LAB_1005c1d6e:
  if (iVar5 == 2) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005c1daf;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005c1daf:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_40 + 0xc);
    if (iVar5 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar5 * -8;
      pDVar3 = local_40 + (long)iVar5 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1005c1e20:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1005c1e20;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

