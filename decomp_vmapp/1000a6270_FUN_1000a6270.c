
void FUN_1000a6270(long param_1,long param_2)

{
  uint uVar1;
  
  if ((*(long *)(param_2 + 0x28) != 0) || (*(long *)(param_2 + 0x30) != 0)) {
    FUN_1000a6580(param_1,param_2);
    if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
      if (*(short *)(param_2 + 4) == 0) {
        uVar1 = *(uint *)(param_2 + 0x14);
        if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
          uVar1 = *(uint *)(param_2 + 0x10);
        }
        FUN_100544ef0(*(undefined8 *)(param_2 + 0x30),uVar1 + 0xfff & 0xfffff000);
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x1950) + 0x88))(*(long **)(param_1 + 0x1950),param_2);
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  return;
}

