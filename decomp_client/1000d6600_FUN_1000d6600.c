
void FUN_1000d6600(long param_1,int *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  QArrayData *pQVar12;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if ((param_2[1] == *(int *)(param_1 + 0x21c)) && (*param_2 == *(int *)(param_1 + 0x218))) {
    uVar6 = FUN_100152280();
    lVar7 = FUN_1001548f0(uVar6,param_1 + 0x10);
    if (lVar7 == 0) goto LAB_1000d6a6e;
    FUN_10018d830(&local_50,lVar7);
    FUN_10018d860(&local_58,lVar7);
    FUN_1000d81b0(&local_48,&local_50,&local_58);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d66d0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1000d66d0:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d6700;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000d6700:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d67cf;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  else {
    QMutex::lock();
    iVar11 = FUN_1000cf550(param_1,param_2);
    bVar1 = true;
    if (-1 < iVar11) {
      puVar8 = *(uint **)(param_1 + 0x58);
      if (1 < *puVar8) {
        FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar8[1]);
        puVar8 = *(uint **)(param_1 + 0x58);
      }
      bVar1 = false;
      QString::operator=(&local_40,
                         (QString *)
                         (*(long *)(puVar8 + ((long)iVar11 + (long)(int)puVar8[2]) * 2 + 4) + 0x10))
      ;
    }
    QMutex::unlock();
    if (bVar1) goto LAB_1000d6a6e;
  }
LAB_1000d67cf:
  if (param_3 == 2) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar2 = FUN_100051ba0(param_1 + 0x10,&local_40,&local_68);
    iVar11 = 1;
    if (cVar2 != '\0') {
      cVar2 = QFile::exists(&local_68);
      iVar11 = 6;
      if (cVar2 != '\0') {
        QFile::remove(&local_68);
        QString::toUtf8();
        iVar4 = _utimes((char *)(local_70 + *(long *)(local_70 + 0x10)),(timeval *)0x0);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d6877;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_1000d6877:
        if (iVar4 != 0) {
          QString::toUtf8();
          pQVar12 = local_78 + *(long *)(local_78 + 0x10);
          piVar9 = ___error();
          iVar4 = *piVar9;
          piVar9 = ___error();
          pcVar10 = _strerror(*piVar9);
          FUN_100df99c0("SGAC","prl_client_app",0,
                        "Error: utimes(\"%s\", 0) failed, errno=%i, strerror=\"%s\"",pQVar12,iVar4,
                        pcVar10);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d6903;
            }
            QArrayData::deallocate(local_78,1,8);
          }
        }
      }
    }
LAB_1000d6903:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d6933;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1000d6933:
    uVar5 = 1;
  }
  else {
    if (param_3 != 1) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",1,"Invalid launchpad state %d",param_3);
      }
      goto LAB_1000d6a6e;
    }
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    cVar2 = FUN_100051ba0(param_1 + 0x10,&local_40,&local_60);
    iVar11 = 1;
    if (cVar2 != '\0') {
      FUN_100051fc0(param_1 + 0x10,param_1 + 0x1a8,param_1 + 0x20);
      bVar3 = FUN_100da3190(&local_40,&local_60);
      iVar11 = (uint)bVar3 * 5 + 1;
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d69d6;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1000d69d6:
    uVar5 = 2;
  }
  if (iVar11 == 6) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    local_f8 = (ulong)uVar5;
    FUN_1000c4970(param_2,0x82,&local_f8,0x80);
  }
LAB_1000d6a6e:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

