
void FUN_100321630(long param_1,int param_2,byte param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  CVmWin7Look *pCVar3;
  QString *pQVar4;
  QStringList *pQVar5;
  undefined8 uVar6;
  Data_conflict local_148;
  undefined4 local_140;
  QArrayData *local_138;
  int *local_130 [4];
  QVariant local_110 [2];
  undefined1 local_f8 [207];
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  if (param_2 != 0) {
    return;
  }
  FUN_10018c2b0();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  pCVar3 = (CVmWin7Look *)CVmTools::getWin7Look();
  CVmWin7Look::CVmWin7Look((CVmWin7Look *)(local_f8 + 0x18),pCVar3);
  bVar1 = CVmWin7Look::isEnabled();
  if ((bVar1 ^ param_3) != 1) goto LAB_1003218ed;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  if (iVar2 != 0x30000004) goto LAB_1003218ed;
  if ((param_3 != 0) || (param_4 != '\0')) {
    CVmWin7Look::setEnabled((bool)((char)local_f8 + '\x18'));
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1001986b0(uVar6,local_f8 + 0x18);
    goto LAB_1003218ed;
  }
  iVar2 = CMessageManager::instance();
  pQVar4 = (QString *)CSearchParentHelper::instance();
  local_f8._16_8_ = *(undefined8 *)(param_1 + 0x28);
  if (1 < *(int *)local_f8._16_8_ + 1U) {
    LOCK();
    *(int *)local_f8._16_8_ = *(int *)local_f8._16_8_ + 1;
    local_29 = *(int *)local_f8._16_8_ != 0;
    UNLOCK();
  }
  pQVar5 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar4,(bool)((char)local_f8 + '\x10'),(QWidget *)0x0);
  local_f8._8_8_ = PTR_shared_null_1021e15e8;
  local_f8._0_8_ = PTR_shared_null_1021e15e8;
  local_138 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onDisableWindows7LookQuestionClosed(PRL_RESULT, Messaging::ButtonID)",
                         0x45);
  local_140 = 0x80000000;
  local_148.field7 = 0;
  FUN_100a1c600(local_130,param_1,&local_138,&local_148);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3c56,pQVar5,(QStringList *)(local_f8 + 8),(CSlotInfo *)local_f8,
             SUB81(local_130,0));
  QVariant::~QVariant(local_110);
  if (local_130[0] != (int *)0x0) {
    LOCK();
    *local_130[0] = *local_130[0] + -1;
    local_29 = *local_130[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_130[0] != (int *)0x0)) {
      operator_delete(local_130[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100321839;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100321839:
  FUN_100039a80(local_f8);
  FUN_100039a80(local_f8 + 8);
  if (*(int *)local_f8._16_8_ != -1) {
    if (*(int *)local_f8._16_8_ != 0) {
      LOCK();
      *(int *)local_f8._16_8_ = *(int *)local_f8._16_8_ + -1;
      local_29 = *(int *)local_f8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003218ed;
    }
    QArrayData::deallocate((QArrayData *)local_f8._16_8_,2,8);
  }
LAB_1003218ed:
  CVmWin7Look::~CVmWin7Look((CVmWin7Look *)(local_f8 + 0x18));
  return;
}

