
void FUN_100234db0(QObject *param_1)

{
  bool bVar1;
  QObject *pQVar2;
  char *pcVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (DAT_10230ffd0 < 3) goto LAB_100234ea5;
  pcVar3 = "unknown";
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    bVar1 = false;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    FUN_1003193e0(&local_30);
    QString::toLocal8Bit();
    pcVar3 = (char *)(local_28 + *(long *)(local_28 + 0x10));
    bVar1 = true;
  }
  FUN_100df99c0("","prl_client_app",3," Coherence in VM [%s] has started!",pcVar3);
  if (!bVar1) goto LAB_100234ea5;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100234e75;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100234e75:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100234ea5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100234ea5:
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    pQVar2 = (QObject *)FUN_100319c00();
    QObject::disconnect(pQVar2,"2coherenceAboutToStart()",param_1,"1onCoherenceAboutToStart()");
    QObject::disconnect(pQVar2,"2coherenceStarted()",param_1,"1onCoherenceStarted()");
    QObject::disconnect(pQVar2,"2coherenceStartFailed( unsigned int )",param_1,
                        "1onCoherenceStartFailed( unsigned int )");
  }
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}

