
int FUN_1009aca00(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 in_R9;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined4 local_19c;
  long local_198;
  long local_190;
  long local_188;
  undefined4 local_180;
  int local_17c;
  long *local_178;
  char *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  char *local_e0;
  long *local_d8;
  char *local_d0;
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_40;
  char *local_38;
  
  if (param_2 == 0) {
    return -0x7ffffffd;
  }
  iVar3 = (*DAT_1023111e8)(param_1,&local_17c);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event type. error 0x%X",iVar3)
    ;
    return iVar3;
  }
  if (local_17c == 0x65) {
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    iVar3 = (*DAT_1023111f8)(param_1,0,&local_1b8);
    if (iVar3 < 0) {
      bVar2 = true;
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                    iVar3);
    }
    else {
      iVar3 = (*DAT_102311240)(local_1b8,&local_1a8);
      if (iVar3 < 0) {
        bVar2 = true;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Unable to get event param value. error 0x%X",iVar3);
      }
      else {
        bVar2 = false;
      }
    }
    if (local_1b8 != 0) {
      (*DAT_102310a50)();
    }
    local_1b8 = 0;
    bVar1 = true;
    if (!bVar2) {
      local_1c0 = 0;
      iVar4 = (*DAT_1023111f8)(param_1,1,&local_1c0);
      if (iVar4 < 0) {
        bVar2 = true;
        FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                      iVar4);
        iVar3 = iVar4;
      }
      else {
        iVar4 = (*DAT_102311240)(local_1c0,&local_1b0);
        bVar2 = false;
        if (iVar4 < 0) {
          bVar2 = true;
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error: Unable to get event param value. error 0x%X",iVar4);
          iVar3 = iVar4;
        }
      }
      if (local_1c0 != 0) {
        (*DAT_102310a50)();
      }
      local_1c0 = 0;
      bVar1 = true;
      if (!bVar2) {
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = &local_1b0;
        local_170 = "PtaHandleWrap";
        local_e8 = &local_1a8;
        local_e0 = "PtaHandleWrap";
        bVar1 = false;
        QMetaObject::invokeMethod
                  (param_2,"OnPasscodeConnectRequest",2,0,0,in_R9,local_e8,"PtaHandleWrap",local_178
                   ,"PtaHandleWrap",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      }
    }
    if (local_1b0 != 0) {
      (*DAT_102310a50)();
    }
    local_1b0 = 0;
    if (local_1a8 != 0) {
      (*DAT_102310a50)();
    }
  }
  else {
    if (local_17c != 100) {
      return 0;
    }
    local_188 = 0;
    local_190 = 0;
    iVar3 = (*DAT_1023111f8)(param_1,0,&local_190);
    if (iVar3 < 0) {
      bVar2 = true;
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                    iVar3);
    }
    else {
      iVar3 = (*DAT_102311218)(local_190,&local_180);
      if (iVar3 < 0) {
        bVar2 = true;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Unable to get event param value. error 0x%X",iVar3);
      }
      else {
        bVar2 = false;
      }
    }
    if (local_190 != 0) {
      (*DAT_102310a50)();
    }
    local_190 = 0;
    bVar1 = true;
    if (!bVar2) {
      local_198 = 0;
      iVar4 = (*DAT_1023111f8)(param_1,1,&local_198);
      if (iVar4 < 0) {
        bVar2 = true;
        FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get event param. error 0x%X",
                      iVar4);
        iVar3 = iVar4;
      }
      else {
        iVar4 = (*DAT_102311240)(local_198,&local_188);
        bVar2 = false;
        if (iVar4 < 0) {
          bVar2 = true;
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error: Unable to get event param value. error 0x%X",iVar4);
          iVar3 = iVar4;
        }
      }
      if (local_198 != 0) {
        (*DAT_102310a50)();
      }
      local_198 = 0;
      bVar1 = true;
      if (!bVar2) {
        local_19c = local_180;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
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
        local_d8 = &local_188;
        local_d0 = "PtaHandleWrap";
        local_40 = &local_19c;
        local_38 = "PTA_UDP_PACKET_TYPE";
        bVar1 = false;
        QMetaObject::invokeMethod
                  (param_2,"OnWhoIsHereInfo",2,0,0,in_R9,local_40,"PTA_UDP_PACKET_TYPE",local_d8,
                   "PtaHandleWrap",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      }
    }
    if (local_188 != 0) {
      (*DAT_102310a50)();
    }
  }
  if (!bVar1) {
    return 0;
  }
  return iVar3;
}

