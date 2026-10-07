
void FUN_1004ad650(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_70;
  undefined4 local_68 [4];
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "COHERENCE STOPPED: m_bWasSuspendedFromCoherence=%d startInProgress=%d stopInProgress=%d"
                  ,*(undefined1 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x8c),
                  *(undefined1 *)(param_1 + 0x8d));
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  FUN_1004b6f20(*(undefined8 *)(param_1 + 0xf0));
  if (*(char *)(param_1 + 0x128) == '\0') {
    lVar1 = *(long *)(param_1 + 0x120);
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"",0xffffffff,1);
    if (iVar2 == 0) goto LAB_1004ad967;
    if ((param_2 == 0) || (*(uint *)(param_2 + 8) < 0x10)) {
      local_68[0] = 1;
      if ((*(char *)(param_1 + 0x150) == '\0') &&
         (local_68[0] = 0, *(char *)(param_1 + 0x153) != '\0')) {
        local_68[0] = 4;
      }
    }
    else {
      FUN_1002a5990(param_2,0,local_68,0x10);
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_40 = 0;
    local_38 = local_68[0];
    FUN_1004b43e0(&local_40,0x17,&local_38,0x10);
    if (local_40 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80));
    }
    if (*(char *)(param_1 + 0x151) == '\0') {
      local_70 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",
                      "UNAVAILABLE");
      }
      local_28 = 0;
      FUN_1004b43e0(&local_28,9,0,0);
      if (local_28 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),&local_70);
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          local_38 = CONCAT31(local_38._1_3_,*(int *)local_70 != 0);
          if (*(int *)local_70 != 0) goto LAB_1004ad907;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_1004ad907:
    *(undefined1 *)(param_1 + 0x153) = 0;
    *(undefined1 *)(param_1 + 0x150) = 0;
    QString::fromUtf8_helper((char *)&local_50,0xa320a0);
    QString::operator=((QString *)(param_1 + 0x120),&local_50);
    if (*(int *)local_50.field0_0x0 == -1) goto LAB_1004ad967;
    local_48.field0_0x0 = local_50.field0_0x0;
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      bVar3 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,bVar3);
      goto joined_r0x0001004ad952;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 0;
    iVar2 = *(int *)(param_1 + 0x88);
    local_58 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_1004ad350(param_1,iVar2 != 0,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_1004ad734;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1004ad734:
    QString::fromUtf8_helper((char *)&local_48,0xa320a0);
    QString::operator=((QString *)(param_1 + 0x120),&local_48);
    if (*(int *)local_48.field0_0x0 == -1) goto LAB_1004ad967;
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      bVar3 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,bVar3);
joined_r0x0001004ad952:
      if (bVar3) goto LAB_1004ad967;
    }
  }
  QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
LAB_1004ad967:
  FUN_10052acc0(param_1 + 0xf8);
  *(undefined2 *)(param_1 + 0x8c) = 0;
  return;
}

