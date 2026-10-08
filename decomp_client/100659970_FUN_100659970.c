
void FUN_100659970(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  Data *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10063f490();
  CIpGeoLocator::instance();
  iVar3 = CIpGeoLocator::state();
  if (iVar3 != 3) {
    UserInfo::predefinedCountries();
    iVar3 = *(int *)(local_50 + 0xc);
    iVar1 = *(int *)(local_50 + 8);
    if (*(int *)local_50 != -1) {
      iVar4 = iVar3;
      iVar5 = iVar1;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100659b14;
        iVar4 = *(int *)(local_50 + 0xc);
        iVar5 = *(int *)(local_50 + 8);
      }
      if (iVar4 != iVar5) {
        lVar6 = (long)iVar5 * 8 + (long)iVar4 * -8;
        pDVar8 = local_50 + (long)iVar4 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar7 == 0) {
LAB_100659af0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar7 = *(QArrayData **)pDVar8;
              goto LAB_100659af0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_50);
    }
LAB_100659b14:
    if (iVar3 == iVar1) goto LAB_100659be9;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
    UserInfo::predefinedCountries();
    if (1 < *(uint *)local_58) {
      FUN_100036c40(&local_58,*(uint *)(local_58 + 4));
    }
    FUN_100659d40(uVar2,local_58 + (long)(int)*(uint *)(local_58 + 8) * 8 + 0x10);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100659be1;
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if (iVar3 != *(int *)(local_58 + 8)) {
        lVar6 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = local_58 + (long)iVar3 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar7 == 0) {
LAB_100659bc0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar7 = *(QArrayData **)pDVar8;
              goto LAB_100659bc0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_58);
    }
LAB_100659be1:
    FUN_1006593a0(param_1);
    goto LAB_100659be9;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
  CIpGeoLocator::countryCode();
  FUN_100659d40(uVar2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006599f4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006599f4:
  FUN_1006593a0(param_1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 200);
  CIpGeoLocator::regionCode();
  FUN_100659d40(uVar2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659be9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100659be9:
  FUN_1006585b0(param_1,0);
  FUN_100659840(param_1);
  return;
}

