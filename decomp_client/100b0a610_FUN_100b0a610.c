
undefined8
FUN_100b0a610(long param_1,undefined8 param_2,undefined4 param_3,void *param_4,uint *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int local_104c;
  undefined4 local_1048;
  uint local_1044;
  undefined1 local_1040 [4];
  undefined1 local_103c [4];
  undefined1 local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = _SCardEstablishContext(2,0,0,param_1 + 0x10);
    if (iVar1 != 0) {
      uVar3 = 0xffffffff;
      if (2 < DAT_10230ffd0) {
        uVar2 = _pcsc_stringify_error(iVar1);
        FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Can\'t establish context 0x%x %s",iVar1,uVar2);
      }
      goto LAB_100b0a6d8;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  iVar1 = FUN_100b0a100(0,param_1);
  if (iVar1 != 0) {
    uVar3 = 0xffffffff;
    goto LAB_100b0a6d8;
  }
  iVar1 = _SCardStatus(*(undefined4 *)(param_1 + 0x14),0,local_103c,&local_1048,&local_104c,0,
                       local_1040);
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPCSC",3,"PCSC: Status state 0x%x, 0x%x",local_1048,local_104c);
  }
  if (iVar1 != 0) {
    if (2 < DAT_10230ffd0) {
      uVar3 = _pcsc_stringify_error(iVar1);
      FUN_100df99c0("","PrlPCSC",3,"PCSC: SCardStatus 0x%x %s",iVar1,uVar3);
    }
    if (3 < iVar1 + 0x7fefff9aU) {
      uVar3 = 0xffffffff;
      goto LAB_100b0a6d8;
    }
    uVar3 = 0xffffffff;
    if (iVar1 + 0x7fefff9aU == 1) goto LAB_100b0a6d8;
    goto LAB_100b0a91b;
  }
  local_1044 = 0x1000;
  iVar1 = FUN_100dfa590();
  if (2 < iVar1) {
    FUN_100b0a240("Write",param_2,param_3,0,0);
  }
  puVar4 = PTR__g_rgSCardT1Pci_1021e18b8;
  if ((local_104c != 2) && (puVar4 = PTR__g_rgSCardRawPci_1021e18a8, local_104c == 1)) {
    puVar4 = PTR__g_rgSCardT0Pci_1021e18b0;
  }
  iVar1 = _SCardTransmit(*(undefined4 *)(param_1 + 0x14),puVar4,param_2,param_3,0,local_1038,
                         &local_1044);
  if (*param_5 < local_1044) {
    uVar3 = 0xffffffff;
    goto LAB_100b0a6d8;
  }
  if (iVar1 == 0) {
    _memcpy(param_4,local_1038,(ulong)local_1044);
    *param_5 = local_1044;
    uVar3 = 0;
    goto LAB_100b0a6d8;
  }
  if (2 < DAT_10230ffd0) {
    uVar3 = _pcsc_stringify_error(iVar1);
    FUN_100df99c0("","PrlPCSC",3,"PCSC: SCardTransmit 0x%x %s",iVar1,uVar3);
  }
  uVar3 = 2;
  if (iVar1 < -0x7fefffea) {
    if (iVar1 == -0x7feffff8) goto LAB_100b0a6d8;
LAB_100b0a938:
    if (DAT_10230ffd0 < 3) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Failed data transmission to card reader.");
      uVar3 = 0xffffffff;
    }
  }
  else {
    if (1 < iVar1 + 0x7fefff98U) {
      if (iVar1 == -0x7fefffea) goto LAB_100b0a6d8;
      if (iVar1 != -0x7fefff9a) goto LAB_100b0a938;
    }
LAB_100b0a91b:
    _SCardDisconnect(*(undefined4 *)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 4) = 1;
    uVar3 = 1;
  }
LAB_100b0a6d8:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

