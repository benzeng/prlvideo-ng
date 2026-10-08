
void FUN_10036a0e0(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  int in_stack_00000020;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  iVar2 = FUN_100323e20(uVar4);
  if (((in_stack_00000020 == iVar2) && ((int)in_stack_00000008 == *(int *)(param_1 + 0x80))) &&
     (iVar2 = (int)((ulong)in_stack_00000008 >> 0x20), iVar2 == *(int *)(param_1 + 0x84))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
    pcVar1 = DAT_102311a80;
    if (iVar2 != 0) {
      uVar3 = (*DAT_1023119d8)();
      (*pcVar1)(uVar3,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar4 = FUN_100323e00(uVar4);
    iVar2 = FUN_100319d30(uVar4);
    if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x88) < 5) {
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",2,
                        "Surface detached, but IO is started. Try to reattach! Attempt: %d");
        }
        FUN_100369150(param_1,1,1);
        return;
      }
      if (*(char *)(param_1 + 0x8d) != '\0') {
        *(undefined1 *)(param_1 + 0x8d) = 0;
        FUN_100832cc0(*(undefined8 *)(param_1 + 0x10),0);
        return;
      }
    }
  }
  return;
}

