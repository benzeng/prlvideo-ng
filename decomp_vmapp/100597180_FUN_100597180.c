
int FUN_100597180(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  bool bVar8;
  int local_8c;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QDir local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return -0x7ffdefcb;
  }
  QDir::QDir(local_50,param_2);
  cVar1 = QDir::isRelative();
  if (cVar1 == '\0') {
    cVar1 = QDir::exists();
    if (cVar1 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"New VM path (%s) not exists",local_60 + *(long *)(local_60 + 0x10)
                   );
      if (*(int *)local_60 == -1) {
        local_8c = -0x7ffffffd;
      }
      else {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) {
            local_8c = -0x7ffffffd;
            goto LAB_100597666;
          }
        }
        local_8c = -0x7ffffffd;
        QArrayData::deallocate(local_60,1,8);
      }
    }
    else {
      plVar3 = (long *)(param_1 + 0x70);
      if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
        local_8c = (int)plVar3;
        plVar4 = *(long **)(param_1 + 0x20);
        do {
          this = (QString *)(plVar4 + 7);
          cVar1 = QDir::isRelativePath(this);
          if (cVar1 == '\0') {
            QString::QString(&local_48,0x2f);
            QString::section(&local_68,this,&local_48,0xfffffffe,0xffffffff,0);
            if (*(int *)local_48.field0_0x0 != -1) {
              if (*(int *)local_48.field0_0x0 != 0) {
                LOCK();
                *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                local_31 = *(int *)local_48.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005972be;
              }
              QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
            }
LAB_1005972be:
            local_78.field0_0x0 = param_2->field0_0x0;
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_40,0xa02eac);
            QString::append(&local_78);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10059732e;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_10059732e:
            local_70.field0_0x0 = local_78.field0_0x0;
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_70);
            if (*(int *)local_78.field0_0x0 != -1) {
              if (*(int *)local_78.field0_0x0 != 0) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100597384;
              }
              QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
            }
LAB_100597384:
            cVar1 = QFile::exists(&local_70);
            uVar7 = 8;
            if (cVar1 != '\0') {
              QString::operator=(this,&local_70);
              plVar5 = (long *)0x0;
              if (*(long *)(*plVar3 + 8) != 0) {
                plVar5 = *(long **)(*(long *)(*plVar3 + 8) + 0x10);
              }
              iVar2 = (**(code **)(*plVar5 + 0x120))(plVar5,plVar4 + 6);
              uVar7 = 0;
              if (iVar2 < 0) {
                QString::toUtf8();
                FUN_1008e3970("","vdisk",0,"SetImageFileName(%s) failed with 0x%X",
                              local_80 + *(long *)(local_80 + 0x10));
                uVar7 = 1;
                local_8c = iVar2;
                if (*(int *)local_80 != -1) {
                  if (*(int *)local_80 != 0) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + -1;
                    local_31 = *(int *)local_80 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100597470;
                  }
                  QArrayData::deallocate(local_80,1,8);
                }
              }
            }
LAB_100597470:
            if (*(int *)local_70.field0_0x0 != -1) {
              if (*(int *)local_70.field0_0x0 != 0) {
                LOCK();
                *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                local_31 = *(int *)local_70.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005974a0;
              }
              QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
            }
LAB_1005974a0:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005974d4;
              }
              QArrayData::deallocate(local_68,2,8);
            }
LAB_1005974d4:
            if ((uVar7 | 8) != 8) goto LAB_100597666;
          }
          plVar5 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar4[2];
              bVar8 = (long *)*plVar6 != plVar4;
              plVar4 = plVar6;
            } while (bVar8);
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          plVar4 = plVar6;
        } while (plVar6 != (long *)(param_1 + 0x28));
      }
      plVar4 = (long *)0x0;
      if (*(long *)(*plVar3 + 8) != 0) {
        plVar4 = *(long **)(*(long *)(*plVar3 + 8) + 0x10);
      }
      local_8c = (**(code **)(*plVar4 + 0x18))();
      if (local_8c < 0) {
        FUN_1008e3970("","vdisk",0,"SaveDescriptor() failed with 0x%X");
      }
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"New VM path (%s) must be absolute",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 == -1) {
      local_8c = -0x7ffffffd;
    }
    else {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) {
          local_8c = -0x7ffffffd;
          goto LAB_100597666;
        }
      }
      local_8c = -0x7ffffffd;
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_100597666:
  QDir::~QDir(local_50);
  return local_8c;
}

