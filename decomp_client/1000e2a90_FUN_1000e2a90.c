
void FUN_1000e2a90(long *param_1,long *param_2)

{
  long *plVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QFileInfo local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    (**(code **)(*param_1 + 0xa0))();
    lVar5 = *param_2;
    uVar8 = (ulong)*(uint *)(lVar5 + 8);
    if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
      lVar10 = 0;
      do {
        lVar5 = *(long *)(lVar5 + 0x10 + ((int)uVar8 + lVar10) * 8);
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        QMutex::lock();
        FUN_1000f8c40(&local_48,param_1 + 0x34,lVar5);
        if ((local_48 != (long *)0x0) && ((QString *)local_48[2] != (QString *)0x0)) {
          QString::operator=(&local_40,(QString *)local_48[2]);
        }
        QMutex::unlock();
        lVar9 = *(long *)(lVar5 + 8);
        if ((*(int *)(lVar9 + 0xc) != *(int *)(lVar9 + 8)) && ((*(byte *)(lVar5 + 0x20) & 1) == 0))
        {
          lVar9 = lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8;
          if (*(int *)(local_40.field0_0x0 + 4) == 0) {
            FUN_1000e2840(param_1,lVar9);
          }
          else {
            local_50 = (QArrayData *)QString::fromAscii_helper(".",1);
            iVar4 = QString::lastIndexOf(lVar9,&local_50,0xffffffff,1);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000e2bfc;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1000e2bfc:
            if (0 < iVar4) {
              lVar9 = *(long *)(lVar5 + 8);
              QString::mid((int)&local_58,(int)lVar9 + 0x10 + *(int *)(lVar9 + 8) * 8);
              lVar9 = 0;
              if (local_48 != (long *)0x0) {
                lVar9 = local_48[2];
              }
              local_60 = (QArrayData *)QString::fromAscii_helper("mailto",6);
              iVar4 = QString::indexOf(lVar9 + 0x28,&local_60,0,0);
              bVar11 = true;
              if (iVar4 != -1) {
                local_70 = (QArrayData *)QString::fromAscii_helper(",%1,",4);
                lVar9 = 0;
                if (local_48 != (long *)0x0) {
                  lVar9 = local_48[2];
                }
                QString::arg(&local_68,&local_70,lVar9 + 0x30,0,0x20);
                local_80 = (QArrayData *)QString::fromAscii_helper(",%1,",4);
                QString::arg(&local_78,&local_80,&local_58,0,0x20);
                iVar4 = QString::indexOf(&local_68,&local_78,0,1);
                bVar11 = iVar4 != -1;
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2d21;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
LAB_1000e2d21:
                if (*(int *)local_80 != -1) {
                  if (*(int *)local_80 != 0) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + -1;
                    local_31 = *(int *)local_80 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2d51;
                  }
                  QArrayData::deallocate(local_80,2,8);
                }
LAB_1000e2d51:
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_31 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2d81;
                  }
                  QArrayData::deallocate(local_68,2,8);
                }
LAB_1000e2d81:
                if (*(int *)local_70 != -1) {
                  if (*(int *)local_70 != 0) {
                    LOCK();
                    *(int *)local_70 = *(int *)local_70 + -1;
                    local_31 = *(int *)local_70 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2db1;
                  }
                  QArrayData::deallocate(local_70,2,8);
                }
              }
LAB_1000e2db1:
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000e2de1;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_1000e2de1:
              if (bVar11) {
                QFileInfo::QFileInfo(local_88,&local_40);
                QFileInfo::completeBaseName();
                lVar9 = param_1[10];
                FUN_1000463e0(&local_98,&local_90,param_1 + 2,0);
                FUN_100100120(lVar9 + 0x38,&local_58,&local_98,&local_90);
                if (*(int *)local_98 != -1) {
                  if (*(int *)local_98 != 0) {
                    LOCK();
                    *(int *)local_98 = *(int *)local_98 + -1;
                    local_31 = *(int *)local_98 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2e81;
                  }
                  QArrayData::deallocate(local_98,2,8);
                }
LAB_1000e2e81:
                if (*(int *)local_90 != -1) {
                  if (*(int *)local_90 != 0) {
                    LOCK();
                    *(int *)local_90 = *(int *)local_90 + -1;
                    local_31 = *(int *)local_90 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000e2eb7;
                  }
                  QArrayData::deallocate(local_90,2,8);
                }
LAB_1000e2eb7:
                QFileInfo::~QFileInfo(local_88);
              }
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000e2f10;
                }
                QArrayData::deallocate(local_58,2,8);
              }
            }
          }
        }
LAB_1000e2f10:
        uVar6 = (**(code **)(*param_1 + 0x68))();
        cVar3 = FUN_1000e8740(uVar6,lVar5);
        if (cVar3 == '\0') {
          pQVar7 = (QArrayData *)QString::fromAscii_helper(" ",1);
          QtPrivate::QStringList_join
                    ((QStringList *)&local_a8.field0,(QChar *)(lVar5 + 8),
                     (int)*(undefined8 *)(pQVar7 + 0x10) + (int)pQVar7);
          QString::toUtf8();
          pQVar2 = local_a0;
          lVar5 = *(long *)(local_a0 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",0,
                        "Error: failed to send request to guest to open doc=\"%s\" using app=\"%s\""
                        ,pQVar2 + lVar5,local_b0 + *(long *)(local_b0 + 0x10));
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e2ff6;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_1000e2ff6:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e302c;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_1000e302c:
          if (*(int *)local_a8.field1 != -1) {
            if (*(int *)local_a8.field1 != 0) {
              LOCK();
              *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
              local_31 = *(int *)local_a8.field1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e3062;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field1,2,8);
          }
LAB_1000e3062:
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000e3090;
            }
            QArrayData::deallocate(pQVar7,2,8);
          }
        }
LAB_1000e3090:
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000e30e1;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_1000e30e1:
        lVar10 = lVar10 + 1;
        lVar5 = *param_2;
        uVar8 = (ulong)*(int *)(lVar5 + 8);
      } while (lVar10 < (long)((long)*(int *)(lVar5 + 0xc) - uVar8));
    }
  }
  return;
}

