
void FUN_10077d120(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x10))) {
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Timer stopped");
    QTimer::stop();
    return;
  }
  return;
}

