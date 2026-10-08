
void FUN_1003789a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (1 < DAT_10230ffd0) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar1 = FUN_100323e20(uVar2);
    FUN_100df99c0("","prl_client_app",2,
                  "[FS] Display widget #%d at screen %d has moved from host screen %d to %d",uVar1,
                  *(undefined4 *)(param_1 + 0x4c),param_3,param_2);
  }
  uVar2 = FUN_100031930();
  FUN_100031bd0(uVar2,0);
  FUN_100378a30(param_1);
  return;
}

