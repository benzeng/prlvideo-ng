
void FUN_10034c9d0(long param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QDateTime local_48;
  QDateTime local_40;
  undefined1 local_31;
  
  cVar3 = FUN_10034c560();
  bVar2 = true;
  if (cVar3 != '\0') {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar5 = FUN_100319390(uVar5);
    uVar4 = FUN_10018a9d0(uVar5);
    bVar2 = (uVar4 & 0xfffffffe) != 0x30000004 && uVar4 != 0x3000000c;
  }
  lVar6 = FUN_10098ae20();
  iVar1 = *(int *)(lVar6 + 0x14);
  QDateTime::QDateTime(&local_40,(QDateTime *)(*(long *)(param_1 + 0x28) + 0x10));
  QDateTime::currentDateTime();
  lVar6 = QDateTime::secsTo(&local_40);
  QDateTime::~QDateTime(&local_48);
  iVar7 = (int)(SUB168(SEXT816(lVar6) * SEXT816(0x48d159e26af37c05),8) >> 10) -
          (SUB164(SEXT816(lVar6) * SEXT816(0x48d159e26af37c05),0xc) >> 0x1f);
  QDateTime::~QDateTime(&local_40);
  if ((0 < DAT_10230ffd0) && (0 < iVar7)) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100319410(&local_58,uVar5);
    QString::toUtf8();
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",1,"\'%s\'\' maintenance is %d hr late",
                  local_50 + *(long *)(local_50 + 0x10),iVar7);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10034cb3b;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10034cb3b:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10034cb76;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_10034cb76:
  if (((bool)(iVar1 == 1 | bVar2)) || (0 < iVar7)) {
    if ((bool)(bVar2 | 0 < iVar7)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
    FUN_10034cdb0(param_1,uVar5);
    goto LAB_10034cc8d;
  }
  if (1 < DAT_10230ffd0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100319410(&local_68,uVar5);
    QString::toUtf8();
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",2,"Starting scheduled maintenance for \'%s\'",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10034cc20;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10034cc20:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10034cc50;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10034cc50:
  FUN_10034b700(param_1,1);
  FUN_10034c8b0(param_1);
LAB_10034cc8d:
  FUN_100349e20(param_1);
  return;
}

