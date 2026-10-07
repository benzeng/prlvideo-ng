
void FUN_10054bd70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined8 *)(param_1 + 0x68) = param_6;
  *(undefined8 *)(param_1 + 0x70) = param_7;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = FUN_100778180();
  uVar2 = FUN_1007da300("vm.compressor.threads",uVar1);
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = 0x10;
  if (uVar3 < 0x11) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  return;
}

