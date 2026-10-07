
bool FUN_1002933c0(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long local_88 [2];
  undefined4 local_78;
  int local_6c;
  undefined1 local_68 [32];
  undefined1 local_48;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
  undefined1 uStack_41;
  uint uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = param_3 * 0x800;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  local_38 = lVar1;
  FUN_10008d2d0(local_88,param_4,iVar4);
  if (local_88[0] == 0) {
    bVar3 = false;
    FUN_1008e3970("","LocalDevices",0,"[DVDROM:sata] Data mapping");
  }
  else {
    uStack_47 = 0;
    uStack_42 = 0;
    local_48 = 0x28;
    uStack_46 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
                param_2 << 0x18;
    uStack_41 = (undefined1)(param_3 >> 8);
    uStack_40 = param_3 & 0xff;
    iVar2 = (**(code **)(**(long **)(param_1 + 0x1090) + 0x20))
                      (*(long **)(param_1 + 0x1090),&local_48,0xc,local_88[0],iVar4,local_88[0],
                       iVar4,local_68,0x12,1,&local_6c);
    bVar3 = local_6c == iVar4 && iVar2 == 0;
  }
  FUN_10008d3f0(local_88);
  if (lVar1 == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

