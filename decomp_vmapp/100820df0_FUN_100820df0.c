
int FUN_100820df0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (DAT_1011c06d8 == 0) {
    FUN_10081e310(3);
    DAT_1011c06d8 = FUN_100884e10();
    FUN_10081e310(2);
    if (DAT_1011c06d8 == 0) {
      return 0;
    }
  }
  iVar2 = DAT_1011ab6e0;
  DAT_1011ab6e0 = DAT_1011ab6e0 + 1;
  iVar3 = FUN_100885600();
  puVar1 = PTR__strcmp_100ba2620;
  if (iVar3 < DAT_1011ab6e0) {
    do {
      FUN_10081e310(3);
      puVar4 = (undefined8 *)FUN_10081ddd0(0x18,"o_names.c",0x57);
      FUN_10081e310(2);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_100887ce0(8,0x6a,0x41,"o_names.c",0x5a);
        return 0;
      }
      *puVar4 = FUN_1008858e0;
      puVar4[1] = puVar1;
      puVar4[2] = 0;
      FUN_10081e310(3);
      FUN_1008852e0(DAT_1011c06d8,puVar4);
      FUN_10081e310(2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1011ab6e0);
  }
  plVar5 = (long *)FUN_100885620(DAT_1011c06d8,iVar2);
  if (param_1 != 0) {
    *plVar5 = param_1;
  }
  if (param_2 != 0) {
    plVar5[1] = param_2;
  }
  if (param_3 != 0) {
    plVar5[2] = param_3;
  }
  return iVar2;
}

