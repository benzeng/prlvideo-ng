
long FUN_100c6fd10(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar5 = 0;
  local_28 = lVar1;
  iVar3 = FUN_100c8d290(&local_80,0,0,0,param_1);
  if (iVar3 != 0) {
    lVar5 = FUN_100c6d320();
    if (lVar5 == 0) {
      FUN_100c62ee0(6,0x6f,0x41,"evp_pkey.c",0x4f);
    }
    else {
      uVar4 = FUN_100bf7220(local_80);
      iVar3 = FUN_100c6d3b0(lVar5,uVar4);
      if (iVar3 == 0) {
        FUN_100c62ee0(6,0x6f,0x76,"evp_pkey.c",0x54);
        FUN_100c74920(local_78,0x50,local_80);
        FUN_100c642a0(2,"TYPE=",local_78);
      }
      else {
        pcVar2 = *(code **)(*(long *)(lVar5 + 0x10) + 0x40);
        if (pcVar2 == (code *)0x0) {
          uVar6 = 0x90;
          uVar7 = 0x60;
        }
        else {
          iVar3 = (*pcVar2)(lVar5,param_1);
          if (iVar3 != 0) goto LAB_100c6fe4c;
          uVar6 = 0x91;
          uVar7 = 0x5c;
        }
        FUN_100c62ee0(6,0x6f,uVar6,"evp_pkey.c",uVar7);
      }
      FUN_100c6d8c0(lVar5);
    }
    lVar5 = 0;
  }
LAB_100c6fe4c:
  if (lVar1 == local_28) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

