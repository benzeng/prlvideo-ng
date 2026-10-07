
void FUN_1002b4320(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    uVar2 = 0x32;
    if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0x800) {
      uVar2 = 0;
    }
    uVar1 = FUN_1007da300("devices.kbd.end_delay",uVar2);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  return;
}

