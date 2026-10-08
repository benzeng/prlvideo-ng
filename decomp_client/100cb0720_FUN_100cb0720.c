
undefined8 FUN_100cb0720(long param_1)

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
  uVar1 = FUN_100bf7220(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_100bf70a0(uVar1);
  lVar4 = FUN_100c6bd60(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_100c65850(local_50);
  iVar2 = FUN_100c72d30(local_50,&local_58,lVar4,0,*(undefined8 *)(param_1 + 0x38));
  if (0 < iVar2) {
    iVar2 = FUN_100c71a40(local_58,0xffffffff,8,5,0,param_1);
    if (iVar2 < 1) {
      uVar3 = 0x3a2;
LAB_100cb08a5:
      FUN_100c62ee0(0x21,0x8b,0x98,"pk7_doit.c",uVar3);
    }
    else {
      iVar2 = FUN_100c80850(*(undefined8 *)(param_1 + 0x18),&local_60,&DAT_102256430);
      if (local_60 == 0) goto LAB_100cb08b8;
      iVar2 = FUN_100c65b10(local_50,local_60,(long)iVar2);
      if (0 < iVar2) {
        FUN_100bf3910(local_60);
        local_60 = 0;
        iVar2 = FUN_100c72ec0(local_50,0,local_68);
        if (0 < iVar2) {
          local_60 = FUN_100bf3540(local_68[0],"pk7_doit.c",0x3b0);
          if (local_60 == 0) goto LAB_100cb08b8;
          iVar2 = FUN_100c72ec0(local_50,local_60,local_68);
          if (0 < iVar2) {
            iVar2 = FUN_100c71a40(local_58,0xffffffff,8,5,1,param_1);
            if (0 < iVar2) {
              FUN_100c65c50(local_50);
              FUN_100c8b330(*(undefined8 *)(param_1 + 0x28),local_60,local_68[0]);
              return 1;
            }
            uVar3 = 0x3b8;
            goto LAB_100cb08a5;
          }
        }
      }
    }
  }
  if (local_60 != 0) {
    FUN_100bf3910();
  }
LAB_100cb08b8:
  FUN_100c65c50(local_50);
  return 0;
}

