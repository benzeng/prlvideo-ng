
undefined8 FUN_1000a22d0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 0x10) + 8 + *param_1);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      FUN_100534280(*(undefined8 *)(param_3 + 0x10978));
      pcVar2 = "Action is rejected by guest.";
      goto LAB_1000a235b;
    }
    if (iVar1 != 4) {
      return 0xfffffffb;
    }
    FUN_1008e3970("","vm",0,"Guest canceled notifications");
  }
  FUN_100534190(*(undefined8 *)(param_3 + 0x10978));
  pcVar2 = "Action is permited by guest.";
LAB_1000a235b:
  FUN_1008e3970("","vm",0,pcVar2);
  return 0;
}

