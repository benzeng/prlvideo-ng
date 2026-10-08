
void FUN_1001b7a10(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 1) {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001554a0(uVar1);
    if (lVar2 == 0) {
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",0,
                    "(!)Error: failed to obtain server instance");
      return;
    }
  }
  return;
}

