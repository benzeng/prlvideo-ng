
void FUN_1009daae0(undefined8 param_1,int param_2,undefined8 param_3)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 != 0x3b24) {
    FUN_100df99c0("","ProblemReportUI",0,"Unknown message id %x",param_2);
    return;
  }
  QCoreApplication::applicationName();
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Unable_to_send_the_problem_repor_10227e310);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_check_your_network_settin_10227e318);
  FUN_100a08530(param_3,&local_28,&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009dab8d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009dab8d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009dabbd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009dabbd:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

