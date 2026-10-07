
undefined8 FUN_10029a930(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10029c770(param_1,1,2,48000);
  FUN_10029c640(param_1,*(undefined4 *)(param_2[0x14] + 8));
  switch(*(undefined4 *)param_2[0x14]) {
  case 0:
    break;
  case 1:
    iVar1 = ((undefined4 *)param_2[0x14])[1];
    if (iVar1 == 0x20) {
      uVar2 = 4;
      goto LAB_10029a9f5;
    }
    if (iVar1 == 0x18) {
      uVar2 = 3;
      goto LAB_10029a9f5;
    }
    if (iVar1 == 0x14) {
      uVar2 = 2;
      goto LAB_10029a9f5;
    }
    break;
  case 2:
    uVar2 = 5;
    goto LAB_10029a9f5;
  case 3:
    uVar2 = 6;
    goto LAB_10029a9f5;
  default:
    uVar2 = (**(code **)(*param_2 + 0x78))(param_2);
    FUN_1008e3970("AudioAS","LocalDevices",0,"[CSoundDevice] [%s] Invalid ICH format bits: %d",uVar2
                  ,*(undefined4 *)param_2[0x14]);
  }
  uVar2 = 1;
LAB_10029a9f5:
  FUN_10029c560(param_1,uVar2);
  FUN_10029c730(param_1,*(undefined4 *)(param_2[0x14] + 0xc));
  FUN_10029c8f0(param_1,0,*(undefined4 *)(param_2[0x14] + 0x10));
  FUN_10029c8f0(param_1,1,*(undefined4 *)(param_2[0x14] + 0x14));
  FUN_10029c8f0(param_1,2,*(undefined4 *)(param_2[0x14] + 0x18));
  FUN_10029c8f0(param_1,3,*(undefined4 *)(param_2[0x14] + 0x1c));
  FUN_10029c8f0(param_1,4,*(undefined4 *)(param_2[0x14] + 0x20));
  FUN_10029c8f0(param_1,5,*(undefined4 *)(param_2[0x14] + 0x24));
  FUN_10029c8f0(param_1,6,*(undefined4 *)(param_2[0x14] + 0x28));
  FUN_10029c8f0(param_1,7,*(undefined4 *)(param_2[0x14] + 0x2c));
  return param_1;
}

