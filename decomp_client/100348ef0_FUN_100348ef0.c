
void FUN_100348ef0(long param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)in_RAX >> 0x20);
  if ((*(char *)(param_1 + 0x50) != param_2) &&
     (*(char *)(param_1 + 0x50) = param_2, 1 < DAT_10230ffd0)) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar1 = FUN_10018a9d0(uVar3);
    uVar2 = FUN_100d798a0(param_1 + 0x30);
    FUN_100df99c0("","prl_client_app",2,
                  "set dimmedSleep to %d (new VmState = 0x%08X; dspState = %d)",param_2,uVar1,
                  CONCAT44(uVar4,uVar2));
  }
  return;
}

