
void FUN_100782c20(long param_1,QUrl *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QUrlQuery local_40 [15];
  undefined1 local_31;
  
  QUrlQuery::QUrlQuery(local_40,param_2);
  local_50 = (QArrayData *)QString::fromAscii_helper("goBuy",5);
  QUrlQuery::queryItemValue(&local_48,local_40,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100782c9b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100782c9b:
  local_60 = (QArrayData *)QString::fromAscii_helper("locale",6);
  QUrlQuery::queryItemValue(&local_58,local_40,&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100782cf3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100782cf3:
  local_70 = (QArrayData *)QString::fromAscii_helper("goUpgrade",9);
  QUrlQuery::queryItemValue(&local_68,local_40,&local_70,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100782d4b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100782d4b:
  local_80 = (QArrayData *)QString::fromAscii_helper("closeDialog",0xb);
  QUrlQuery::queryItemValue(&local_78,local_40,&local_80,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100782da3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100782da3:
  if (1 < DAT_10230ffd0) {
    QUrl::toString(&local_90,param_2,0);
    QString::toUtf8();
    pQVar5 = local_88 + *(long *)(local_88 + 0x10);
    QString::toUtf8();
    lVar1 = *(long *)(local_98 + 0x10);
    QString::toUtf8();
    lVar2 = *(long *)(local_a0 + 0x10);
    QString::toUtf8();
    lVar3 = *(long *)(local_a8 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "Promo link clicked [%s]. Buy=%s, Upgrade=%s, Locale=%s, CloseDialog=%s",pQVar5,
                  local_98 + lVar1,local_a0 + lVar2,local_a8 + lVar3,
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782ec5;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100782ec5:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782f09;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100782f09:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782f3f;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_100782f3f:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782f75;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100782f75:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782fa5;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100782fa5:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100782fdb;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_100782fdb:
  iVar4 = QString::compare_helper
                    (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),"1",
                     0xffffffff,1);
  if (iVar4 == 0) {
    FUN_10085d8f0(param_1,&local_58,param_1 + 0x68);
  }
  else if (*(int *)(local_68 + 4) == 0) {
    QDesktopServices::openUrl(param_2);
  }
  else {
    FUN_10085d940(param_1,param_1 + 0x68);
  }
  if (*(int *)(local_78 + 4) != 0) {
    QDesktopServices::openUrl(param_2);
    QWidget::close();
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100783080;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100783080:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007830b0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007830b0:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007830e0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007830e0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100783110;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100783110:
  QUrlQuery::~QUrlQuery(local_40);
  return;
}

