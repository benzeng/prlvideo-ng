
undefined8 FUN_1002d5d20(long *param_1)

{
  ulong in_RAX;
  undefined8 uVar1;
  uint6 local_18;
  undefined2 local_12;
  
  if (param_1[6] == 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Get device descriptor error %X!",param_1 + 0x107,
                    *(undefined4 *)(*param_1 + 0x20));
    }
    (**(code **)(*(long *)*param_1 + 0x30))();
    uVar1 = 0;
  }
  else {
    local_12 = (undefined2)((in_RAX >> 0x38) << 8);
    local_18 = (uint6)CONCAT14(*(undefined1 *)(param_1[6] + 7),0x507);
    uVar1 = FUN_1002d69b0(param_1,&local_18,0);
  }
  return uVar1;
}

