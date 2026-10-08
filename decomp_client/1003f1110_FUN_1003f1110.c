
undefined8 FUN_1003f1110(long param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    iVar3 = QVariant::toLongLong((bool *)(param_1 + 0x38));
    if (iVar3 == 0) {
      uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      cVar2 = FUN_1001754c0(uVar5,4);
      if (cVar2 == '\0') {
        plVar6 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
        pcVar1 = *(code **)(*plVar6 + 0x70);
        local_30 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AutoStart",0x1a);
        QVariant::QVariant(&local_40,0);
        (*pcVar1)(plVar6,param_1 + 0x28,&local_30,&local_40);
        QVariant::~QVariant(&local_40);
        if (*(int *)local_30 != -1) {
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            UNLOCK();
            if (*(int *)local_30 != 0) {
              return 0;
            }
            local_21 = 0;
          }
          QArrayData::deallocate(local_30,2,8);
        }
      }
    }
  }
  return 0;
}

