
void FUN_10077d1e0(long param_1,byte *param_2)

{
  if ((*param_2 & 2) != 0) {
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Restart timer");
    FUN_10077bd00(param_1,60000);
    return;
  }
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Promo are disabled");
  if ((*(long *)(param_1 + 0x10) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x10))) {
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Timer stopped");
    QTimer::stop();
    return;
  }
  return;
}

