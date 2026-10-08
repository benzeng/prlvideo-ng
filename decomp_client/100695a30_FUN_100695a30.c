
undefined8 FUN_100695a30(void)

{
  char cVar1;
  undefined8 uVar2;
  int *local_38;
  undefined8 local_30;
  QVariant local_28;
  undefined1 local_11;
  
  QObject::property((char *)&local_28);
  uVar2 = 0;
  if ((local_28.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    if (DAT_10226c7b8 == 0) {
      DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
    }
    cVar1 = QVariant::canConvert((int)&local_28);
    if (cVar1 == '\0') {
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "contextData.canConvert<QPointer<QObject> >()","ActionManager/Actions.cpp",0xbe,
                    "actionContextValue");
    }
    FUN_100086de0(&local_38,&local_28);
    uVar2 = 0;
    if (local_38 != (int *)0x0) {
      uVar2 = 0;
      if (local_38[1] != 0) {
        uVar2 = local_30;
      }
      LOCK();
      *local_38 = *local_38 + -1;
      local_11 = *local_38 != 0;
      UNLOCK();
      if (!(bool)local_11) {
        operator_delete(local_38);
      }
    }
  }
  QVariant::~QVariant(&local_28);
  return uVar2;
}

