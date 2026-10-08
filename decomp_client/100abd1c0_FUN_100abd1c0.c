
void FUN_100abd1c0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x53) = param_2;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
  }
  FUN_100abf500(uVar1);
  return;
}

