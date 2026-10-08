
undefined1 FUN_100ccdaa0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  Data *local_78;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QRegExp local_50 [8];
  QArrayData *local_48;
  QRegExp local_40 [15];
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("^(\\[)([a-zA-Z0-9 ]+)(\\])$",0x19);
  QRegExp::QRegExp(local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ccdb13;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ccdb13:
  local_58 = (QArrayData *)QString::fromAscii_helper("([a-zA-Z0-9 :]+)(=[ ]*)(.*)",0x1b);
  QRegExp::QRegExp(local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ccdb6c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100ccdb6c:
  iVar4 = QRegExp::indexIn(local_40,param_2,0,0);
  if (iVar4 == -1) {
    if (((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0)) ||
       (iVar4 = QRegExp::indexIn(local_50,param_2,0,0), iVar4 == -1)) {
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
        }
        FUN_100df99c0("","ConfigConverter",3,"Unknown config line: %s",
                      local_c8 + *(long *)(local_c8 + 0x10));
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cce1aa;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
      }
    }
    else {
      QString::split(&local_78,param_2,0x3d,0,1);
      if (*(int *)(local_78 + 0xc) - *(int *)(local_78 + 8) < 2) {
        QString::toUtf8();
        FUN_100df99c0("","ConfigConverter",0,"Couldn\'t to parse config file line: [%s]",
                      local_80 + *(long *)(local_80 + 0x10));
        bVar3 = true;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cce117;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
      else {
        local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QString::trimmed();
        QString::operator=(&local_88,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ccde75;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100ccde75:
        QString::trimmed();
        QString::operator=(&local_90,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ccded7;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100ccded7:
        if (2 < *(int *)(local_78 + 0xc) - *(int *)(local_78 + 8)) {
          lVar9 = 2;
          do {
            local_b8 = (QArrayData *)QString::fromAscii_helper(" = ",3);
            local_b0.field0_0x0 = local_90.field0_0x0;
            if (1 < *(int *)local_90.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_b0);
            QString::trimmed();
            local_a8.field0_0x0 = local_b0.field0_0x0;
            if (1 < *(int *)local_b0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_a8);
            QString::operator=(&local_90,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ccdfd1;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_100ccdfd1:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cce007;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_100cce007:
            if (*(int *)local_b0.field0_0x0 != -1) {
              if (*(int *)local_b0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                local_31 = *(int *)local_b0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cce03d;
              }
              QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
            }
LAB_100cce03d:
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cce073;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_100cce073:
            lVar9 = lVar9 + 1;
          } while (lVar9 < (long)*(int *)(local_78 + 0xc) - (long)*(int *)(local_78 + 8));
        }
        uVar7 = 0;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        }
        FUN_100ccf010(uVar7,&local_88,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cce0e4;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100cce0e4:
        bVar3 = false;
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            bVar3 = false;
            if ((bool)local_31) goto LAB_100cce117;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          bVar3 = false;
        }
      }
LAB_100cce117:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cce1a1;
        }
        iVar4 = *(int *)(local_78 + 0xc);
        if (iVar4 != *(int *)(local_78 + 8)) {
          lVar9 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar4 * -8;
          pDVar6 = local_78 + (long)iVar4 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar8 == 0) {
LAB_100cce180:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar6;
                goto LAB_100cce180;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose(local_78);
      }
LAB_100cce1a1:
      if (bVar3) {
        uVar5 = 0;
        goto LAB_100cce1ac;
      }
    }
  }
  else {
    QRegExp::cap((int)&local_68);
    QString::trimmed();
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccdbd4;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100ccdbd4:
    FUN_100ccd230(&local_70,param_1,&local_60);
    if (local_70 != (long *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x10);
    *(long **)(param_1 + 0x10) = local_70;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cce1aa;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100cce1aa:
  uVar5 = 1;
LAB_100cce1ac:
  QRegExp::~QRegExp(local_50);
  QRegExp::~QRegExp(local_40);
  return uVar5;
}

