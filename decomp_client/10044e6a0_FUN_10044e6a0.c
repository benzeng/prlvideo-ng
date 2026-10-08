
undefined4 FUN_10044e6a0(void)

{
  undefined4 uVar1;
  QVariant local_50;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  QObject::property((char *)&local_38);
  QVariant::~QVariant(&local_38);
  if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "property(\"helpTopic\").isValid()","ConfigEditor/Pages/CVmEdAbstractPage.cpp",
                  0x2ba,"getAssociatedHelpTopic");
  }
  QObject::property((char *)&local_50);
  QVariant::toString();
  uVar1 = Help::helpTopicFromString(&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044e778;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10044e778:
  QVariant::~QVariant(&local_50);
  return uVar1;
}

