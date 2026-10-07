
void FUN_10029c640(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_2) {
  case 1:
    *(undefined **)(param_1 + 0xb0) = &DAT_100b364d0;
    uVar1 = 1;
    break;
  default:
    FUN_1008e3970("AudioF","LocalDevices",0,
                  "[CAudioFormat] Invalid new channel count: %u, adjust to default");
  case 2:
    *(undefined ***)(param_1 + 0xb0) = &PTR___mh_execute_header_100b36550;
    uVar1 = 2;
    break;
  case 4:
    *(undefined ***)(param_1 + 0xb0) = &PTR___mh_execute_header_100b36530;
    uVar1 = 4;
    break;
  case 6:
    *(undefined ***)(param_1 + 0xb0) = &PTR___mh_execute_header_100b36510;
    uVar1 = 6;
    break;
  case 8:
    *(undefined ***)(param_1 + 0xb0) = &PTR___mh_execute_header_100b364f0;
    uVar1 = 8;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(ulong *)(param_1 + 0x10) = (ulong)uVar1 * *(long *)(param_1 + 0x18);
  FUN_10029c780(param_1);
  return;
}

