
void FUN_1002729b0(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  undefined8 uVar5;
  CAppUpdateLogic *this;
  long lVar6;
  long lVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (param_2 < 0) goto LAB_100272c61;
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  uVar5 = FUN_100152280();
  FUN_100154b10(&local_68,uVar5);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_100272aa3:
    if (local_58 != local_50) {
      do {
        if (*(long *)local_58 != 0) {
          FUN_10018d860(&local_70);
          uVar5 = QString::remove((int)&local_70,*(int *)(local_70 + 4) + -1);
          FUN_1000341d0(&local_40,uVar5);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100272b21;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
LAB_100272b21:
        local_58 = local_58 + 8;
        local_48 = 1;
      } while (local_58 != local_50);
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_100272a94:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100272a94;
    }
    if (local_48 != 0) goto LAB_100272aa3;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100272b60;
    }
    QListData::dispose(local_60);
  }
LAB_100272b60:
  MacUtils::updateRecentDocuments((QStringList *)&local_40.field0);
  uVar5 = FUN_1001d50a0();
  FUN_1001d50d0(uVar5);
  FUN_1001e1c00();
  cVar4 = UpgradeUtils::isNeedToCheckUpdateOnAppStart();
  if (cVar4 != '\0') {
    UpgradeUtils::setNeedToCheckUpdateOnAppStart(false);
    puVar2 = PTR_m_instance_1021e1340;
    this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
    if (this == (CAppUpdateLogic *)0x0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar2 = this;
      DAT_102274b28 = 1;
    }
    CAppUpdateLogic::checkForUpdates(SUB81(this,0),true,false);
  }
  AVar3 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100272c61;
    }
    iVar1 = *(int *)(local_40.field1 + 0xc);
    if (iVar1 != *(int *)(local_40.field1 + 8)) {
      lVar6 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_40.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100272c40:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100272c40;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_100272c61:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

