
QVariant * FUN_1005a1290(QVariant *param_1,QString *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  code *pcVar3;
  int iVar4;
  QVariant local_a0;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  lVar1 = *param_3;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_UserPreferences_102274480,0xffffffff,1);
  if (iVar4 == 0) {
    pQVar2 = param_2[3].field0_0x0;
    pcVar3 = *(code **)(*(long *)pQVar2 + 0x40);
    local_48 = (QArrayData *)*param_4;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
    (*pcVar3)(&local_40,pQVar2,&local_48);
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
  else {
    lVar1 = *param_3;
    iVar4 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_DispPreferences_102274488,0xffffffff,1);
    if (iVar4 == 0) {
      pQVar2 = param_2[4].field0_0x0;
      pcVar3 = *(code **)(*(long *)pQVar2 + 0x40);
      local_60 = (QArrayData *)*param_4;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
      }
      (*pcVar3)(&local_58,pQVar2,&local_60);
      QVariant::operator=(param_1,&local_58);
      QVariant::~QVariant(&local_58);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    else {
      lVar1 = *param_3;
      iVar4 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                         PTR_s_ShortcutsStorage_102274490,0xffffffff,1);
      if (iVar4 == 0) {
        FUN_1005a0270(&local_70,param_2,param_4);
        QVariant::operator=(param_1,&local_70);
        QVariant::~QVariant(&local_70);
      }
      else {
        lVar1 = *param_3;
        iVar4 = QString::compare_helper
                          (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                           PTR_s_SendKeyToVmListStorage_102274498,0xffffffff,1);
        if (iVar4 == 0) {
          FUN_1005a0180(&local_80);
          QVariant::operator=(param_1,&local_80);
          QVariant::~QVariant(&local_80);
        }
        else {
          lVar1 = *param_3;
          iVar4 = QString::compare_helper
                            (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                             PTR_s_NetworkConfigStorage_1022744a0,0xffffffff,1);
          if (iVar4 == 0) {
            FUN_1005a1660(&local_90,param_2,param_4);
            QVariant::operator=(param_1,&local_90);
            QVariant::~QVariant(&local_90);
          }
          else {
            CMappingModel::getValue((QString *)&local_a0,param_2);
            QVariant::operator=(param_1,&local_a0);
            QVariant::~QVariant(&local_a0);
          }
        }
      }
    }
  }
  return param_1;
}

