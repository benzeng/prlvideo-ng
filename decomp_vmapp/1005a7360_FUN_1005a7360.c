
undefined4
FUN_1005a7360(long *param_1,undefined8 param_2,undefined1 param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int local_4c;
  undefined1 local_48 [16];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar4 = (long *)param_1[0xc];
  local_38 = lVar6;
  if (plVar4 != param_1 + 0xb) {
    local_4c = 0;
    uVar5 = 0;
    do {
      cVar1 = (**(code **)(*(long *)plVar4[2] + 0x2a8))((long *)plVar4[2],param_2);
      if (cVar1 != '\0') {
        local_4c = local_4c + 1;
        (**(code **)(*(long *)plVar4[2] + 0x2b0))(local_48);
        iVar2 = FUN_1007ea6f0(param_2,local_48);
        uVar5 = uVar5 + (iVar2 == 0);
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != param_1 + 0xb);
    if ((uVar5 != 0) && (param_1[0xd] != (ulong)uVar5)) {
      FUN_1008e3970("","vdisk",0,"Some disks (%zu) doesn\'t have \'current\' image");
      uVar3 = 0x80021008;
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1005a7496;
    }
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (local_4c != 0) {
      uVar3 = (**(code **)(*param_1 + 400))(param_1,4,param_2,param_3);
      goto LAB_1005a7496;
    }
  }
  uVar3 = 0;
  if (param_4 != (code *)0x0) {
    (*param_4)(0x1000,0x3ed,param_5);
  }
LAB_1005a7496:
  if (lVar6 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

