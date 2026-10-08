
undefined1 FUN_1001d53a0(QEvent *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  QUrl *pQVar8;
  bool bVar9;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QUrl local_b0 [8];
  QArrayData *local_a8;
  QUrl local_a0 [8];
  QUrl local_98 [15];
  bool local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  uVar5 = QApplication::event(param_1);
  if ((*(byte *)(param_2 + 0x12) & 4) == 0) goto LAB_1001d5730;
  uVar1 = *(ushort *)(param_2 + 0x10);
  if (uVar1 != 0x74) {
    if (uVar1 - 0x79 < 2) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((bool)*(char *)(lVar3 + 0x30) != (uVar1 == 0x79)) {
        bVar9 = uVar1 == 0x79;
        *(bool *)(lVar3 + 0x30) = bVar9;
        *(undefined1 *)(lVar3 + 0x31) = 0;
        FUN_10080a290(param_1,bVar9,uVar1 == 0x79,CONCAT11((char)(uVar1 >> 8),bVar9));
      }
    }
    goto LAB_1001d5730;
  }
  pQVar8 = (QUrl *)(param_2 + 0x20);
  QUrl::QUrl(local_98,pQVar8);
  cVar6 = QUrl::isLocalFile();
  QUrl::~QUrl(local_98);
  if (cVar6 == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    QUrl::QUrl(local_a0,pQVar8);
    FUN_100066a70(uVar4,local_a0);
    QUrl::~QUrl(local_a0);
    goto LAB_1001d5730;
  }
  QUrl::QUrl(local_b0,pQVar8);
  MacUtils::localPathForUrl((QUrl *)&local_a8);
  QUrl::~QUrl(local_b0);
  QString::toUtf8();
  iVar7 = _FSPathMakeRef(local_b8 + *(long *)(local_b8 + 0x10),local_88,0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_89 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_89) goto LAB_1001d54f4;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1001d54f4:
  if (iVar7 == 0) {
    cVar6 = FUN_1000ad140(local_88);
    if (cVar6 == '\0') {
      local_d0 = local_a8;
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_89 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      FUN_100063450(&local_d0,0,0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_89 = *(int *)local_d0 != 0;
          UNLOCK();
          if (local_89) goto LAB_1001d56f4;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
    }
    else {
      local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
      QMutex::lock();
      lVar3 = DAT_1023108a8;
      if (DAT_1023108a8 != 0) {
        DAT_1023108b0 = DAT_1023108b0 + 1;
      }
      QMutex::unlock();
      if (lVar3 != 0) {
        cVar6 = FUN_1000ad670(lVar3,local_88,&local_c0);
        if ((cVar6 == '\0') && (*(int *)(local_c0 + 4) != 0)) {
          local_c8 = local_c0;
          if (1 < *(int *)local_c0 + 1U) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + 1;
            local_89 = *(int *)local_c0 != 0;
            UNLOCK();
          }
          FUN_100063450(&local_c8,1,0);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_89 = *(int *)local_c8 != 0;
              UNLOCK();
              if (local_89) goto LAB_1001d5634;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
        }
LAB_1001d5634:
        FUN_100055290(&DAT_102310898);
      }
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_89 = *(int *)local_c0 != 0;
          UNLOCK();
          if (local_89) goto LAB_1001d56f4;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
LAB_1001d56f4:
    if (*(int *)local_a8 == -1) goto LAB_1001d5730;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      iVar7 = *(int *)local_a8;
      UNLOCK();
      goto LAB_1001d5711;
    }
  }
  else {
    uVar5 = 1;
    if (*(int *)local_a8 == -1) goto LAB_1001d5730;
    uVar5 = 1;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      iVar7 = *(int *)local_a8;
      UNLOCK();
      uVar5 = 1;
LAB_1001d5711:
      local_89 = iVar7 != 0;
      if (local_89) goto LAB_1001d5730;
    }
  }
  QArrayData::deallocate(local_a8,2,8);
LAB_1001d5730:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

