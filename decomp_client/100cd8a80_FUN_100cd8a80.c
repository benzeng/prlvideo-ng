
undefined8 FUN_100cd8a80(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x19:
  case 0x1a:
    plVar1 = (long *)(*(long *)(param_1 + 0x360) + 0xf0);
    *plVar1 = *plVar1 + 1;
    uVar2 = FUN_100cdcb40();
    break;
  case 5:
  case 6:
  case 7:
  case 0x16:
  case 0x1b:
    plVar1 = (long *)(*(long *)(param_1 + 0x360) + 0xf0);
    *plVar1 = *plVar1 + 1;
    uVar2 = FUN_100cdcdd0();
    break;
  case 10:
  case 0xb:
    plVar1 = (long *)(*(long *)(param_1 + 0x390) + 0xf0);
    *plVar1 = *plVar1 + 1;
    uVar2 = FUN_100cdc360();
    break;
  case 0xc:
    plVar1 = (long *)(*(long *)(param_1 + 0x390) + 0xf0);
    *plVar1 = *plVar1 + 1;
    uVar2 = FUN_100cdc6c0();
    break;
  case 0xe:
    plVar1 = (long *)(*(long *)(param_1 + 0x390) + 0xf0);
    *plVar1 = *plVar1 + 1;
    uVar2 = FUN_100cdc800(param_1,0xe);
  }
  return uVar2;
}

