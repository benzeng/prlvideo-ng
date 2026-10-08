
int FUN_100b6fd60(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  uint uVar9;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = FUN_100b93cc0(*(undefined4 *)(param_1 + 0x120),&DAT_102314290);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x124) = 1;
    iVar4 = FUN_100b706c0(param_2);
    iVar3 = -0x7ffeefc9;
    if (iVar4 == 0) {
      iVar3 = FUN_100b60910(param_1,param_2);
      if (iVar3 < 0) {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","License",3,"License key was not set with error (%d)",iVar3);
        }
      }
      else {
        iVar3 = FUN_100b66ab0(param_1);
        if ((iVar3 == -0x7ffeefa8) || (iVar3 == 0)) {
          if (*(char *)(param_1 + 0x10) == '\0') {
            FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                          "VzLicense.cpp",0x1bb,"IsFile");
          }
          if (*(char *)(param_1 + 0x125) == '\0') {
            QString::operator=(&local_40,param_2);
LAB_100b7017c:
            if (*(int *)(local_38.field0_0x0 + 4) == 0) {
              iVar4 = -0xd;
              if (*(int *)(local_40.field0_0x0 + 4) != 0) {
                QString::toLatin1();
                iVar4 = FUN_100b70790();
                if (*(int *)local_80 != -1) {
                  if (*(int *)local_80 != 0) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + -1;
                    local_29 = *(int *)local_80 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b7027e;
                  }
                  QArrayData::deallocate(local_80,1,8);
                }
                goto LAB_100b7027e;
              }
            }
            else {
              QString::toLatin1();
              iVar4 = FUN_100b70790();
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_29 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_29) goto LAB_100b7027e;
                }
                QArrayData::deallocate(local_78,1,8);
              }
LAB_100b7027e:
              iVar3 = 0;
              if (iVar4 == 0) goto LAB_100b7036a;
            }
            pQVar8 = (QArrayData *)param_2->field0_0x0;
            if (1 < *(int *)pQVar8 + 1U) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + 1;
              local_29 = *(int *)pQVar8 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            lVar1 = *(long *)(local_88 + 0x10);
            uVar5 = FUN_100b9d570();
            FUN_100df99c0("","License",0,"Couldn\'t load license key (%s),  %s",local_88 + lVar1,
                          uVar5);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_29 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_100b7031c;
              }
              QArrayData::deallocate(local_88,1,8);
            }
LAB_100b7031c:
            if (*(int *)pQVar8 != -1) {
              if (*(int *)pQVar8 != 0) {
                LOCK();
                *(int *)pQVar8 = *(int *)pQVar8 + -1;
                local_29 = *(int *)pQVar8 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_100b70352;
              }
              QArrayData::deallocate(pQVar8,2,8);
            }
LAB_100b70352:
            uVar9 = iVar4 + 0x12;
            iVar3 = -0x7ffef000;
            if (uVar9 < 0x1a) goto LAB_100b6fddb;
          }
          else {
            pcVar6 = (char *)FUN_100b9e740();
            if (pcVar6 != (char *)0x0) {
              sVar7 = _strlen(pcVar6);
              pQVar8 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar7);
              iVar3 = *(int *)(pQVar8 + 4);
              if (*(int *)pQVar8 != -1) {
                if (*(int *)pQVar8 != 0) {
                  LOCK();
                  *(int *)pQVar8 = *(int *)pQVar8 + -1;
                  local_29 = *(int *)pQVar8 != 0;
                  UNLOCK();
                  if ((bool)local_29) goto LAB_100b6fee6;
                }
                QArrayData::deallocate(pQVar8,2,8);
              }
LAB_100b6fee6:
              if (iVar3 != 0) {
                local_58 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
                sVar7 = _strlen(pcVar6);
                local_60 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar7);
                QString::arg(&local_50,&local_58,&local_60,0,0x20);
                local_68 = param_2->field0_0x0;
                if (1 < *(int *)local_68 + 1U) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + 1;
                  local_29 = *(int *)local_68 != 0;
                  UNLOCK();
                }
                QString::arg(&local_48,&local_50,&local_68,0,0x20);
                QString::operator=(&local_38,&local_48);
                if (*(int *)local_48.field0_0x0 != -1) {
                  if (*(int *)local_48.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                    local_29 = *(int *)local_48.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b6ffa1;
                  }
                  QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
                }
LAB_100b6ffa1:
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_29 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b6ffd1;
                  }
                  QArrayData::deallocate((QArrayData *)local_68,2,8);
                }
LAB_100b6ffd1:
                if (*(int *)local_50 != -1) {
                  if (*(int *)local_50 != 0) {
                    LOCK();
                    *(int *)local_50 = *(int *)local_50 + -1;
                    local_29 = *(int *)local_50 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b70001;
                  }
                  QArrayData::deallocate(local_50,2,8);
                }
LAB_100b70001:
                if (*(int *)local_60 != -1) {
                  if (*(int *)local_60 != 0) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + -1;
                    local_29 = *(int *)local_60 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b70031;
                  }
                  QArrayData::deallocate(local_60,2,8);
                }
LAB_100b70031:
                if (*(int *)local_58 != -1) {
                  if (*(int *)local_58 != 0) {
                    LOCK();
                    *(int *)local_58 = *(int *)local_58 + -1;
                    local_29 = *(int *)local_58 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_100b70061;
                  }
                  QArrayData::deallocate(local_58,2,8);
                }
LAB_100b70061:
                cVar2 = QFile::exists(&local_38);
                if (cVar2 != '\0') goto LAB_100b7017c;
                iVar3 = -0xd;
                if (2 < DAT_10230ffd0) {
                  QString::toLatin1();
                  FUN_100df99c0("","License",3,"File %s not exists",
                                local_70 + *(long *)(local_70 + 0x10));
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_29 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_29) goto LAB_100b7036a;
                    }
                    QArrayData::deallocate(local_70,1,8);
                  }
                }
                goto LAB_100b7036a;
              }
            }
            iVar3 = -0xd;
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("","License",3,"Empty path to installed licenses folder");
            }
          }
        }
        else if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","License",3,"License key has status (%d)",iVar3);
        }
      }
    }
  }
  else {
    uVar5 = FUN_100b9d570();
    FUN_100df99c0("","License",0,"Can\'t initialize vzlic library %s",uVar5);
    uVar9 = iVar3 + 0x12;
    iVar3 = -0x7ffef000;
    if (0x19 < uVar9) goto LAB_100b7036a;
LAB_100b6fddb:
    iVar3 = *(int *)(&DAT_101cdc110 + (long)(int)uVar9 * 4);
  }
LAB_100b7036a:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7039a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b7039a:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return iVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return iVar3;
}

