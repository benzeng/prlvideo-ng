
undefined8 FUN_1008dc750(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_70 [2];
  long local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  
  local_68 = 0;
  uVar1 = FUN_100821ab0(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_100821930(uVar1);
  lVar4 = FUN_100890b60(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_10088a650(local_58);
  iVar2 = FUN_1008db790(param_1,0x34,0xffffffff);
  if (iVar2 < 0) {
    lVar5 = FUN_1008b94d0(0,0);
    if ((lVar5 != 0) &&
       (iVar2 = FUN_1008db810(param_1,0x34,*(undefined4 *)(lVar5 + 4),lVar5,0xffffffff), 0 < iVar2))
    {
      FUN_10089a790(lVar5);
      goto LAB_1008dc7f3;
    }
    FUN_10089a790(lVar5);
    uVar6 = 0x67;
    uVar3 = 0x41;
    uVar7 = 0x1b8;
LAB_1008dc951:
    FUN_100887ce0(0x2e,uVar6,uVar3,"cms_sd.c",uVar7);
  }
  else {
LAB_1008dc7f3:
    iVar2 = FUN_1008977b0(local_58,&local_60,lVar4,0,*(undefined8 *)(param_1 + 0x40));
    if (0 < iVar2) {
      iVar2 = FUN_1008964c0(local_60,0xffffffff,8,0xb,0,param_1);
      if (iVar2 < 1) {
        uVar6 = 0x97;
        uVar3 = 0x6e;
        uVar7 = 0x297;
        goto LAB_1008dc951;
      }
      iVar2 = FUN_1008a52d0(*(undefined8 *)(param_1 + 0x18),&local_68,&DAT_100be8878);
      if (local_68 == 0) goto LAB_1008dc964;
      iVar2 = FUN_10088a910(local_58,local_68,(long)iVar2);
      if ((0 < iVar2) && (iVar2 = FUN_100897940(local_58,0,local_70), 0 < iVar2)) {
        FUN_10081e1a0(local_68);
        local_68 = FUN_10081ddd0(local_70[0],"cms_sd.c",0x2a4);
        if (local_68 == 0) goto LAB_1008dc964;
        iVar2 = FUN_100897940(local_58,local_68,local_70);
        if (0 < iVar2) {
          iVar2 = FUN_1008964c0(local_60,0xffffffff,8,0xb,1,param_1);
          if (0 < iVar2) {
            FUN_10088aa50(local_58);
            FUN_1008afdb0(*(undefined8 *)(param_1 + 0x28),local_68,local_70[0]);
            return 1;
          }
          uVar6 = 0x97;
          uVar3 = 0x6e;
          uVar7 = 0x2ac;
          goto LAB_1008dc951;
        }
      }
    }
  }
  if (local_68 != 0) {
    FUN_10081e1a0();
  }
LAB_1008dc964:
  FUN_10088aa50(local_58);
  return 0;
}

