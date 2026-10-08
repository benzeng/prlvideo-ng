
void FUN_1001ce170(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *pvVar8;
  
  if (1 < DAT_10230ffd0) {
    uVar4 = QObject::sender();
    lVar5 = QObject::sender();
    if (lVar5 == 0) {
      pcVar7 = "N/A";
    }
    else {
      puVar6 = (undefined8 *)QObject::sender();
      (**(code **)*puVar6)(puVar6);
      pcVar7 = (char *)QMetaObject::className();
    }
    FUN_100df99c0("","prl_client_app",2,"Application deinitialization signal sender is %p (%s)",
                  uVar4,pcVar7);
  }
  if (DAT_102312170 == '\x01') {
    FUN_100df99c0("","prl_client_app",0,"Application is deinitialized already");
    return;
  }
  DAT_102312170 = 1;
  FUN_100df99c0("","prl_client_app",0,"Application is about to quit. Cleaning up... ");
  iVar2 = FUN_1001cc6e0();
  iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0x7c);
  if (iVar3 != iVar2) {
    FUN_100df99c0("","prl_client_app",0,"WindowServer pid changed from %d to %d",iVar3,iVar2);
  }
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    if (DAT_102310930 == (void *)0x0) {
      pvVar8 = operator_new(0x18);
      FUN_1001e5440(pvVar8);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar8;
    }
    iVar3 = FUN_1001e5550(DAT_102310930,9);
    if (iVar3 != -0x7ffeaade) {
      if (DAT_102310930 == (void *)0x0) {
        pvVar8 = operator_new(0x18);
        FUN_1001e5440(pvVar8);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar8;
      }
      iVar3 = FUN_1001e5550(DAT_102310930,9);
      if ((iVar3 < 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x7c) != iVar2)) goto LAB_1001ce314;
    }
    FUN_1001e78d0();
  }
LAB_1001ce314:
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x78) != '\0') {
    QObject::deleteLater();
    FUN_1001cc200();
  }
  FUN_1000623b0();
  _PrlApi_Deinit();
  return;
}

