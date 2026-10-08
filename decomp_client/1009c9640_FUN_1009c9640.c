
undefined1 FUN_1009c9640(undefined8 *param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QMapNodeBase *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QFile local_50 [16];
  QString local_40;
  undefined1 local_38 [16];
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100d79030(local_38,param_1);
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)(pQVar1 + 4) == 0) {
    FUN_1009c8d90(&local_40);
  }
  else {
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    QString::fromUtf8_helper((char *)&local_28,0x1e38c8e);
    QString::append(&local_40);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009c96e0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
LAB_1009c96e0:
  QFile::QFile(local_50,&local_40);
  cVar3 = QFile::open(local_50,1);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    QIODevice::readAll();
    FUN_1009c8910(&local_60);
    if (*(int *)(local_60 + 4) == 0) {
      uVar4 = 0;
    }
    else {
      FUN_1009c7770(&local_68,&local_58,&local_60);
      if (*(int *)(local_68 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        FUN_1009c7de0(&local_70,&local_68);
        puVar2 = PTR_shared_null_1021e1288;
        if (*(int *)(local_70 + 4) == 0) {
          uVar4 = 0;
        }
        else {
          local_78 = (QArrayData *)PTR_shared_null_1021e1288;
          cVar3 = FUN_100d79080(local_38,&local_78);
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
          else {
            local_80 = (QArrayData *)puVar2;
            cVar3 = FUN_100d794b0(local_38,&local_80);
            if (cVar3 == '\0') {
              uVar4 = 0;
            }
            else {
              pQVar1 = (QArrayData *)*param_2;
              if (*(int *)(pQVar1 + 4) == 0) {
                FUN_1009c86f0(&local_88);
              }
              else {
                local_88 = pQVar1;
                if (1 < *(int *)pQVar1 + 1U) {
                  LOCK();
                  *(int *)pQVar1 = *(int *)pQVar1 + 1;
                  local_19 = *(int *)pQVar1 != 0;
                  UNLOCK();
                }
              }
              uVar4 = FUN_1009c8fc0(&local_70,&local_88,&local_78,&local_80);
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_19 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_19) goto LAB_1009c9828;
                }
                QArrayData::deallocate(local_88,1,8);
              }
            }
LAB_1009c9828:
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_19 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_19) goto LAB_1009c9858;
              }
              QArrayData::deallocate(local_80,2,8);
            }
          }
LAB_1009c9858:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_19 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1009c9888;
            }
            QArrayData::deallocate(local_78,2,8);
          }
        }
LAB_1009c9888:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_19 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1009c98d0;
          }
          if (*(long *)(local_70 + 0x10) != 0) {
            FUN_1009c9c30();
            QMapDataBase::freeTree(local_70,(int)*(undefined8 *)(local_70 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_70);
        }
      }
LAB_1009c98d0:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_19 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009c9900;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_1009c9900:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009c9930;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1009c9930:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009c9960;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1009c9960:
  QFile::~QFile(local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009c9999;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009c9999:
  FUN_100d79060(local_38);
  return uVar4;
}

