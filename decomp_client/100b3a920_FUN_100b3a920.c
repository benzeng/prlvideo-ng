
bool FUN_100b3a920(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  
  if (*param_2 == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(long *)(*param_2 + 0x10);
    if (lVar3 == 0) {
      bVar4 = false;
    }
    else {
      FUN_100b3c440(local_30,lVar3 + 0x58);
      lVar3 = 0;
      if (*param_2 != 0) {
        lVar3 = *(long *)(*param_2 + 0x10);
      }
      FUN_100b2e9e0(local_30,lVar3 + 0x18);
      FUN_100b3c440(&local_50,local_30);
      local_48 = local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8;
      local_40 = local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8;
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          cVar1 = FUN_100b390e0();
          iVar2 = 1;
          if (cVar1 != '\0') goto LAB_100b3a9fe;
          local_48 = local_48 + 8;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      iVar2 = 2;
LAB_100b3a9fe:
      FUN_100b2e680(&local_50);
      bVar4 = iVar2 != 2;
      FUN_100b2e680(local_30);
    }
  }
  return bVar4;
}

