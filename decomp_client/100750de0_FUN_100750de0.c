
void FUN_100750de0(QObject *param_1)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  CSpotlightWrapper *pCVar10;
  long *plVar11;
  Data *pDVar12;
  long lVar13;
  Connection local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022283c0;
  puVar2 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(puVar2 + 8);
  if (iVar1 != *(int *)(puVar2 + 0xc)) {
    plVar11 = (long *)(puVar2 + (long)iVar1 * 8 + 0x10);
    lVar13 = (long)*(int *)(puVar2 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar11 != (long *)0x0) {
        (**(code **)(*(long *)*plVar11 + 8))();
      }
      plVar11 = plVar11 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  FUN_1007545f0(param_1 + 0x10);
  local_40 = (Data *)puVar2;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.vmx",5);
  local_48 = pQVar4;
  FUN_1000341d0(&local_40,&local_48);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("*.vmwarevm",10);
  local_50 = pQVar5;
  FUN_1000341d0(&local_40,&local_50);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("*.vmc",5);
  local_58 = pQVar6;
  FUN_1000341d0(&local_40,&local_58);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("*.vpc6",6);
  local_60 = pQVar7;
  FUN_1000341d0(&local_40,&local_60);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("*.vpc7",6);
  local_68 = pQVar8;
  FUN_1000341d0(&local_40,&local_68);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("*.vbox",6);
  local_70 = pQVar9;
  FUN_1000341d0(&local_40,&local_70);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100750f86;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100750f86:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100750fb3;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100750fb3:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100750fe0;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100750fe0:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075100f;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10075100f:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075103e;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10075103e:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075106a;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10075106a:
  pCVar10 = operator_new(0x18);
  CSpotlightWrapper::CSpotlightWrapper(pCVar10,param_1,1);
  *(CSpotlightWrapper **)(param_1 + 0x18) = pCVar10;
  CSpotlightWrapper::setSearchPatterns((QStringList *)pCVar10);
  CSpotlightWrapper::setSearchModes(*(undefined8 *)(param_1 + 0x18),2);
  QObject::connect(local_78,*(undefined8 *)(param_1 + 0x18),"2finished()",param_1,
                   "1onSearchFinished()",0);
  QMetaObject::Connection::~Connection(local_78);
  pDVar3 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar13 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar4 == 0) {
LAB_100751140:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar12;
            goto LAB_100751140;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

