
undefined1 FUN_1000e9920(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 local_48 [32];
  
  iVar2 = FUN_100a67f70(local_48,0x14);
  if (iVar2 == 0) {
    lVar4 = *param_2;
    if (*(int *)(lVar4 + 8) != *(int *)(lVar4 + 0xc)) {
      lVar4 = lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8;
      do {
        FUN_1000e9820(local_48,lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
    }
    puVar3 = (undefined4 *)FUN_100a67f30(local_48);
    puVar3[1] = 2;
    *puVar3 = 0x84;
    puVar3[2] = 0;
    puVar3[3] = 0;
    iVar2 = FUN_100a67f40(local_48);
    puVar3[4] = iVar2 + -0x14;
    uVar1 = FUN_1000e85b0(param_1,puVar3);
    FUN_100a681d0(local_48);
  }
  else if (DAT_10230ffd0 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_100df99c0("SGAGC","prl_client_app",1,"Failed to compose bitbox, err=%d",iVar2);
  }
  return uVar1;
}

