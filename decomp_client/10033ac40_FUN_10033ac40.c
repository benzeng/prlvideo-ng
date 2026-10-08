
undefined8 FUN_10033ac40(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to close guest menus. Shell Integration client object does not exist!");
  }
  else {
    FUN_100abefc0();
  }
  return 0;
}

