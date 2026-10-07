
void FUN_10054bb90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar4 = param_5 + 0x20;
  if (param_5 == 0) {
    lVar4 = 0;
  }
  *(long *)(param_1 + 0x58) = lVar4;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_5 == 0) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    uVar1 = 0;
  }
  else {
    *(bool *)(param_1 + 0x78) = 1 < *(int *)(param_5 + 0xc);
    uVar1 = *(undefined1 *)(param_5 + 0x1c);
  }
  *(undefined1 *)(param_1 + 0x79) = uVar1;
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
  uVar2 = FUN_100778180();
  uVar3 = FUN_1007da300("vm.compressor.threads",uVar2);
  uVar5 = 1;
  if (uVar3 != 0) {
    uVar5 = uVar3;
  }
  uVar3 = 0x10;
  if (uVar5 < 0x11) {
    uVar3 = uVar5;
  }
  *(uint *)(param_1 + 0x50) = uVar3;
  return;
}

