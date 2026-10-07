
undefined8 FUN_1002e3a00(long param_1,short param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x20;
  if ((param_3 & 0xfe) < 2) {
    if (param_3 == 1) {
      if (param_2 == 0x200) {
        *(undefined2 *)(param_4 + 3) = *(undefined2 *)(param_1 + 0x6c);
        param_4[2] = *(undefined8 *)(param_1 + 100);
        uVar1 = *(undefined8 *)(param_1 + 0x54);
        uVar2 = *(undefined8 *)(param_1 + 0x5c);
      }
      else {
        if (param_2 != 0x100) {
          return 0x20;
        }
        *(undefined2 *)(param_4 + 3) = *(undefined2 *)(param_1 + 0x52);
        param_4[2] = *(undefined8 *)(param_1 + 0x4a);
        uVar1 = *(undefined8 *)(param_1 + 0x3a);
        uVar2 = *(undefined8 *)(param_1 + 0x42);
      }
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    else {
      if (param_3 != 0) {
        return 0x20;
      }
      *(undefined1 *)param_4 = 6;
    }
    uVar1 = 0;
  }
  return uVar1;
}

