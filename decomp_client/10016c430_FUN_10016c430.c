
void FUN_10016c430(QObject *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  CTaskCreateProblemReport *this;
  void *pvVar6;
  QString local_1e8;
  QString local_1e0;
  QArrayData *local_1d8;
  CVmConfiguration local_1d0 [16];
  undefined1 local_1c0 [8];
  int local_1b8;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  long local_c0 [2];
  QDataStream local_b0 [24];
  undefined4 local_98;
  QArrayData *local_90;
  long local_88;
  QString local_80;
  QArrayData *local_78;
  long local_70;
  long local_68;
  QString local_60;
  long *local_58;
  int local_4c;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar4 = _PrlEvent_GetParamByName(*param_2,"vm_problem_report",&local_40);
  puVar2 = PTR_shared_null_1021e1288;
  if (iVar4 < 0) {
    uVar5 = FUN_100dddcf0(iVar4);
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to extract report problem parameter with error %.8X \'%s\'",iVar4,uVar5);
    goto LAB_10016cb38;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_4c = 0;
  iVar4 = _PrlEvtPrm_GetBuffer(local_40,0,&local_4c);
  if (iVar4 < 0) {
    uVar5 = FUN_100dddcf0(iVar4);
    FUN_100df99c0("","prl_client_app",0,"Failed to get buffer size %.8X \'%s\'",iVar4,uVar5);
  }
  else if (local_4c == 0) {
    FUN_100df99c0("","prl_client_app",0,"Empty problem report received");
  }
  else {
    QByteArray::resize((int)&local_48);
    lVar3 = local_40;
    if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f)
      ;
    }
    iVar4 = _PrlEvtPrm_GetBuffer(lVar3,local_48 + *(long *)(local_48 + 0x10),&local_4c);
    if (iVar4 < 0) {
      uVar5 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,"Failed to extract buffer data %.8X \'%s\'",iVar4,uVar5);
    }
    else {
      local_58 = (long *)0x0;
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      local_70 = *param_2;
      if (local_70 != 0) {
        _PrlHandle_AddRef();
      }
      local_78 = (QArrayData *)QString::fromAscii_helper("vm_problem_report_dir_path",0x1a);
      SdkUtils::getParamByName(&local_68,&local_70,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016c56b;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10016c56b:
      if (local_70 != 0) {
        _PrlHandle_Free();
      }
      local_88 = local_68;
      if (local_68 != 0) {
        _PrlHandle_AddRef();
      }
      SdkUtils::getParamStringValue(&local_80,&local_88,0);
      QString::operator=(&local_60,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016c5d7;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_10016c5d7:
      if (local_88 != 0) {
        _PrlHandle_Free();
      }
      FUN_1009e6230(2,&local_58,&local_48);
      if (local_58 == (long *)0x0) {
        local_90 = (QArrayData *)puVar2;
        QDataStream::QDataStream(local_b0,(QByteArray *)&local_48);
        local_98 = 7;
        FUN_100869760(local_c0,&local_90);
        (**(code **)(local_c0[0] + 0x18))(local_c0,local_b0);
        if (*(int *)(local_90 + 4) == 0) {
          bVar1 = true;
          FUN_100df99c0("","prl_client_app",0);
        }
        else {
          local_c8 = (QArrayData *)puVar2;
          local_d0 = (QArrayData *)puVar2;
          FUN_1009e6230(2,&local_58,&local_c8);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016c6c6;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_10016c6c6:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016c6fc;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
LAB_10016c6fc:
          if (local_58 == (long *)0x0) {
            bVar1 = true;
            FUN_100df99c0("","prl_client_app",0);
          }
          else {
            iVar4 = FUN_1009f5ff0(local_58,&local_90);
            bVar1 = false;
            if (iVar4 < 0) {
              FUN_100df99c0("","prl_client_app",0);
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
              local_58 = (long *)0x0;
              bVar1 = true;
            }
          }
        }
        QDataStream::~QDataStream(local_b0);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016c8a7;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10016c8a7:
        if (!bVar1) goto LAB_10016c8af;
      }
      else {
LAB_10016c8af:
        local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        CVmConfiguration::CVmConfiguration(local_1d0);
        FUN_1009f2fb0(&local_1d8,local_58);
        CBaseNode::fromString
                  ((QTypedArrayData<unsigned_short> *)local_1c0,SUB81(&local_1d8,0),(QString *)0x0,
                   (int *)0x0,(int *)0x0);
        if (*(int *)local_1d8 != -1) {
          if (*(int *)local_1d8 != 0) {
            LOCK();
            *(int *)local_1d8 = *(int *)local_1d8 + -1;
            local_31 = *(int *)local_1d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016c925;
          }
          QArrayData::deallocate(local_1d8,2,8);
        }
LAB_10016c925:
        if ((-1 < local_1b8) &&
           (((iVar4 = CProblemReport::getReportType(), iVar4 == 1 ||
             (iVar4 = CProblemReport::getReportType(), iVar4 == 2)) ||
            (iVar4 = CProblemReport::getReportType(), iVar4 == 0x10)))) {
          CVmConfiguration::getVmIdentification();
          CVmIdentification::getVmUuid();
          QString::operator=(&local_d8,&local_1e0);
          if (*(int *)local_1e0.field0_0x0 != -1) {
            if (*(int *)local_1e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
              local_31 = *(int *)local_1e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10016c9c0;
            }
            QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
          }
        }
LAB_10016c9c0:
        this = operator_new(0x98);
        (**(code **)(*local_58 + 0x288))(&local_1e8);
        if (*(int *)(local_d8.field0_0x0 + 4) != 0) {
          param_1 = (QObject *)FUN_10015cb20(param_1,&local_d8);
        }
        CTaskCreateProblemReport::CTaskCreateProblemReport(this,&local_1e8,param_1);
        if (*(int *)local_1e8.field0_0x0 != -1) {
          if (*(int *)local_1e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
            local_31 = *(int *)local_1e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016ca4b;
          }
          QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
        }
LAB_10016ca4b:
        pvVar6 = operator_new(0x18);
        FUN_10019c1a0(pvVar6,this);
        CTaskCreateProblemReport::setDelegate((CProblemReportDelegate *)this);
        CAbstractTask::execute();
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        CVmConfiguration::~CVmConfiguration(local_1d0);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016caca;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
      }
LAB_10016caca:
      if (local_68 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016cb08;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
  }
LAB_10016cb08:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016cb38;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10016cb38:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return;
}

