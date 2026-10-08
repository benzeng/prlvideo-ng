
undefined8 FUN_1001e4c70(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long local_38;
  
  bVar3 = false;
  FUN_1001c0220(&local_38,6,0);
  iVar1 = *(int *)(local_38 + 0xc);
  iVar2 = *(int *)(local_38 + 8);
  FUN_1001e5810(&local_38);
  if (iVar1 != iVar2) {
    do {
      if (!bVar3) {
        bVar3 = true;
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("[INIT_THREAD]","prl_client_app",2,"Wait for closing conflicting apps...");
        }
      }
      _usleep(2000000);
      FUN_1001c0220(&local_38,6,0);
      iVar1 = *(int *)(local_38 + 0xc);
      iVar2 = *(int *)(local_38 + 8);
      FUN_1001e5810(&local_38);
    } while (iVar1 != iVar2);
    if ((1 < DAT_10230ffd0) && (bVar3)) {
      FUN_100df99c0("[INIT_THREAD]","prl_client_app",2,"Conflicting apps were closed.");
    }
  }
  FUN_1001e50a0(param_1,8,0);
  return 0;
}

