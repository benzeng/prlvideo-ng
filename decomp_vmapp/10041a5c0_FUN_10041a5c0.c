
undefined4 FUN_10041a5c0(long param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar4 = 0;
  if (*(int *)(*param_2 + 4) == 0) goto LAB_10041a800;
  QByteArray::right((int)&local_40);
  cVar2 = QByteArray::startsWith((char *)&local_40);
  if (cVar2 == '\0') {
    cVar2 = QByteArray::startsWith((char *)&local_40);
    if (cVar2 == '\0') {
      cVar2 = QByteArray::startsWith((char *)&local_40);
      if (cVar2 == '\0') {
        cVar2 = QByteArray::startsWith((char *)&local_40);
        if (cVar2 == '\0') {
          cVar2 = QByteArray::startsWith((char *)&local_40);
          if (cVar2 == '\0') {
            cVar2 = QByteArray::startsWith((char *)&local_40);
            if (cVar2 == '\0') {
              cVar2 = QByteArray::startsWith((char *)&local_40);
              if (cVar2 == '\0') {
                cVar2 = QByteArray::startsWith((char *)&local_40);
                if (cVar2 == '\0') {
                  cVar2 = QByteArray::startsWith((char *)&local_40);
                  if (cVar2 == '\0') {
                    cVar2 = QByteArray::startsWith((char *)&local_40);
                    if (cVar2 == '\0') {
                      cVar2 = QByteArray::startsWith((char *)&local_40);
                      if (cVar2 == '\0') {
                        cVar2 = QByteArray::startsWith((char *)&local_40);
                        uVar4 = 1;
                        if (cVar2 == '\0') {
                          FUN_10041a500(param_1);
                        }
                        else {
                          FUN_100416cc0(param_1);
                        }
                      }
                      else {
                        QByteArray::QByteArray
                                  ((QByteArray *)&local_70,"PacketSize=fff;qXfer:features:read+",-1)
                        ;
                        FUN_100419170(param_1,&local_70);
                        uVar4 = 1;
                        if (*(int *)local_70 != -1) {
                          if (*(int *)local_70 != 0) {
                            LOCK();
                            *(int *)local_70 = *(int *)local_70 + -1;
                            local_21 = *(int *)local_70 != 0;
                            UNLOCK();
                            if ((bool)local_21) goto LAB_10041a7d0;
                          }
                          QArrayData::deallocate(local_70,1,8);
                        }
                      }
                    }
                    else {
                      uVar4 = 1;
                      FUN_100416cc0(param_1);
                    }
                  }
                  else {
                    QByteArray::QByteArray((QByteArray *)&local_68,"num:4;",-1);
                    FUN_100419170(param_1,&local_68);
                    uVar4 = 1;
                    if (*(int *)local_68 != -1) {
                      if (*(int *)local_68 != 0) {
                        LOCK();
                        *(int *)local_68 = *(int *)local_68 + -1;
                        local_21 = *(int *)local_68 != 0;
                        UNLOCK();
                        if ((bool)local_21) goto LAB_10041a7d0;
                      }
                      QArrayData::deallocate(local_68,1,8);
                    }
                  }
                }
                else {
                  QByteArray::QByteArray
                            ((QByteArray *)&local_60,
                             "cputype:16777223;cpusubtype:3;ostype:darwin;vendor:apple;endian:little;ptrsize:8"
                             ,-1);
                  FUN_100419170(param_1,&local_60);
                  uVar4 = 1;
                  if (*(int *)local_60 != -1) {
                    if (*(int *)local_60 != 0) {
                      LOCK();
                      *(int *)local_60 = *(int *)local_60 + -1;
                      local_21 = *(int *)local_60 != 0;
                      UNLOCK();
                      if ((bool)local_21) goto LAB_10041a7d0;
                    }
                    QArrayData::deallocate(local_60,1,8);
                  }
                }
              }
              else {
                FUN_100416dc0(param_1);
                iVar3 = *(int *)(param_1 + 0x98);
                if (iVar3 == 0) {
                  uVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
                  iVar3 = *(int *)(param_1 + 0x18 + (ulong)uVar5 * 4);
                }
                if (iVar3 == 3) {
                  QByteArray::QByteArray
                            ((QByteArray *)&local_50,
                             "pid:1;cputype:16777223;cpusubtype:3;ostype:darwin;vendor:apple;ptrsize:8"
                             ,-1);
                  FUN_100419170(param_1,&local_50);
                  uVar4 = 1;
                  if (*(int *)local_50 != -1) {
                    if (*(int *)local_50 != 0) {
                      LOCK();
                      *(int *)local_50 = *(int *)local_50 + -1;
                      local_21 = *(int *)local_50 != 0;
                      UNLOCK();
                      if ((bool)local_21) goto LAB_10041a7d0;
                    }
                    QArrayData::deallocate(local_50,1,8);
                  }
                }
                else {
                  QByteArray::QByteArray
                            ((QByteArray *)&local_58,
                             "pid:1;cputype:7;cpusubtype:3;ostype:darwin;vendor:apple;ptrsize:4",-1)
                  ;
                  FUN_100419170(param_1,&local_58);
                  uVar4 = 1;
                  if (*(int *)local_58 != -1) {
                    if (*(int *)local_58 != 0) {
                      LOCK();
                      *(int *)local_58 = *(int *)local_58 + -1;
                      local_21 = *(int *)local_58 != 0;
                      UNLOCK();
                      if ((bool)local_21) goto LAB_10041a7d0;
                    }
                    QArrayData::deallocate(local_58,1,8);
                  }
                }
              }
            }
            else {
              uVar6 = QByteArray::remove((int)&local_40,0);
              uVar4 = 1;
              FUN_10041a280(param_1,uVar6);
            }
          }
          else {
            uVar6 = QByteArray::remove((int)&local_40,0);
            uVar4 = FUN_100419440(param_1,uVar6);
          }
        }
        else {
          uVar6 = QByteArray::remove((int)&local_40,0);
          uVar4 = FUN_10041ad50(param_1,uVar6);
        }
      }
      else {
        iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
        local_48 = (QArrayData *)puVar1;
        QString::sprintf((char *)&local_48,"QC%u",(ulong)(iVar3 + 1));
        QByteArray::operator=((QByteArray *)&local_38,"");
        QString::toUtf8();
        QByteArray::append((QByteArray *)&local_38);
        if (*(int *)local_30 != -1) {
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            local_21 = *(int *)local_30 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10041a6e0;
          }
          QArrayData::deallocate(local_30,1,8);
        }
LAB_10041a6e0:
        FUN_100419170(param_1,&local_38);
        uVar4 = 1;
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_21 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10041a7d0;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
    }
    else {
      uVar4 = 1;
      FUN_100419230(param_1);
    }
  }
  else {
    uVar4 = 1;
    FUN_100418f80(param_1);
  }
LAB_10041a7d0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10041a800;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10041a800:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar4;
}

