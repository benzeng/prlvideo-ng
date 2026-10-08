
void FUN_100348f80(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018a9d0(uVar6);
  iVar3 = FUN_100d798a0(param_1 + 0x30);
  if (iVar3 == 2) {
    cVar1 = *(char *)(param_1 + 0x50);
    if ((uVar2 == 0x30000005) && (cVar1 != '\0')) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,
                      "Start Vm (from VMS_PAUSED state) after resuming from host DIM");
      }
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100192d10(uVar6,0,0,0);
      cVar1 = *(char *)(param_1 + 0x50);
    }
    if ((cVar1 != '\0') && (*(undefined1 *)(param_1 + 0x50) = 0, 1 < DAT_10230ffd0)) {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_10018a9d0(uVar6);
      uVar5 = FUN_100d798a0(param_1 + 0x30);
      FUN_100df99c0("","prl_client_app",2,
                    "set dimmedSleep to %d (new VmState = 0x%08X; dspState = %d)",0,uVar4,
                    CONCAT44(uVar7,uVar5));
    }
  }
  if ((uVar2 & 0xfffffff7) == 0x30000001) {
    return;
  }
  FUN_100348e30(param_1,iVar3);
  return;
}

