
QString * FUN_1006fcec0(QString *param_1,QString *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  QArrayData *pQVar5;
  int iVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  long lVar9;
  QArrayData *pQVar10;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100769bc0(&local_40,2);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)local_40 == 0) {
    if ((int)*(uint *)(local_40 + 8) < 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(0x878,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      local_48 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar5[0xb] = (QArrayData)((byte)pQVar5[0xb] | 0x80);
      pQVar5 = local_48;
    }
    else {
      local_48 = (QArrayData *)QArrayData::allocate(0x878,8,(long)*(int *)(local_40 + 4),0);
      pQVar5 = local_48;
      if (local_48 == (QArrayData *)0x0) {
        qBadAlloc();
        pQVar5 = (QArrayData *)0x0;
      }
    }
    pQVar8 = local_40;
    if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) != 0) {
      lVar9 = (long)*(int *)(local_40 + 4) * 0x878;
      if (lVar9 != 0) {
        pQVar7 = pQVar5 + *(long *)(pQVar5 + 0x10);
        pQVar10 = local_40 + *(long *)(local_40 + 0x10);
        do {
          _memcpy(pQVar7,pQVar10,0x878);
          lVar9 = lVar9 + -0x878;
          pQVar7 = pQVar7 + 0x878;
          pQVar10 = pQVar10 + 0x878;
        } while (lVar9 != 0);
      }
      *(int *)(pQVar5 + 4) = *(int *)(pQVar8 + 4);
    }
  }
  else {
    if (*(int *)local_40 != -1) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = local_40;
    pQVar5 = local_40;
  }
  if ((long)*(int *)(pQVar5 + 4) * 0x878 != 0) {
    pQVar8 = pQVar5 + *(long *)(pQVar5 + 0x10);
    pQVar5 = pQVar8 + (long)*(int *)(pQVar5 + 4) * 0x878;
    do {
      bVar3 = true;
      do {
        bVar1 = bVar3;
        bVar2 = false;
        if (!bVar1) break;
        _strlen((char *)(pQVar8 + 0x458));
        QString::fromUtf8_helper((char *)&local_58,(int)(pQVar8 + 0x458));
        QString::normalized(&local_50,&local_58,1,0);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fd0ba;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1006fd0ba:
        _strlen((char *)(pQVar8 + 0x58));
        QString::fromUtf8_helper((char *)&local_68,(int)(pQVar8 + 0x58));
        QString::normalized(&local_60,&local_68,1,0);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fd112;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1006fd112:
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          pQVar7 = local_70;
          lVar9 = *(long *)(local_70 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","cmn_utils",3,"Found mount entry : \'%s\' \'%s\'",pQVar7 + lVar9,
                        local_78 + *(long *)(local_78 + 0x10));
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006fd1a6;
            }
            QArrayData::deallocate(local_78,1,8);
          }
LAB_1006fd1a6:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006fd1e0;
            }
            QArrayData::deallocate(local_70,1,8);
          }
        }
LAB_1006fd1e0:
        local_80 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
        cVar4 = QString::startsWith(&local_50,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fd23a;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1006fd23a:
        if (cVar4 != '\0') {
          QString::remove((int)&local_50,0);
        }
        if (param_3 == '\0') {
          cVar4 = operator==(param_2,&local_50);
        }
        else {
          cVar4 = QString::startsWith(&local_50,param_2,1);
        }
        iVar6 = 0;
        if (cVar4 != '\0') {
          iVar6 = 5;
          QString::operator=(param_1,&local_60);
        }
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fd2d2;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_1006fd2d2:
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fd302;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1006fd302:
        bVar3 = false;
        bVar2 = bVar1;
      } while (iVar6 == 0);
    } while ((!bVar2) && (pQVar8 = pQVar8 + 0x878, pQVar8 != pQVar5));
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fd360;
    }
    QArrayData::deallocate(local_48,0x878,8);
  }
LAB_1006fd360:
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
    QArrayData::deallocate(local_40,0x878,8);
  }
  return param_1;
}

