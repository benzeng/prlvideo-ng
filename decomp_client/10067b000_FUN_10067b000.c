
void FUN_10067b000(long param_1,int param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  QVariant local_248;
  QVariant local_238;
  CDownloadedKeyInfo local_228 [240];
  Data *local_138;
  Data *local_130;
  Data *local_128;
  uint local_120;
  QArrayData *local_118;
  CDownloadedKeyList local_110 [152];
  Data *local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[LICENSE]","prl_client_app",2,"Keys downloaded%s");
  }
  QString::operator=((QString *)(param_1 + 0x140),param_3);
  iVar4 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (iVar4 == 2) {
    iVar2 = CAbstractWizardModel::currentPageId();
    if (iVar2 != 0xc) {
      return;
    }
  }
  else {
    CContentModel::setBusy(SUB81(param_1,0));
  }
  cVar1 = FUN_10061c760(param_2);
  uVar3 = CAbstractWizardModel::currentPageId();
  if (cVar1 != '\0') {
    if ((0xb < uVar3) || ((0x818U >> (uVar3 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar3;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  if (uVar3 == 0xc) {
    if (*(char *)(param_1 + 0x199) == '\0') {
      QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
      local_60 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
      local_68 = 0x80000000;
      local_70.field7 = 0;
      QSettings::value((QString *)&local_48,&local_58);
      cVar1 = QVariant::toBool();
      QVariant::~QVariant(&local_48);
      QVariant::~QVariant((QVariant *)&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067b19f;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10067b19f:
      QSettings::~QSettings((QSettings *)&local_58);
      if (cVar1 == '\0') goto LAB_10067b1b8;
    }
    QTimer::start();
  }
LAB_10067b1b8:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar5 = FUN_10016f500(uVar5);
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 != 0xc) {
    cVar1 = FUN_10061c5c0(uVar5);
    if (cVar1 != '\0') {
      FUN_1006768e0(param_1);
      return;
    }
    cVar1 = FUN_10061b4d0(uVar5,2);
    if (cVar1 != '\0') {
      CContentModel::setBusy(SUB81(param_1,0));
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x60);
      }
      FUN_100689870(*(undefined8 *)(param_1 + 0x20),uVar5);
      return;
    }
    iVar4 = CAbstractWizardModel::currentPageId();
    if (((iVar4 != 3) && (iVar4 = CAbstractWizardModel::currentPageId(), iVar4 != 4)) &&
       (iVar4 = CAbstractWizardModel::currentPageId(), iVar4 != 0xb)) {
      return;
    }
    CAbstractWizardModel::goToNextPage();
    return;
  }
  CDownloadedKeyList::CDownloadedKeyList(local_110);
  local_118 = (QArrayData *)((QString *)(param_1 + 0x140))->field0_0x0;
  if (1 < *(int *)local_118 + 1U) {
    LOCK();
    *(int *)local_118 = *(int *)local_118 + 1;
    local_31 = *(int *)local_118 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_110,SUB81(&local_118,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067b263;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10067b263:
  if (iVar4 == 2) {
    if ((-1 < param_2) && (cVar1 = FUN_10061c2b0(uVar5,0x8000), cVar1 != '\0')) {
      local_138 = local_78;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 == 0) {
          QListData::detach((int)&local_138);
          lVar6 = (long)*(int *)(local_138 + 8);
          if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_138 + lVar6 * 8) &&
             (lVar7 = *(int *)(local_138 + 0xc) - lVar6,
             lVar7 != 0 && lVar6 <= *(int *)(local_138 + 0xc))) {
            _memcpy(local_138 + lVar6 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                    lVar7 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + 1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
        }
      }
      local_130 = local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10;
      local_128 = local_138 + (long)*(int *)(local_138 + 0xc) * 8 + 0x10;
      local_120 = 1;
      if (*(int *)(local_138 + 8) != *(int *)(local_138 + 0xc)) {
        do {
          CDownloadedKeyInfo::CDownloadedKeyInfo(local_228,*(CDownloadedKeyInfo **)local_130);
          if (local_120 != 0) {
            cVar1 = CDownloadedKeyInfo::isActiveHere();
            if (cVar1 == '\0') {
              local_120 = 0;
            }
            else {
              iVar4 = CDownloadedKeyInfo::getLicenseEdition();
              QVariant::QVariant(&local_238,iVar4);
              FUN_10061abe0(&local_248,uVar5,0x13);
              cVar1 = QVariant::cmp(&local_238);
              QVariant::~QVariant(&local_248);
              QVariant::~QVariant(&local_238);
              if (cVar1 == '\0') {
                FUN_100678a70(param_1);
              }
            }
          }
          CDownloadedKeyInfo::~CDownloadedKeyInfo(local_228);
          local_130 = local_130 + 8;
          uVar3 = local_120 ^ 1;
          bVar8 = local_120 != 1;
          local_120 = uVar3;
        } while ((bVar8) && (local_130 != local_128));
      }
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067b4fe;
        }
        QListData::dispose(local_138);
      }
    }
  }
  else if (*(int *)(local_78 + 0xc) == *(int *)(local_78 + 8)) {
    CAbstractWizardModel::goToPage(param_1,1,0);
  }
LAB_10067b4fe:
  CDownloadedKeyList::~CDownloadedKeyList(local_110);
  return;
}

