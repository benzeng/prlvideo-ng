
undefined8 FUN_100cb8f90(long param_1)

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
  uVar1 = FUN_100bf7220(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_100bf70a0(uVar1);
  lVar4 = FUN_100c6bd60(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_100c65850(local_58);
  iVar2 = FUN_100cb7fd0(param_1,0x34,0xffffffff);
  if (iVar2 < 0) {
    lVar5 = FUN_100c94a50(0,0);
    if ((lVar5 != 0) &&
       (iVar2 = FUN_100cb8050(param_1,0x34,*(undefined4 *)(lVar5 + 4),lVar5,0xffffffff), 0 < iVar2))
    {
      FUN_100c75d10(lVar5);
      goto LAB_100cb9033;
    }
    FUN_100c75d10(lVar5);
    uVar6 = 0x67;
    uVar3 = 0x41;
    uVar7 = 0x1b8;
LAB_100cb9191:
    FUN_100c62ee0(0x2e,uVar6,uVar3,"cms_sd.c",uVar7);
  }
  else {
LAB_100cb9033:
    iVar2 = FUN_100c72d30(local_58,&local_60,lVar4,0,*(undefined8 *)(param_1 + 0x40));
    if (0 < iVar2) {
      iVar2 = FUN_100c71a40(local_60,0xffffffff,8,0xb,0,param_1);
      if (iVar2 < 1) {
        uVar6 = 0x97;
        uVar3 = 0x6e;
        uVar7 = 0x297;
        goto LAB_100cb9191;
      }
      iVar2 = FUN_100c80850(*(undefined8 *)(param_1 + 0x18),&local_68,&DAT_102258e88);
      if (local_68 == 0) goto LAB_100cb91a4;
      iVar2 = FUN_100c65b10(local_58,local_68,(long)iVar2);
      if ((0 < iVar2) && (iVar2 = FUN_100c72ec0(local_58,0,local_70), 0 < iVar2)) {
        FUN_100bf3910(local_68);
        local_68 = FUN_100bf3540(local_70[0],"cms_sd.c",0x2a4);
        if (local_68 == 0) goto LAB_100cb91a4;
        iVar2 = FUN_100c72ec0(local_58,local_68,local_70);
        if (0 < iVar2) {
          iVar2 = FUN_100c71a40(local_60,0xffffffff,8,0xb,1,param_1);
          if (0 < iVar2) {
            FUN_100c65c50(local_58);
            FUN_100c8b330(*(undefined8 *)(param_1 + 0x28),local_68,local_70[0]);
            return 1;
          }
          uVar6 = 0x97;
          uVar3 = 0x6e;
          uVar7 = 0x2ac;
          goto LAB_100cb9191;
        }
      }
    }
  }
  if (local_68 != 0) {
    FUN_100bf3910();
  }
LAB_100cb91a4:
  FUN_100c65c50(local_58);
  return 0;
}

