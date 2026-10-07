
int FUN_1006b9cd0(long *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QFile local_40 [16];
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0xffff) {
    FUN_1006dba50();
  }
  else {
    FUN_1006db510(&local_30);
  }
  QFile::QFile(local_40,&local_30);
  cVar2 = QFile::exists();
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","prl_net",0,
                  "ReadNetworkConfig: failed to read networking configuration: file %s doesn\'t exist"
                  ,local_48 + *(long *)(local_48 + 0x10));
    iVar3 = -0x7ffffff0;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b9f9e;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1006b9f9e;
  }
  pcVar1 = *(code **)(*param_1 + 0x58);
  local_50 = (QArrayData *)local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  iVar3 = (*pcVar1)(param_1,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b9d75;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006b9d75:
  if (-1 < iVar3) goto LAB_1006b9f9e;
  local_60 = (QArrayData *)
             QString::fromAscii_helper("Failed to load network configuration file %1.",0x2d);
  QString::arg(&local_58,&local_60,&local_30,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b9ddc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006b9ddc:
  if (iVar3 == -0x7fffffca) {
    QString::fromUtf8_helper((char *)&local_28,0xa10314);
    QString::append(&local_58);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b9e3b;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1006b9e3b:
    CBaseNode::GetErrorMessage();
    QString::append(&local_58);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_19 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b9e84;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1006b9e84:
  uVar4 = FUN_1007dd120(iVar3);
  QString::toUtf8();
  FUN_1008e3970("","prl_net",0,"(%#x : %s  ): %s",iVar3,uVar4,local_70 + *(long *)(local_70 + 0x10))
  ;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b9eff;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1006b9eff:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b9f9e;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006b9f9e:
  QFile::~QFile(local_40);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return iVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return iVar3;
}

