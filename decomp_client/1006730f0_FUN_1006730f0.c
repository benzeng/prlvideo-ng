
char * FUN_1006730f0(char *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  Data_conflict *pDVar7;
  long lVar8;
  QString local_198;
  Data_conflict local_190;
  undefined4 local_188;
  QString local_180;
  QVariant local_178;
  QArrayData *local_168;
  CDownloadedKeyInfo local_160 [240];
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  if ((*(int *)(param_2 + 0x40) < 0) ||
     (*(int *)(*(long *)(param_2 + 0x50) + 0xc) - *(int *)(*(long *)(param_2 + 0x50) + 8) <=
      *(int *)(param_2 + 0x40))) {
    uVar5 = QString::fromAscii_helper("",0);
    *(undefined8 *)param_1 = uVar5;
    return param_1;
  }
  QVariant::toMap();
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("active",6);
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_1006731b8:
    lVar6 = 0;
  }
  else {
    lVar1 = *(long *)(local_38 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_40), cVar2 == '\0') {
        lVar1 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1006731a7;
      }
      lVar1 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) goto LAB_1006731b8;
LAB_1006731a7:
    cVar2 = operator<(&local_40,(QString *)(lVar6 + 0x18));
    if (cVar2 != '\0') goto LAB_1006731b8;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006731ea;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006731ea:
  if (lVar6 == 0) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("trial",5);
    local_60 = 0x80000000;
    local_68.field7 = 0;
    if (*(long *)(local_38 + 0x10) == 0) {
LAB_100673282:
      lVar6 = 0;
    }
    else {
      lVar1 = *(long *)(local_38 + 0x10);
      lVar8 = 0;
      do {
        while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_58), cVar2 == '\0')
        {
          lVar1 = *(long *)(lVar6 + 8);
          lVar8 = lVar6;
          if (*(long *)(lVar6 + 8) == 0) goto LAB_100673271;
        }
        lVar1 = *(long *)(lVar6 + 0x10);
      } while (*(long *)(lVar6 + 0x10) != 0);
      lVar6 = lVar8;
      if (lVar8 == 0) goto LAB_100673282;
LAB_100673271:
      cVar2 = operator<(&local_58,(QString *)(lVar6 + 0x18));
      if (cVar2 != '\0') goto LAB_100673282;
    }
    pDVar7 = &local_68;
    if (lVar6 != 0) {
      pDVar7 = (Data_conflict *)(lVar6 + 0x20);
    }
    QVariant::QVariant(&local_50,(QVariant *)pDVar7);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_50);
    QVariant::~QVariant((QVariant *)&local_68);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006732ea;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1006732ea:
    if (cVar2 != '\0') {
      QMetaObject::tr(param_1,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c96a);
      goto LAB_100673660;
    }
    local_70.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
    if (*(long *)(local_38 + 0x10) == 0) {
LAB_100673382:
      lVar6 = 0;
    }
    else {
      lVar1 = *(long *)(local_38 + 0x10);
      lVar8 = 0;
      do {
        while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_70), cVar2 == '\0')
        {
          lVar1 = *(long *)(lVar6 + 8);
          lVar8 = lVar6;
          if (*(long *)(lVar6 + 8) == 0) goto LAB_100673371;
        }
        lVar1 = *(long *)(lVar6 + 0x10);
      } while (*(long *)(lVar6 + 0x10) != 0);
      lVar6 = lVar8;
      if (lVar8 == 0) goto LAB_100673382;
LAB_100673371:
      cVar2 = operator<(&local_70,(QString *)(lVar6 + 0x18));
      if (cVar2 != '\0') goto LAB_100673382;
    }
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006733b4;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1006733b4:
    if (lVar6 != 0) {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_160);
      local_180.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
      local_188 = 0x80000000;
      local_190.field7 = 0;
      if (*(long *)(local_38 + 0x10) == 0) {
LAB_100673455:
        lVar6 = 0;
      }
      else {
        lVar1 = *(long *)(local_38 + 0x10);
        lVar8 = 0;
        do {
          while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_180),
                cVar2 == '\0') {
            lVar1 = *(long *)(lVar6 + 8);
            lVar8 = lVar6;
            if (*(long *)(lVar6 + 8) == 0) goto LAB_100673441;
          }
          lVar1 = *(long *)(lVar6 + 0x10);
        } while (*(long *)(lVar6 + 0x10) != 0);
        lVar6 = lVar8;
        if (lVar8 == 0) goto LAB_100673455;
LAB_100673441:
        cVar2 = operator<(&local_180,(QString *)(lVar6 + 0x18));
        if (cVar2 != '\0') goto LAB_100673455;
      }
      pDVar7 = &local_190;
      if (lVar6 != 0) {
        pDVar7 = (Data_conflict *)(lVar6 + 0x20);
      }
      QVariant::QVariant(&local_178,(QVariant *)pDVar7);
      QVariant::toString();
      iVar4 = CBaseNode::fromString
                        ((QTypedArrayData<unsigned_short> *)local_160,SUB81(&local_168,0),
                         (QString *)0x0,(int *)0x0,(int *)0x0);
      if (iVar4 == 0) {
        bVar3 = CDownloadedKeyInfo::isActiveHere();
        bVar3 = bVar3 ^ 1;
      }
      else {
        bVar3 = 0;
      }
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_29 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006734f7;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_1006734f7:
      QVariant::~QVariant(&local_178);
      QVariant::~QVariant((QVariant *)&local_190);
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_29 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100673545;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_100673545:
      if (bVar3 != 0) {
        QMetaObject::tr(param_1,(char *)&PTR_staticMetaObject_1022240c0,0x1e0835d);
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_160);
      if (bVar3 != 0) goto LAB_100673660;
    }
    local_198.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("appstore_id",0xb);
    if (*(long *)(local_38 + 0x10) == 0) {
LAB_100673605:
      lVar6 = 0;
    }
    else {
      lVar1 = *(long *)(local_38 + 0x10);
      lVar8 = 0;
      do {
        while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_198), cVar2 == '\0'
              ) {
          lVar1 = *(long *)(lVar6 + 8);
          lVar8 = lVar6;
          if (*(long *)(lVar6 + 8) == 0) goto LAB_1006735f1;
        }
        lVar1 = *(long *)(lVar6 + 0x10);
      } while (*(long *)(lVar6 + 0x10) != 0);
      lVar6 = lVar8;
      if (lVar8 == 0) goto LAB_100673605;
LAB_1006735f1:
      cVar2 = operator<(&local_198,(QString *)(lVar6 + 0x18));
      if (cVar2 != '\0') goto LAB_100673605;
    }
    if (*(int *)local_198.field0_0x0 != -1) {
      if (*(int *)local_198.field0_0x0 != 0) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
        local_29 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10067363d;
      }
      QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
    }
LAB_10067363d:
    if (lVar6 != 0) {
      QMetaObject::tr(param_1,(char *)&PTR_staticMetaObject_1022240c0,0x1dd2f2d);
      goto LAB_100673660;
    }
    uVar5 = QString::fromAscii_helper("",0);
  }
  else {
    uVar5 = QString::fromAscii_helper("",0);
  }
  *(undefined8 *)param_1 = uVar5;
LAB_100673660:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
  return param_1;
}

