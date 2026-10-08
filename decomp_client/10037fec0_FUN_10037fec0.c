
void FUN_10037fec0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10037f230(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_10037f940(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 3:
      FUN_10037f7a0(param_1);
      return;
    case 5:
      FUN_10037f8a0(param_1);
      return;
    case 6:
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar1 = FUN_10018ff50(uVar2);
      FUN_10037fac0(param_1,uVar1);
      return;
    }
  }
  return;
}

