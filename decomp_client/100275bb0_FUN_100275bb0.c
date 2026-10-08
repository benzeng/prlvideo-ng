
void FUN_100275bb0(long *param_1,undefined8 *param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  CDispApplianceConfigs *this;
  QArrayData *local_e8;
  long local_e0 [20];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server object is null");
                    /* WARNING: Could not recover jumptable at 0x000100275d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  if (param_4 == 0 && param_3 == 0) {
    CDispApplianceConfigs::CDispApplianceConfigs((CDispApplianceConfigs *)local_e0);
    pcVar1 = *(code **)(local_e0[0] + 0x58);
    local_e8 = (QArrayData *)*param_2;
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
    }
    iVar2 = (*pcVar1)(local_e0,&local_e8,1);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100275d87;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100275d87:
    if (iVar2 == 0) {
      this = operator_new(0xa0);
      CDispApplianceConfigs::CDispApplianceConfigs(this,(CDispApplianceConfigs *)local_e0);
      param_1[6] = (long)this;
      (**(code **)(*param_1 + 0xb0))(param_1,0);
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to parse appliance descriptor [%d]",
                    iVar2);
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    }
    CDispApplianceConfigs::~CDispApplianceConfigs((CDispApplianceConfigs *)local_e0);
    return;
  }
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: downloading appliance descriptor failed: %s, exit code: [%d, %d]",
                local_38 + *(long *)(local_38 + 0x10),param_3,param_4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100275c81;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100275c81:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100275cb1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100275cb1:
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

