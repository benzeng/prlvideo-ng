
undefined8 FUN_1008d51a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_68 [2];
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [48];
  
  local_60 = 0;
  uVar1 = FUN_100821ab0(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_100821930(uVar1);
  lVar4 = FUN_100890b60(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_10088a650(local_50);
  iVar2 = FUN_1008977b0(local_50,&local_58,lVar4,0,*(undefined8 *)(param_1 + 0x38));
  if (0 < iVar2) {
    iVar2 = FUN_1008964c0(local_58,0xffffffff,8,5,0,param_1);
    if (iVar2 < 1) {
      uVar3 = 0x3a2;
LAB_1008d5325:
      FUN_100887ce0(0x21,0x8b,0x98,"pk7_doit.c",uVar3);
    }
    else {
      iVar2 = FUN_1008a52d0(*(undefined8 *)(param_1 + 0x18),&local_60,&DAT_100be5e20);
      if (local_60 == 0) goto LAB_1008d5338;
      iVar2 = FUN_10088a910(local_50,local_60,(long)iVar2);
      if (0 < iVar2) {
        FUN_10081e1a0(local_60);
        local_60 = 0;
        iVar2 = FUN_100897940(local_50,0,local_68);
        if (0 < iVar2) {
          local_60 = FUN_10081ddd0(local_68[0],"pk7_doit.c",0x3b0);
          if (local_60 == 0) goto LAB_1008d5338;
          iVar2 = FUN_100897940(local_50,local_60,local_68);
          if (0 < iVar2) {
            iVar2 = FUN_1008964c0(local_58,0xffffffff,8,5,1,param_1);
            if (0 < iVar2) {
              FUN_10088aa50(local_50);
              FUN_1008afdb0(*(undefined8 *)(param_1 + 0x28),local_60,local_68[0]);
              return 1;
            }
            uVar3 = 0x3b8;
            goto LAB_1008d5325;
          }
        }
      }
    }
  }
  if (local_60 != 0) {
    FUN_10081e1a0();
  }
LAB_1008d5338:
  FUN_10088aa50(local_50);
  return 0;
}

