
undefined8 FUN_1004b0100(long param_1,QString *param_2)

{
  QString *this;
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  QString local_38;
  
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "Client_StopCoherence m_hActiveClient=%s state=%d startInProgress=%d stopInProgress=%d"
                  ,local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(param_1 + 0x88),
                  *(undefined1 *)(param_1 + 0x8c),*(undefined1 *)(param_1 + 0x8d));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        local_58[0] = CONCAT71(local_58[0]._1_7_,*(int *)local_68 != 0);
        if (*(int *)local_68 != 0) goto LAB_1004b01ae;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_1004b01ae:
  pQVar1 = param_2->field0_0x0;
  iVar3 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"",0xffffffff,1);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x8c) != '\0') || (*(char *)(param_1 + 0x8d) != '\0')) {
    local_58[0] = 0;
    FUN_1004b43e0(local_58,2,0,0);
    if (local_58[0] == 0) {
      return 0;
    }
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
    return 0;
  }
  this = (QString *)(param_1 + 0x120);
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    cVar2 = operator==(this,param_2);
    if (cVar2 != '\0') {
      lVar4 = FUN_1004b3f20(param_1 + 0x98);
      if (lVar4 != 0) {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "   **** Stop Coherence [send STOP_CHR] command to guest");
        }
        *(undefined1 *)(param_1 + 0x8d) = 1;
        FUN_10052acc0(param_1 + 0xf8);
        pvVar5 = operator_new(0x18);
        *(undefined4 *)((long)pvVar5 + 4) = 0;
        FUN_1004ae8a0(param_1,pvVar5,param_1 + 0x98,0);
        return 0;
      }
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      "   **** Abnormal Coherence stopping - no agent request");
      }
      *(undefined4 *)(param_1 + 0x88) = 1;
      local_58[0]._0_1_ = 0;
      local_58[0]._1_7_ = 0;
      local_58[1] = 0;
      local_60 = 0;
      FUN_1004b43e0(&local_60,0x17,local_58,0x10);
      if (local_60 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80));
      }
      if (*(char *)(param_1 + 0x151) == '\0') {
        local_70 = (QArrayData *)QString::fromAscii_helper("",0);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                        "UNAVAILABLE");
        }
        local_40 = 0;
        FUN_1004b43e0(&local_40,9,0,0);
        if (local_40 != 0) {
          FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_70);
        }
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_58[0]._0_1_ = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)(undefined1)local_58[0]) goto LAB_1004b0446;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1004b0446:
      *(undefined1 *)(param_1 + 0x150) = 0;
      QString::fromUtf8_helper((char *)&local_38,0xa320a0);
      QString::operator=(this,&local_38);
      if (*(int *)local_38.field0_0x0 == -1) {
        return 0;
      }
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return 0;
        }
        local_58[0]._0_1_ = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      return 0;
    }
    uVar6 = 5;
  }
  else {
    uVar6 = 4;
  }
  local_58[0] = 0;
  FUN_1004b43e0(local_58,uVar6,0,0);
  if (local_58[0] != 0) {
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),this);
  }
  return 0;
}

