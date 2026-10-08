
void FUN_10082e9e0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10033b0b0();
      return;
    case 1:
      FUN_10033b0d0();
      return;
    case 2:
      FUN_10033b100(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_10033b110(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 4:
      FUN_10033b130(param_1,*(undefined8 *)(param_4 + 8),**(undefined1 **)(param_4 + 0x10),
                    **(undefined4 **)(param_4 + 0x18));
      return;
    case 5:
      FUN_10033b2b0(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

