
void FUN_10075b8e0(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 in_R9;
  QVariant local_f8;
  QVariant local_e8;
  QArrayData *local_d8;
  undefined1 local_c9;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_e8);
  QVariant::toString();
  QVariant::~QVariant(&local_e8);
  iVar1 = QString::compare_helper
                    (local_d8 + *(long *)(local_d8 + 0x10),*(undefined4 *)(local_d8 + 4),
                     "connecting",0xffffffff,1);
  if (iVar1 == 0) {
    pcVar2 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_f8,"onlineStore");
    QObject::setProperty(pcVar2,(QVariant *)"state");
    QVariant::~QVariant(&local_f8);
    uVar3 = CDeclarativeWizardPage::pageContentItem();
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
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    QMetaObject::invokeMethod(uVar3,"stopTimer",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)
    ;
  }
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return;
      }
      local_c9 = 0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
  return;
}

