
void FUN_10029c330(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = 1;
  param_1[2] = 1;
  *(undefined **)(param_1 + 0x2c) = &DAT_100b364d0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = param_2;
  switch(param_2) {
  case 0:
    *(undefined8 *)(param_1 + 6) = 1;
    *(undefined8 *)(param_1 + 8) = 0xff00000008;
    goto LAB_10029c399;
  case 1:
    *(undefined8 *)(param_1 + 6) = 2;
    *(undefined8 *)(param_1 + 8) = 0xffff00000010;
    uVar2 = 2;
    goto LAB_10029c42b;
  case 2:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xfffff00000000014;
    break;
  case 3:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xffffff0000000018;
    break;
  case 4:
  case 5:
  case 6:
    *(undefined8 *)(param_1 + 6) = 4;
    uVar2 = 0xffffffff00000020;
    break;
  default:
    *(undefined8 *)(param_1 + 6) = 1;
    *(undefined8 *)(param_1 + 8) = 0;
LAB_10029c399:
    uVar2 = 1;
    goto LAB_10029c42b;
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = 4;
LAB_10029c42b:
  *(undefined8 *)(param_1 + 4) = uVar2;
  FUN_10029c780(param_1);
  switch(param_3) {
  case 1:
    *(undefined **)(param_1 + 0x2c) = &DAT_100b364d0;
    uVar1 = 1;
    break;
  default:
    FUN_1008e3970("AudioF","LocalDevices",0,
                  "[CAudioFormat] Invalid new channel count: %u, adjust to default",param_3);
  case 2:
    *(undefined ***)(param_1 + 0x2c) = &PTR___mh_execute_header_100b36550;
    uVar1 = 2;
    break;
  case 4:
    *(undefined ***)(param_1 + 0x2c) = &PTR___mh_execute_header_100b36530;
    uVar1 = 4;
    break;
  case 6:
    *(undefined ***)(param_1 + 0x2c) = &PTR___mh_execute_header_100b36510;
    uVar1 = 6;
    break;
  case 8:
    *(undefined ***)(param_1 + 0x2c) = &PTR___mh_execute_header_100b364f0;
    uVar1 = 8;
  }
  param_1[1] = uVar1;
  *(ulong *)(param_1 + 4) = (ulong)uVar1 * *(long *)(param_1 + 6);
  FUN_10029c780(param_1);
  if (param_4 == 0) {
    FUN_1008e3970("AudioF","LocalDevices",0,"[CAudioFormat] Invalid new rate, adjust to default");
    param_4 = 48000;
  }
  param_1[2] = param_4;
  return;
}

