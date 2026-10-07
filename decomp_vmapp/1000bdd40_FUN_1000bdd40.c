
undefined1 FUN_1000bdd40(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x40) + 8)) {
  case 0:
    FUN_10008fa70(param_1,0x4e26);
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 0;
    FUN_1000b1c50(param_1,0,0);
    break;
  case 3:
    uVar1 = 0;
    FUN_1002a47a0(*(undefined8 *)(param_1 + 0x1a20),0);
    FUN_10008f1c0(param_1,4,*(undefined4 *)(param_1 + 0x100),1,1);
    break;
  case 4:
    FUN_1008e3970("","vm",0,"Unable to shutdown VM. Timed out.");
    if (*(char *)(param_1 + 0x104) == '\0') {
      FUN_10008f790(param_1,*(undefined8 *)(param_1 + 0x108),0x80000275,2);
      *(undefined8 *)(param_1 + 0x108) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1008e3970("","vm",0,"Stop VM forcefully.");
      FUN_10008fa70(param_1,0x4e28);
    }
    break;
  case 5:
    FUN_1000a94a0(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

