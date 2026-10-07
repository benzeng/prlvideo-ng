
undefined8 FUN_1004acf90(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (*(short *)(param_2 + 0x14) == 0x10) {
    lVar4 = FUN_1002a6010(param_2);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(lVar4 + 4);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(lVar4 + 8);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar4 + 0xc);
  }
  *(long *)(param_1 + 0xd8) = param_2;
  if (1 < DAT_1011b55f8) {
    uVar1 = *(undefined1 *)(param_1 + 0x130);
    uVar2 = *(undefined1 *)(param_1 + 0x128);
    uVar3 = *(undefined1 *)(param_1 + 0x151);
    QString::toUtf8();
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "m_SnapshotState %d m_bWasSuspendedFromCoherence %d m_DynResEnabled %d m_hActiveClient %s"
                  ,uVar1,uVar2,uVar3,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004ad08d;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1004ad08d:
  if (*(char *)(param_1 + 0x130) != '\0') goto LAB_1004ad218;
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (*(char *)(param_1 + 0x128) == '\0') {
    if (*(char *)(param_1 + 0x151) != '\0') {
      local_58 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                      "AVAILABLE");
      }
      local_48 = 0;
      FUN_1004b43e0(&local_48,8,param_1 + 0x140,0x10);
      if (local_48 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_58);
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ad1c6;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
  }
  else {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "m_bWasSuspendedFromCoherence == TRUE ==> Initiate switching Coherence Mode off"
                   );
    }
    FUN_10052acc0(param_1 + 0xf8);
    pvVar5 = operator_new(0x18);
    *(undefined4 *)((long)pvVar5 + 4) = 0;
    FUN_1004ae8a0(param_1,pvVar5,param_1 + 0x98,0);
  }
LAB_1004ad1c6:
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x120),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ad218;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004ad218:
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  QMutex::unlock();
  return 0xffffffff;
}

