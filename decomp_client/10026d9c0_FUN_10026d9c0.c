
void FUN_10026d9c0(long *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  CSdkRequest *pCVar4;
  QString *pQVar5;
  long local_98;
  long local_90;
  QString local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  if (param_1[3] == 0) {
LAB_10026db3c:
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm",
                  "Tasks/CTaskCloneVm.cpp",0x12a,"onCloneCompleted");
  }
  else {
    if (((((*(int *)(param_1[3] + 4) != 0) && (param_1[4] != 0)) &&
         (lVar2 = FUN_10018d490(), lVar2 != 0)) &&
        ((param_1[7] != 0 && (*(int *)(param_1[7] + 4) != 0)))) && (param_1[8] != 0)) {
      if (((-1 < param_2) || (param_2 == -0x7ffffef9)) || (param_2 == -0x7ffffdaf)) {
        if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
          QWidget::close();
        }
        if (-1 < param_2) {
          CSdkRequest::getResultParam((uint)&local_90);
          FUN_10018d4b0(&local_88,&local_90);
          pQVar5 = (QString *)(param_1 + 0xc);
          QString::operator=(pQVar5,&local_88);
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_21 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_10026dadf;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
LAB_10026dadf:
          if (local_90 != 0) {
            _PrlHandle_Free();
          }
          if (*(int *)(pQVar5->field0_0x0 + 4) != 0) {
            uVar3 = FUN_100152280();
            lVar2 = FUN_1001548f0(uVar3,pQVar5);
            if (lVar2 != 0) {
              FUN_10026dff0(param_1,lVar2);
              return;
            }
            lVar2 = 0;
            if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
              lVar2 = param_1[4];
            }
            uVar3 = FUN_10018d490(lVar2);
            QObject::connect(&local_98,uVar3,"2afterVmAdded( const CVmWrap& )",param_1,
                             "1onVmAdded( const CVmWrap& )",0x80);
            if (local_98 == 0) {
              QMetaObject::Connection::~Connection((Connection *)&local_98);
            }
            else {
              cVar1 = QMetaObject::Connection::isConnected_helper();
              QMetaObject::Connection::~Connection((Connection *)&local_98);
              if (cVar1 != '\0') {
                return;
              }
            }
            FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","bRes",
                          "Tasks/CTaskCloneVm.cpp",0x14f,"onCloneCompleted");
            return;
          }
          (**(code **)(*param_1 + 0xb0))(param_1,param_2);
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
        goto LAB_10026dc4b;
      }
      local_68 = (QArrayData *)QString::fromAscii_helper("1onCloneRequestErrorMessageClosed()",0x23)
      ;
      local_70 = 0x80000000;
      local_80._8_8_ = (QObject *)0x0;
      FUN_100a1c600(local_60,param_1,&local_68,local_80 + 8);
      QVariant::~QVariant((QVariant *)(local_80 + 8));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10026dd68;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10026dd68:
      pCVar4 = (CSdkRequest *)CMessageManager::instance();
      pQVar5 = (QString *)0x0;
      if ((param_1[7] != 0) && (pQVar5 = (QString *)0x0, *(int *)(param_1[7] + 4) != 0)) {
        pQVar5 = (QString *)param_1[8];
      }
      lVar2 = 0;
      if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar2 = param_1[4];
      }
      FUN_100188480(local_80,lVar2);
      CMessageManager::showMessageBoxForRequest(pCVar4,pQVar5,(CSlotInfo *)local_80);
      if (*(int *)local_80._0_8_ != -1) {
        if (*(int *)local_80._0_8_ != 0) {
          LOCK();
          *(int *)local_80._0_8_ = *(int *)local_80._0_8_ + -1;
          local_21 = *(int *)local_80._0_8_ != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10026ddec;
        }
        QArrayData::deallocate((QArrayData *)local_80._0_8_,2,8);
      }
LAB_10026ddec:
      QVariant::~QVariant(local_40);
      if (local_60[0] != (int *)0x0) {
        LOCK();
        *local_60[0] = *local_60[0] + -1;
        local_21 = *local_60[0] != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
          operator_delete(local_60[0]);
        }
      }
      return;
    }
    if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0))
    goto LAB_10026db3c;
  }
  if (((param_1[7] == 0) || (*(int *)(param_1[7] + 4) == 0)) || (param_1[8] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pRequest",
                  "Tasks/CTaskCloneVm.cpp",299,"onCloneCompleted");
  }
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  lVar2 = FUN_10018d490(lVar2);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm->server()",
                  "Tasks/CTaskCloneVm.cpp",300,"onCloneCompleted");
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  param_2 = -0x7ffffff7;
LAB_10026dc4b:
                    /* WARNING: Could not recover jumptable at 0x00010026dc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

