
bool FUN_1006b0d50(undefined8 param_1,long *param_2)

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
      FUN_1006b2930(local_30,lVar3 + 0x58);
      lVar3 = 0;
      if (*param_2 != 0) {
        lVar3 = *(long *)(*param_2 + 0x10);
      }
      FUN_1006a6380(local_30,lVar3 + 0x18);
      FUN_1006b2930(&local_50,local_30);
      local_48 = local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8;
      local_40 = local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8;
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          cVar1 = FUN_1006af510();
          iVar2 = 1;
          if (cVar1 != '\0') goto LAB_1006b0e2e;
          local_48 = local_48 + 8;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      iVar2 = 2;
LAB_1006b0e2e:
      FUN_1006a6010(&local_50);
      bVar4 = iVar2 != 2;
      FUN_1006a6010(local_30);
    }
  }
  return bVar4;
}

