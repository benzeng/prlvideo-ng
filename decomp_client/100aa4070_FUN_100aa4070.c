
long * FUN_100aa4070(long *param_1,long param_2,long *param_3,char param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((*param_3 != 0) && (*(long *)(*param_3 + 0x10) != 0)) {
    QMutex::lock();
    if (*(int *)(param_2 + 0xf0) == 3) {
      if ((*(char *)(param_2 + 0x129) == '\0') || (param_4 != '\0')) {
        local_70 = (long *)0x0;
        uVar5 = 0;
        if (*(long *)(param_2 + 0x18) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
        }
        uVar4 = 0;
        if (*param_3 != 0) {
          uVar4 = *(undefined8 *)(*param_3 + 0x10);
        }
        cVar3 = FUN_100a70ae0(uVar5,param_2 + 200,uVar4,param_3,&local_70,param_4);
        if (cVar3 == '\0') {
          if (local_70 == (long *)0x0) {
            local_80 = *(QArrayData **)(param_2 + 0x10);
            if (1 < *(int *)local_80 + 1U) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + 1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_100df99c0("","IOCommunication",0,"%sError: can\'t allocate new job!",
                          local_78 + *(long *)(local_78 + 0x10));
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100aa44d0;
              }
              QArrayData::deallocate(local_78,1,8);
            }
LAB_100aa44d0:
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100aa42f6;
              }
              QArrayData::deallocate(local_80,2,8);
            }
            goto LAB_100aa42f6;
          }
          uVar5 = 0;
          if (*local_70 != 0) {
            uVar5 = *(undefined8 *)(*local_70 + 0x10);
          }
          FUN_100a6fd00(uVar5,7);
          uVar5 = 0;
          if (*local_70 != 0) {
            uVar5 = *(undefined8 *)(*local_70 + 0x10);
          }
          local_88 = (QArrayData *)PTR_shared_null_1021e1288;
          local_90 = (long *)0x0;
          FUN_100a6fd70(uVar5,7,&local_88,&local_90);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aa4432;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
        else {
          FUN_100aa2290(param_2,local_70 + 1);
          QWaitCondition::wakeOne();
        }
LAB_100aa4432:
        lVar2 = *local_70;
        *param_1 = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        goto LAB_100aa42fd;
      }
      local_68 = *(QArrayData **)(param_2 + 0x10);
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sError: write thread is detaching! It  can be only stopped!",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa4155;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100aa4155:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa42f6;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
    else {
      local_58 = *(QArrayData **)(param_2 + 0x10);
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sError: write thread is not started!",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa42c6;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100aa42c6:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa42f6;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_100aa42f6:
    *param_1 = 0;
LAB_100aa42fd:
    QMutex::unlock();
    return param_1;
  }
  local_48 = *(QArrayData **)(param_2 + 0x10);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,"%sError: package is invalid!",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aa420e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100aa420e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100aa423e;
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100aa423e:
  *param_1 = 0;
  return param_1;
}

