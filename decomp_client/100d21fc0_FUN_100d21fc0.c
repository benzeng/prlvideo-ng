
undefined1 FUN_100d21fc0(QString *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  char cVar6;
  QArrayData *pQVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  Data *pDVar11;
  Data *pDVar12;
  int iVar13;
  undefined1 uVar14;
  QArrayData *local_a8;
  long *local_a0;
  QArrayData *local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  Data *local_68;
  QArrayData *local_60;
  Data *local_58;
  QFileInfo local_50 [8];
  QString local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_50,param_1);
  QFileInfo::absolutePath();
  QDir::QDir(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d22044;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d22044:
  QFileInfo::~QFileInfo(local_50);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  pQVar7 = (QArrayData *)QString::fromAscii_helper("*.vbox",6);
  local_60 = pQVar7;
  FUN_1000341d0(&local_58,&local_60);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d220a8;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100d220a8:
  iVar13 = 0;
  do {
    QDir::entryList(&local_68,local_40,&local_58,2,0xffffffff);
    local_88 = local_68;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_88);
        iVar2 = *(int *)(local_88 + 8);
        if (iVar2 != *(int *)(local_88 + 0xc)) {
          pDVar11 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
          pDVar12 = local_88 + (long)iVar2 * 8 + 0x10;
          lVar8 = (long)*(int *)(local_88 + 0xc) * 8 + (long)iVar2 * -8;
          do {
            piVar3 = *(int **)pDVar11;
            *(int **)pDVar12 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            pDVar12 = pDVar12 + 8;
            pDVar11 = pDVar11 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
      do {
        local_70 = 1;
        QDir::absoluteFilePath(&local_90);
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","VBoxVmModel",3,"Try locate vdi \'%s\'",
                        local_98 + *(long *)(local_98 + 0x10));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d22220;
            }
            QArrayData::deallocate(local_98,1,8);
          }
        }
LAB_100d22220:
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_a0 = plVar4;
        plVar9 = (long *)FUN_100d21950(&local_90,&local_a0);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        cVar6 = '\n';
        if (plVar9 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar9 + 0x58))(plVar9);
          cVar5 = FUN_100d229b0(param_1,uVar10,param_3);
          cVar6 = '\0';
          if ((cVar5 != '\0') && (cVar6 = '\x01', 2 < DAT_10230ffd0)) {
            QString::toUtf8();
            FUN_100df99c0("","VBoxVmModel",3,"vdi found in \'%s\'",
                          local_a8 + *(long *)(local_a8 + 0x10));
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d22340;
              }
              QArrayData::deallocate(local_a8,1,8);
            }
          }
LAB_100d22340:
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d22382;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100d22382:
        if ((cVar6 != '\0') && (cVar6 != '\n')) goto LAB_100d223b6;
        local_80 = local_80 + 8;
      } while (local_80 != local_78);
    }
    local_70 = 1;
    cVar6 = '\x05';
LAB_100d223b6:
    pDVar11 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d22465;
      }
      iVar2 = *(int *)(local_88 + 0xc);
      if (iVar2 != *(int *)(local_88 + 8)) {
        lVar8 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar2 * -8;
        pDVar12 = local_88 + (long)iVar2 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar12;
          if (*(int *)pQVar7 == 0) {
LAB_100d22440:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar7 = *(QArrayData **)pDVar12;
              goto LAB_100d22440;
            }
          }
          pDVar12 = pDVar12 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar11);
    }
LAB_100d22465:
    if (cVar6 == '\x05') {
      cVar6 = QDir::cdUp();
      cVar6 = (cVar6 == '\0') * '\x02';
    }
    pDVar11 = local_68;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d22515;
      }
      iVar2 = *(int *)(local_68 + 0xc);
      if (iVar2 != *(int *)(local_68 + 8)) {
        lVar8 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar2 * -8;
        pDVar12 = local_68 + (long)iVar2 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar12;
          if (*(int *)pQVar7 == 0) {
LAB_100d224f0:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar7 = *(QArrayData **)pDVar12;
              goto LAB_100d224f0;
            }
          }
          pDVar12 = pDVar12 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar11);
    }
LAB_100d22515:
    pDVar11 = local_58;
    if (cVar6 == '\x02') {
      uVar14 = 0;
      goto LAB_100d22814;
    }
    if (cVar6 != '\0') {
      uVar14 = 1;
      goto LAB_100d22814;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  uVar14 = 0;
LAB_100d22814:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d228a0;
    }
    iVar13 = *(int *)(local_58 + 0xc);
    if (iVar13 != *(int *)(local_58 + 8)) {
      lVar8 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar13 * -8;
      pDVar12 = local_58 + (long)iVar13 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar7 == 0) {
LAB_100d2287f:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar12;
            goto LAB_100d2287f;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_100d228a0:
  QDir::~QDir(local_40);
  return uVar14;
}

