
void FUN_100866a80(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1000352c0();
      return;
    case 1:
      FUN_100035500();
      return;
    case 2:
      FUN_100035670(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                    **(undefined4 **)(param_4 + 0x18));
      return;
    case 3:
      FUN_100035930(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 4:
      FUN_1000359a0();
      return;
    case 5:
      FUN_1000359b0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    }
  }
  return;
}

