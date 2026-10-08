
void FUN_100780a80(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  QDateTime *pQVar5;
  QArrayData *pQVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  QString local_88;
  QArrayData *local_80;
  QDateTime local_78;
  QDateTime local_70;
  QDateTime local_68;
  QArrayData *local_60;
  QDateTime local_58;
  QString local_50;
  QArrayData *local_48;
  QDateTime local_40;
  uint local_38;
  undefined1 local_31;
  
  lVar4 = QObject::sender();
  if (lVar4 == 0) {
    local_38 = 0;
    cVar1 = '\0';
LAB_100780ae1:
    uVar10 = local_38;
    if ((0x19U >> (local_38 & 0x1f) & 1) == 0) goto LAB_100780aec;
    if (cVar1 == '\0') {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("[APP_PROMO]","prl_client_app",2,"Reset promo blocked time for promo type %d",
                      local_38);
      }
      pQVar5 = (QDateTime *)FUN_1007817d0(param_1 + 0x38,&local_38);
      QDateTime::QDateTime(&local_68);
      QDateTime::operator=(pQVar5,&local_68);
      QDateTime::~QDateTime(&local_68);
      goto LAB_100780c20;
    }
    pQVar5 = (QDateTime *)FUN_1007817d0((long *)(param_1 + 0x38),&local_38);
    QDateTime::currentDateTime();
    QDateTime::operator=(pQVar5,&local_40);
    QDateTime::~QDateTime(&local_40);
    if (1 < DAT_10230ffd0) {
      puVar9 = *(undefined8 **)(param_1 + 0x38);
      if ((*(int *)((long)puVar9 + 0x14) != 0) && (*(uint *)(puVar9 + 4) != 0)) {
        uVar7 = *(uint *)((long)puVar9 + 0x24) ^ uVar10;
        for (puVar8 = *(undefined8 **)
                       (puVar9[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar9 + 4)) * 8);
            puVar8 != puVar9; puVar8 = (undefined8 *)*puVar8) {
          if ((*(uint *)(puVar8 + 1) == uVar7) && (uVar10 == *(uint *)((long)puVar8 + 0xc))) {
            if (puVar8 != puVar9) {
              QDateTime::QDateTime(&local_58,(QDateTime *)(puVar8 + 2));
              goto LAB_100780c78;
            }
            break;
          }
        }
      }
      QDateTime::QDateTime(&local_58);
LAB_100780c78:
      local_60 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
      QDateTime::toString(&local_50);
      QString::toUtf8();
      FUN_100df99c0("[APP_PROMO]","prl_client_app",2,
                    "Set promo blocked time for promo type %d at %s",uVar10,
                    local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100780d07;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100780d07:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100780d37;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100780d37:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100780d67;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100780d67:
      QDateTime::~QDateTime(&local_58);
    }
  }
  else {
    cVar1 = FUN_1002e3060(lVar4);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_1002e2ac0(lVar4);
    }
    local_38 = FUN_1002dcf50(lVar4);
    if (local_38 < 5) goto LAB_100780ae1;
LAB_100780aec:
    uVar10 = local_38;
    if (cVar1 == '\0') {
LAB_100780c20:
      uVar3 = 0x240c8400;
      if (uVar10 - 3 < 2) {
        uVar3 = 86400000;
      }
      if ((((-1 < param_2) && (param_2 != 0x3c2c)) && (lVar4 != 0)) &&
         (iVar2 = FUN_1002e4f50(lVar4), iVar2 != 0)) {
        uVar3 = FUN_1002e4f50(lVar4);
      }
      FUN_10077f270(param_1,uVar3,uVar10);
      return;
    }
  }
  QDateTime::currentDateTime();
  QDateTime::addMSecs((longlong)&local_70);
  QDateTime::~QDateTime(&local_78);
  if (DAT_10230ffd0 < 2) goto LAB_100780ea1;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_88);
  QString::toUtf8();
  FUN_100df99c0("[APP_PROMO]","prl_client_app",2,
                "Promo with type %d blocked, next time blocker will be checked at: %s",uVar10,
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100780e3b;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100780e3b:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100780e6b;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100780e6b:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100780ea1;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100780ea1:
  if (uVar10 == 4) {
    puVar9 = (undefined8 *)(param_1 + 0x20);
  }
  else if (uVar10 == 3) {
    puVar9 = (undefined8 *)(param_1 + 0x18);
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x10);
  }
  QTimer::start((int)*puVar9);
  QDateTime::~QDateTime(&local_70);
  return;
}

