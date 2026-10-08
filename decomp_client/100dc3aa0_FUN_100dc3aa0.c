
undefined8 * FUN_100dc3aa0(undefined8 *param_1,char param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined1 auVar13 [16];
  QTypedArrayData<unsigned_short> *pQStack_c0;
  QArrayData *local_a0;
  QFile local_98 [16];
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString QStack_60;
  undefined *local_58;
  undefined *local_50 [2];
  undefined8 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar4 = _CSGetLocalIdentityAuthority();
  uVar4 = _CSIdentityQueryCreate(0,1,uVar4);
  local_40 = 0;
  _CSIdentityQueryExecute(uVar4,0,&local_40);
  uVar5 = _CSIdentityQueryCopyResults(uVar4);
  lVar6 = _CFArrayGetCount(uVar5);
  puVar1 = PTR_shared_null_1021e1288;
  if (0 < lVar6) {
    lVar12 = 0;
    auVar13._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar13._0_8_ = PTR_shared_null_1021e1288;
    auVar13._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      uVar7 = _CFArrayGetValueAtIndex(uVar5,lVar12);
      cVar2 = _CSIdentityIsHidden(uVar7);
      if (cVar2 == '\0') {
        pQStack_c0 = auVar13._8_8_;
        local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
        QStack_60.field0_0x0 = pQStack_c0;
        local_58 = puVar1;
        local_50[0] = puVar1;
        uVar8 = _CSIdentityGetFullName(uVar7);
        FUN_100dc90a0(&local_70,uVar8);
        QString::operator=(&QStack_60,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc3bd4;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_100dc3bd4:
        uVar8 = _CSIdentityGetPosixName(uVar7);
        FUN_100dc90a0(&local_78,uVar8);
        QString::operator=(&local_68,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc3c25;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100dc3c25:
        if (param_2 != '\0') {
          lVar9 = _CSIdentityGetImageData(uVar7);
          if ((lVar9 == 0) || (lVar10 = _CFDataGetLength(lVar9), 0x200000 < lVar10)) {
            lVar9 = _CSIdentityGetImageURL(uVar7);
            if ((lVar9 != 0) && (lVar9 = _CFURLCopyFileSystemPath(lVar9,0), lVar9 != 0)) {
              FUN_100dc90a0(&local_88,lVar9);
              if ((*(int *)(local_88.field0_0x0 + 4) != 0) &&
                 (cVar2 = QFile::exists(&local_88), cVar2 != '\0')) {
                QFile::QFile(local_98,&local_88);
                cVar2 = QFile::open(local_98,1);
                if ((cVar2 != '\0') && (lVar10 = QFile::size(), lVar10 < 0x200001)) {
                  QIODevice::readAll();
                  QByteArray::operator=((QByteArray *)local_50,(QByteArray *)&local_a0);
                  if (*(int *)local_a0 != -1) {
                    if (*(int *)local_a0 != 0) {
                      LOCK();
                      *(int *)local_a0 = *(int *)local_a0 + -1;
                      local_31 = *(int *)local_a0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100dc3da2;
                    }
                    QArrayData::deallocate(local_a0,1,8);
                  }
                }
LAB_100dc3da2:
                QFile::~QFile(local_98);
              }
              _CFRelease(lVar9);
              if (*(int *)local_88.field0_0x0 != -1) {
                if (*(int *)local_88.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                  local_31 = *(int *)local_88.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100dc3df0;
                }
                QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
              }
            }
          }
          else {
            pcVar11 = (char *)_CFDataGetBytePtr(lVar9);
            iVar3 = _CFDataGetLength(lVar9);
            QByteArray::QByteArray((QByteArray *)&local_80,pcVar11,iVar3);
            QByteArray::operator=((QByteArray *)local_50,(QByteArray *)&local_80);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100dc3df0;
              }
              QArrayData::deallocate(local_80,1,8);
            }
          }
        }
LAB_100dc3df0:
        FUN_100dcca40(param_1,&local_68);
        FUN_100d959f0(&local_68);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar6);
  }
  _CFRelease(uVar5);
  _CFRelease(uVar4);
  return param_1;
}

