
undefined8 FUN_1002f6590(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[TASK_PURCHASE_UPDATE]","prl_client_app",2,
                    "Failed to query current license key registration status. Failed to get local server instance"
                   );
    }
  }
  else {
    uVar1 = FUN_10016f500(lVar2);
    FUN_1006260f0(uVar1);
  }
  return 0;
}

