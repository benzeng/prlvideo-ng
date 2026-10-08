
QVariant * FUN_1003e4e60(QVariant *param_1,QString *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  lVar1 = *param_3;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_VmConfig_1021f1e00,0xffffffff,1);
  if (iVar4 == 0) {
    lVar1 = *param_4;
    iVar4 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_Settings_Startup_BootingOrder_Bo_102273e38,0xffffffff,1);
    if (iVar4 != 0) {
      plVar2 = *(long **)(param_2[3].field0_0x0 + 0x20);
      pcVar3 = *(code **)(*plVar2 + 0x80);
      local_48 = (QArrayData *)*param_4;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
      }
      (*pcVar3)(&local_40,plVar2,&local_48);
      QVariant::operator=(param_1,&local_40);
      QVariant::~QVariant(&local_40);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
  }
  else {
    lVar1 = *param_3;
    iVar4 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_TimeMachine_1021f1e08,0xffffffff,1);
    if (iVar4 == 0) {
      FUN_1003e4c70(&local_58,param_2[3].field0_0x0,param_4);
      QVariant::operator=(param_1,&local_58);
      QVariant::~QVariant(&local_58);
    }
    else {
      CMappingModel::getValue((QString *)&local_68,param_2);
      QVariant::operator=(param_1,&local_68);
      QVariant::~QVariant(&local_68);
    }
  }
  return param_1;
}

