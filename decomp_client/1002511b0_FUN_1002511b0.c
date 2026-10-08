
void FUN_1002511b0(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010025131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onRegistrationDialogClosed(CLicenseManager::DialogType, const QString&, int)"
                        ,0x4d);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025124c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10025124c:
  if (lVar3 != 0) {
    if (DAT_102310958 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100612710(pvVar4);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar4;
    }
    pvVar4 = DAT_102310958;
    FUN_10015a2b0(&local_88,lVar3);
    cVar1 = FUN_10060b2b0(pvVar4,2,&local_88,local_68,0);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002512db;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002512db:
    if (cVar1 != '\0') {
      FUN_100df99c0("","prl_client_app",0,"[REG_DIALOG] Shown - Install Product Update");
      goto LAB_100251333;
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
LAB_100251333:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

