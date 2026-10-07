
void FUN_100049c50(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  Data *pDVar8;
  QArrayData *local_508;
  QArrayData *local_500;
  QArrayData *local_4f8;
  QFileInfo local_4f0 [8];
  QString local_4e8;
  QArrayData *local_4e0;
  Data *local_4d8;
  QArrayData *local_4d0;
  char local_4c1;
  QString local_4c0;
  QString local_4b8;
  QString local_4b0;
  QString local_4a8;
  QArrayData *local_4a0;
  QFileInfo local_498 [15];
  undefined1 local_489;
  char local_488 [1024];
  undefined1 local_88 [80];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(uint *)(param_3 + 0x10);
  local_4a0 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_4a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_4b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_4b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  *(undefined8 *)(param_3 + 0x10) = 0x2200000000;
  local_38 = lVar7;
  if (*(short *)(param_2 + 0x16) == 0) {
LAB_10004a55d:
    *param_4 = 0;
  }
  else {
    lVar5 = FUN_1002a6120(param_2,0,0);
    if (lVar5 != 0) {
      QByteArray::resize((int)&local_4a0);
      if ((1 < *(uint *)local_4a0) || (*(long *)(local_4a0 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_4a0,*(uint *)(local_4a0 + 4) + 1,*(uint *)(local_4a0 + 8) >> 0x1f);
      }
      FUN_1002a5990(lVar5,0,local_4a0 + *(long *)(local_4a0 + 0x10),*(undefined4 *)(lVar5 + 8));
      pQVar6 = local_4a0 + *(long *)(local_4a0 + 0x10);
      if (pQVar6 != (QArrayData *)0x0) {
        _strlen((char *)pQVar6);
      }
      QString::fromUtf8_helper((char *)&local_4c0,(int)pQVar6);
      QString::operator=(&local_4a8,&local_4c0);
      if (*(int *)local_4c0.field0_0x0 != -1) {
        if (*(int *)local_4c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4c0.field0_0x0 = *(int *)local_4c0.field0_0x0 + -1;
          local_489 = *(int *)local_4c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_489) goto LAB_100049da9;
        }
        QArrayData::deallocate((QArrayData *)local_4c0.field0_0x0,2,8);
      }
LAB_100049da9:
      if (*(int *)(local_4a8.field0_0x0 + 4) != 0) {
        *(byte *)(param_3 + 0x11) = *(byte *)(param_3 + 0x11) | 1;
        local_4c1 = '\0';
        cVar3 = FUN_100048510(&local_4a8,&local_4b0,0,&local_4c1);
        if ((local_4c1 != '\0') || (cVar3 == '\x01')) {
          *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 1;
          if ((uVar1 & 2) != 0) {
            QString::toUtf8();
            *(int *)(param_3 + 0x94) = *(int *)(local_4d0 + 4) + 1;
            bVar2 = false;
            if (*(int *)(param_3 + 0x90) != 0) {
              lVar5 = FUN_1002a6120(param_2,*(int *)(param_3 + 0x90),1);
              if (lVar5 == 0) {
                FUN_1008e3970("GSHEXT","vm",0,
                              "Failed to get HP paged buffer (%u, 1): pr=%p, pr->Request()=0x%x",
                              *(undefined4 *)(param_3 + 0x90),param_2,*(undefined4 *)(param_2 + 8));
                *param_4 = 0xf000001c;
                bVar2 = true;
              }
              else if (*(uint *)(local_4d0 + 4) < *(uint *)(lVar5 + 8)) {
                bVar2 = false;
                FUN_1002a5a50(lVar5,0,local_4d0 + *(long *)(local_4d0 + 0x10),
                              *(uint *)(local_4d0 + 4) + 1);
                *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 2;
              }
            }
            if (*(int *)local_4d0 != -1) {
              if (*(int *)local_4d0 != 0) {
                LOCK();
                *(int *)local_4d0 = *(int *)local_4d0 + -1;
                local_489 = *(int *)local_4d0 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_100049f3b;
              }
              QArrayData::deallocate(local_4d0,1,8);
            }
LAB_100049f3b:
            if (bVar2) goto LAB_10004a564;
          }
          if ((uVar1 & 4) != 0) {
            local_4e0 = (QArrayData *)QString::fromAscii_helper(".",1);
            QString::split(&local_4d8,&local_4a8,&local_4e0,0,1);
            if (1 < *(uint *)local_4d8) {
              FUN_100022c80(&local_4d8,*(uint *)(local_4d8 + 4));
            }
            lVar5 = FUN_100788e00(local_4d8 + (long)(int)*(uint *)(local_4d8 + 0xc) * 8 + 8);
            if (*(int *)local_4d8 != -1) {
              if (*(int *)local_4d8 != 0) {
                LOCK();
                *(int *)local_4d8 = *(int *)local_4d8 + -1;
                local_489 = *(int *)local_4d8 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_10004a08e;
              }
              iVar4 = *(int *)(local_4d8 + 0xc);
              if (iVar4 != *(int *)(local_4d8 + 8)) {
                lVar7 = (long)*(int *)(local_4d8 + 8) * 8 + (long)iVar4 * -8;
                pDVar8 = local_4d8 + (long)iVar4 * 8 + 8;
                do {
                  pQVar6 = *(QArrayData **)pDVar8;
                  if (*(int *)pQVar6 == 0) {
LAB_10004a057:
                    QArrayData::deallocate(pQVar6,2,8);
                  }
                  else if (*(int *)pQVar6 != -1) {
                    LOCK();
                    *(int *)pQVar6 = *(int *)pQVar6 + -1;
                    local_489 = *(int *)pQVar6 != 0;
                    UNLOCK();
                    if (!(bool)local_489) {
                      pQVar6 = *(QArrayData **)pDVar8;
                      goto LAB_10004a057;
                    }
                  }
                  pDVar8 = pDVar8 + -8;
                  lVar7 = lVar7 + 8;
                } while (lVar7 != 0);
              }
              QListData::dispose(local_4d8);
              lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
            }
LAB_10004a08e:
            if (*(int *)local_4e0 != -1) {
              if (*(int *)local_4e0 != 0) {
                LOCK();
                *(int *)local_4e0 = *(int *)local_4e0 + -1;
                local_489 = *(int *)local_4e0 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_10004a0ca;
              }
              QArrayData::deallocate(local_4e0,2,8);
            }
LAB_10004a0ca:
            if (lVar5 != 0) {
              iVar4 = _LSGetApplicationForInfo(0,0,lVar5,0xffffffff,local_88,0);
              _CFRelease(lVar5);
              if (iVar4 == 0) {
                *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 4;
                iVar4 = _FSRefMakePath(local_88,local_488,0x400);
                if (iVar4 == 0) {
                  _strlen(local_488);
                  QString::fromUtf8_helper((char *)&local_4e8,(int)local_488);
                  QString::operator=(&local_4b8,&local_4e8);
                  if (*(int *)local_4e8.field0_0x0 != -1) {
                    if (*(int *)local_4e8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_4e8.field0_0x0 = *(int *)local_4e8.field0_0x0 + -1;
                      local_489 = *(int *)local_4e8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_489) goto LAB_10004a1c3;
                    }
                    QArrayData::deallocate((QArrayData *)local_4e8.field0_0x0,2,8);
                  }
                }
                else if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("GSHEXT","vm",1,"FSRefMakePath() err %i",iVar4);
                }
              }
            }
          }
LAB_10004a1c3:
          if ((uVar1 & 8) != 0) {
            QFileInfo::QFileInfo(local_4f0,&local_4b0);
            *(undefined4 *)(param_3 + 0x18) = 0;
            cVar3 = QFileInfo::isFile();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 1;
            }
            cVar3 = QFileInfo::isDir();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 2;
            }
            cVar3 = QFileInfo::isSymLink();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 4;
            }
            cVar3 = QFileInfo::isBundle();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 8;
            }
            cVar3 = QFileInfo::isHidden();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 0x10;
            }
            cVar3 = QFileInfo::isExecutable();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 0x20;
            }
            cVar3 = QFileInfo::isReadable();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 0x40;
            }
            cVar3 = QFileInfo::isWritable();
            if (cVar3 != '\0') {
              *(byte *)(param_3 + 0x18) = *(byte *)(param_3 + 0x18) | 0x80;
            }
            *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 8;
            QFileInfo::~QFileInfo(local_4f0);
          }
          if (((uVar1 & 0x10) != 0) && (*(int *)(local_4b8.field0_0x0 + 4) != 0)) {
            QString::toUtf8();
            *(int *)(param_3 + 0x9c) = *(int *)(local_4f8 + 4) + 1;
            bVar2 = false;
            if (*(int *)(param_3 + 0x98) != 0) {
              lVar5 = FUN_1002a6120(param_2,*(int *)(param_3 + 0x98),1);
              if (lVar5 == 0) {
                if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("GSHEXT","vm",1,
                                "Failed to get AP paged buffer (%u, 1): pr=%p, pr->Request()=0x%x",
                                *(undefined4 *)(param_3 + 0x98),param_2,*(undefined4 *)(param_2 + 8)
                               );
                }
                *param_4 = 0xf000001c;
                bVar2 = true;
              }
              else if (*(uint *)(local_4f8 + 4) < *(uint *)(lVar5 + 8)) {
                bVar2 = false;
                FUN_1002a5a50(lVar5,0,local_4f8 + *(long *)(local_4f8 + 0x10),
                              *(uint *)(local_4f8 + 4) + 1);
                *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 0x10;
              }
            }
            if (*(int *)local_4f8 != -1) {
              if (*(int *)local_4f8 != 0) {
                LOCK();
                *(int *)local_4f8 = *(int *)local_4f8 + -1;
                local_489 = *(int *)local_4f8 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_10004a3c9;
              }
              QArrayData::deallocate(local_4f8,1,8);
            }
LAB_10004a3c9:
            if (bVar2) goto LAB_10004a564;
          }
          if (((uVar1 & 0x20) != 0) && (*(int *)(local_4b8.field0_0x0 + 4) != 0)) {
            QFileInfo::QFileInfo(local_498,&local_4b8);
            QFileInfo::completeBaseName();
            QFileInfo::~QFileInfo(local_498);
            QString::toUtf8();
            *(int *)(param_3 + 0xa4) = *(int *)(local_508 + 4) + 1;
            bVar2 = false;
            if (*(int *)(param_3 + 0xa0) != 0) {
              lVar5 = FUN_1002a6120(param_2,*(int *)(param_3 + 0xa0),1);
              if (lVar5 == 0) {
                if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("GSHEXT","vm",1,
                                "Failed to get AN paged buffer (%u, 1): pr=%p, pr->Request()=0x%x",
                                *(undefined4 *)(param_3 + 0xa0),param_2,*(undefined4 *)(param_2 + 8)
                               );
                }
                *param_4 = 0xf000001c;
                bVar2 = true;
              }
              else {
                bVar2 = false;
                if (*(uint *)(local_508 + 4) < *(uint *)(lVar5 + 8)) {
                  bVar2 = false;
                  FUN_1002a5a50(lVar5,0,local_508 + *(long *)(local_508 + 0x10),
                                *(uint *)(local_508 + 4) + 1);
                  *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) | 0x20;
                }
              }
            }
            if (*(int *)local_508 != -1) {
              if (*(int *)local_508 != 0) {
                LOCK();
                *(int *)local_508 = *(int *)local_508 + -1;
                local_489 = *(int *)local_508 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_10004a51d;
              }
              QArrayData::deallocate(local_508,1,8);
            }
LAB_10004a51d:
            if (*(int *)local_500 != -1) {
              if (*(int *)local_500 != 0) {
                LOCK();
                *(int *)local_500 = *(int *)local_500 + -1;
                local_489 = *(int *)local_500 != 0;
                UNLOCK();
                if ((bool)local_489) goto LAB_10004a559;
              }
              QArrayData::deallocate(local_500,2,8);
            }
LAB_10004a559:
            if (bVar2) goto LAB_10004a564;
          }
        }
      }
      goto LAB_10004a55d;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("GSHEXT","vm",1,"Failed to get paged buffer (0, 0): pr=%p, pr->Request()=0x%x",
                    param_2,*(undefined4 *)(param_2 + 8));
    }
    *param_4 = 0xf000001c;
  }
LAB_10004a564:
  if (*(int *)local_4b8.field0_0x0 != -1) {
    if (*(int *)local_4b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4b8.field0_0x0 = *(int *)local_4b8.field0_0x0 + -1;
      local_489 = *(int *)local_4b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10004a5a0;
    }
    QArrayData::deallocate((QArrayData *)local_4b8.field0_0x0,2,8);
  }
LAB_10004a5a0:
  if (*(int *)local_4b0.field0_0x0 != -1) {
    if (*(int *)local_4b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4b0.field0_0x0 = *(int *)local_4b0.field0_0x0 + -1;
      local_489 = *(int *)local_4b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10004a5dc;
    }
    QArrayData::deallocate((QArrayData *)local_4b0.field0_0x0,2,8);
  }
LAB_10004a5dc:
  if (*(int *)local_4a8.field0_0x0 != -1) {
    if (*(int *)local_4a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4a8.field0_0x0 = *(int *)local_4a8.field0_0x0 + -1;
      local_489 = *(int *)local_4a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10004a618;
    }
    QArrayData::deallocate((QArrayData *)local_4a8.field0_0x0,2,8);
  }
LAB_10004a618:
  if (*(int *)local_4a0 != -1) {
    if (*(int *)local_4a0 != 0) {
      LOCK();
      *(int *)local_4a0 = *(int *)local_4a0 + -1;
      local_489 = *(int *)local_4a0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10004a654;
    }
    QArrayData::deallocate(local_4a0,1,8);
  }
LAB_10004a654:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

