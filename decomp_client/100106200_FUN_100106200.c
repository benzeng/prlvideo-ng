
void FUN_100106200(long param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_2 != '\0') {
    FUN_100d752c0();
    uVar1 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_100d75500(uVar1,0);
  }
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  return;
}

