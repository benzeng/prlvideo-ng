
long FUN_1002c8420(long *param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  if (lVar1 == 0) {
    if (DAT_1011c568c < 1) {
      return 0;
    }
    puVar3 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
    pcVar2 = "[%s:%02x.%02x] device not found";
  }
  else if (*(int *)(lVar1 + 0xc) == 0) {
    lVar1 = *(long *)(lVar1 + 0x40 + (param_3 & 0xff) * 8);
    if (lVar1 == 0) {
      if (DAT_1011c568c < 1) {
        return 0;
      }
      puVar3 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
      pcVar2 = "[%s:%02x.%02x] EP not found";
    }
    else {
      if (*(int *)(lVar1 + 0xbc) == 0) {
        return lVar1;
      }
      if (DAT_1011c568c < 1) {
        return 0;
      }
      puVar3 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
      pcVar2 = "[%s:%02x.%02x] EP halted";
    }
  }
  else {
    if (DAT_1011c568c < 1) {
      return 0;
    }
    puVar3 = (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)];
    pcVar2 = "[%s:%02x.%02x] device is shutdown";
  }
  FUN_1008e3970("","USB",0,pcVar2,puVar3,param_2,(int)param_3);
  return 0;
}

