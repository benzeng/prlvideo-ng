
undefined1 FUN_10032ea20(long param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  
  puVar2 = _malloc(0x118);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
    FUN_100df99c0("UIEMU","prl_client_app",0,"Error: malloc(%u) failed",0x118);
  }
  else {
    *puVar2 = 1;
    puVar2[1] = 3;
    puVar2[2] = 1;
    puVar2[3] = 0;
    puVar2[4] = param_3 & 0xff;
    puVar2[5] = param_4 & 0xff;
    _memcpy(puVar2 + 6,param_2,0x100);
    iVar1 = FUN_100a4a170(param_1 + 0x48,puVar2,0x118);
    _free(puVar2);
    uVar3 = 1;
    if (iVar1 < 0) {
      uVar3 = 0;
      FUN_100df99c0("UIEMU","prl_client_app",0,"Error: failed to send ctl to guest");
    }
  }
  return uVar3;
}

