
void FUN_1001c9b10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100a205d0();
  uVar2 = PrlGui::staticMetaObjectHash();
  FUN_1001cf1c0(uVar1,uVar2);
  FUN_1001d0130("CTaskGetProxyInfo",PTR_staticMetaObject_1021e13a8);
  FUN_1001d03e0("CMessageDataProvider",&PTR_staticMetaObject_10220b6c0);
  FUN_1001d04b0("CMessageBoxBuilder",&PTR_staticMetaObject_10220b520);
  FUN_1001d0580("CSearchParentHelper",&PTR_staticMetaObject_10220b5f0);
  FUN_1001d0650("CMessageProcessor",&PTR_staticMetaObject_10220b400);
  FUN_1001d0720("CTaskCheckForProductUpdate",&PTR_staticMetaObject_1022048b0);
  FUN_1001d07f0("CTaskInstallProductUpdate",&PTR_staticMetaObject_102204340);
  FUN_1001d08c0("CAppUpdateWorker",&PTR_staticMetaObject_102225850);
  uVar1 = PrlGui::staticMetaObjectHash();
  uVar2 = FUN_100a205d0();
  FUN_1001cf1c0(uVar1,uVar2);
  CTaskManager::instance();
  uVar1 = CTaskManager::staticMetaObjectHash();
  uVar2 = FUN_100a205d0();
  FUN_1001cf1c0(uVar1,uVar2);
  return;
}

