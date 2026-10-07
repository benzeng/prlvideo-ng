
undefined1 FUN_1000d19b0(undefined8 param_1,bool param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  QArrayData *local_68;
  QDomElement local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  undefined4 local_48;
  int local_44;
  QArrayData *local_40;
  QDomElement local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  QDomDocument::QDomDocument((QDomDocument *)&local_30);
  QDomElement::QDomElement(local_38);
  puVar1 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = QDomDocument::setContent(&local_30,param_2,(QString *)0x1,(int *)&local_40,&local_44);
  if (cVar2 == '\0') {
    FUN_1008e3970("","vm",0,"[CSnapshot::VmSettingsFromString] can\'t set content of settings!");
    QString::toUtf8();
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","vm",0,"[CSnapshot::VmSettingsFromString] string = \n%s",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000d1b4f;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1000d1b4f:
    QString::toLatin1();
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","vm",0,
                  "[CSnapshot::VmSettingsFromString] iErrLine = %d, iErrCol = %d, error message = %s"
                  ,local_44,local_48,local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 == -1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) {
          uVar4 = 0;
          goto LAB_1000d1bf4;
        }
      }
      QArrayData::deallocate(local_58,1,8);
      uVar4 = 0;
    }
  }
  else {
    QDomDocument::documentElement();
    QDomElement::operator=(local_38,local_60);
    QDomNode::~QDomNode((QDomNode *)local_60);
    local_68 = (QArrayData *)puVar1;
    iVar3 = (**(code **)(*param_3 + 0x80))(param_3,local_38,&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000d1a78;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000d1a78:
    uVar4 = 1;
    if (iVar3 != 0) {
      uVar4 = 0;
      FUN_1008e3970("","vm",0,
                    "[CSnapshot::VmSettingsFromString] can\'t read xml content of settings!");
    }
  }
LAB_1000d1bf4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d1c24;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000d1c24:
  QDomNode::~QDomNode((QDomNode *)local_38);
  QDomDocument::~QDomDocument((QDomDocument *)&local_30);
  return uVar4;
}

