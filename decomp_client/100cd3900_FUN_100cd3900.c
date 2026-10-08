
undefined1 FUN_100cd3900(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if ((int)param_2 < 0xc1) {
    uVar2 = (ulong)param_2;
    if ((param_3 & 0xfffffffd) == 0 && *(int *)(param_1 + 0x38 + uVar2 * 4) == 0) {
      uVar1 = FUN_100cdf380(param_2);
      uVar3 = 0;
      FUN_100df99c0("","hid",0,
                    "[CheckKeyState] Invalid key state transition: [%s] (%02x,%02x) -> (%02x,%02x)",
                    uVar1,param_2,*(undefined4 *)(param_1 + 0x38 + uVar2 * 4),param_2,param_3);
    }
    else {
      *(uint *)(param_1 + 0x38 + uVar2 * 4) = param_3;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    FUN_100df99c0("","hid",0,"[CheckKeyState] Invalid keycode: (%02x, %02x)",param_2,param_3);
  }
  return uVar3;
}

