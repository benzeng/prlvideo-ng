
undefined8 FUN_100205420(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 uVar5;
  undefined4 uVar6;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
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
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x38);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to open converted VM. Converted VM is NULL!");
    uVar2 = 0x80000009;
  }
  else {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = FUN_10018c280(lVar3);
    local_d0 = 3;
    local_c8 = 0;
    local_cc = 0;
    local_c4 = 0xffff;
    local_c0 = 0;
    local_bc = 0;
    lVar3 = FUN_10031bef0(uVar2,1,&local_d0);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x30) == '\0')) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
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
      local_28 = 0;
      uStack_20 = 0;
      uVar6 = 0;
      cVar1 = QMetaObject::invokeMethod(param_1,"processOpenImportedVm",2,0,0);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar5 = CONCAT44(uVar6,0x10a);
      pcVar4 = "invokeSucceded";
    }
    else {
      QObject::connect(&local_d8,lVar3,"2switchFinished(PRL_RESULT)",param_1,
                       "1processOpenImportedVm()",0);
      if (local_d8 == 0) {
        QMetaObject::Connection::~Connection((Connection *)&local_d8);
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_d8);
        if (cVar1 != '\0') {
          return 0;
        }
      }
      uVar5 = CONCAT44(uVar6,0x104);
      pcVar4 = "connected";
    }
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",pcVar4,
                  "Tasks/CTaskImportBootCampVm.cpp",uVar5,"openImportedVm");
  }
  return uVar2;
}

