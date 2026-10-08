
undefined1 FUN_1000e9710(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_48 [32];
  
  iVar3 = FUN_100a67f70(local_48,0x14);
  if (iVar3 == 0) {
    lVar1 = *param_2;
    if (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8)) {
      puVar5 = (undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
      do {
        FUN_1000e9820(local_48,*puVar5);
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
    }
    puVar4 = (undefined4 *)FUN_100a67f30(local_48);
    puVar4[1] = 2;
    *puVar4 = 0x83;
    puVar4[2] = 0;
    puVar4[3] = 0;
    iVar3 = FUN_100a67f40(local_48);
    puVar4[4] = iVar3 + -0x14;
    uVar2 = FUN_1000e85b0(param_1,puVar4);
    FUN_100a681d0(local_48);
  }
  else if (DAT_10230ffd0 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_100df99c0("SGAGC","prl_client_app",1,"Failed to compose bitbox, err=%d");
  }
  return uVar2;
}

