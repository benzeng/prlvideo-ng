
void FUN_1000f2010(long param_1,QString *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  QFileInfo *pQVar8;
  undefined8 uVar9;
  long lVar10;
  QArrayData *local_100;
  undefined1 local_f8 [48];
  undefined8 local_c8;
  long *local_68;
  int local_5c;
  QArrayData *local_58;
  Data *local_50;
  QDir local_48 [8];
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return;
  }
  QFileInfo::QFileInfo(local_40,param_2);
  QDir::QDir(local_48,param_2);
  cVar3 = QDir::exists();
  if (cVar3 != '\0') {
    QDir::setFilter(local_48,0x6003);
    QDir::entryInfoList(&local_50,local_48,0xffffffff,0xffffffff);
    uVar7 = (ulong)*(uint *)(local_50 + 8);
    if ((int)*(uint *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
      lVar10 = 0;
      do {
        pQVar8 = (QFileInfo *)(local_50 + ((int)uVar7 + lVar10) * 8 + 0x10);
        QFileInfo::absoluteFilePath();
        cVar3 = QFileInfo::isDir();
        if (cVar3 == '\0') {
          iVar4 = FUN_1000f2480(&local_58,&local_5c);
          if (iVar4 == 0 && local_5c == 0) {
            pvVar5 = operator_new(0x60);
            FUN_1000e6090(pvVar5);
            plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
            if (plVar6 == (long *)0x0) {
              FUN_1000e6210(pvVar5);
              operator_delete(pvVar5);
              plVar6 = (long *)0x0;
            }
            else {
              *(undefined4 *)(plVar6 + 1) = 1;
              plVar6[2] = (long)pvVar5;
              *plVar6 = (long)&PTR_FUN_10226d4b8;
            }
            local_68 = plVar6;
            cVar3 = FUN_1000f25e0(&local_58,&local_68);
            if (cVar3 != '\0') {
              *(undefined8 *)(plVar6[2] + 0x40) = 0;
              QString::toUtf8();
              iVar4 = _stat_INODE64(local_100 + *(long *)(local_100 + 0x10),local_f8);
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000f21e1;
                }
                QArrayData::deallocate(local_100,1,8);
              }
LAB_1000f21e1:
              if (iVar4 == 0) {
                *(undefined8 *)(plVar6[2] + 0x40) = local_c8;
              }
              uVar9 = 0;
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
              }
              FUN_1000f7490(uVar9,&local_58,&local_68);
            }
            if (plVar6 != (long *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              lVar2 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar2 == 1) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
        else {
          cVar3 = QFileInfo::operator==(local_40,pQVar8);
          if (cVar3 == '\0') {
            FUN_1000f2010(param_1,&local_58);
          }
        }
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f2270;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1000f2270:
        lVar10 = lVar10 + 1;
        uVar7 = (ulong)*(int *)(local_50 + 8);
      } while (lVar10 < (long)((long)*(int *)(local_50 + 0xc) - uVar7));
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f22ea;
      }
      iVar4 = *(int *)(local_50 + 0xc);
      if (iVar4 != *(int *)(local_50 + 8)) {
        lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
        pQVar8 = (QFileInfo *)(local_50 + (long)iVar4 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(pQVar8);
          pQVar8 = pQVar8 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(local_50);
    }
  }
LAB_1000f22ea:
  QDir::~QDir(local_48);
  QFileInfo::~QFileInfo(local_40);
  return;
}

