
void FUN_100053dc0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_8b8 [8];
  undefined4 local_8b0;
  long local_8ac;
  
  if (*(long *)(param_1 + 0x68) == param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    local_8b0 = 9;
    local_8ac = param_1;
    uVar2 = FUN_1002a6120(param_2,1,1);
    FUN_1002a5a50(uVar2,0,local_8b8,0x894);
    FUN_1004c07d0(uVar1,param_2,0);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

