
void FUN_1009dacd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","ProblemReportUI",2,"Problem report %s was successfully delivered to Parallels"
                  ,local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009dad57;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1009dad57:
  FUN_1009db040();
  QCoreApplication::applicationName();
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Your_problem_report_has_been_sen_10227e320);
  QString::toUpper();
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Thank_you_for_sending_a_report_t_10227e328);
  FUN_100a089f0(param_3,&local_38,&local_40,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009dae15;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009dae15:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009dae45;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009dae45:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009dae75;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009dae75:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009daea5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009daea5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009daed5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009daed5:
  CProblemReportDelegate::closeReportDialog();
  return;
}

