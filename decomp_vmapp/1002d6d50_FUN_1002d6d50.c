
undefined4
FUN_1002d6d50(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
             undefined2 param_5,undefined8 param_6,uint *param_7,uint *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_978 [2368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = *param_7;
  iVar2 = FUN_1007d87f0();
  if (*(int *)(param_1 + 3) == 0) {
    if (DAT_1011c568c < 1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
      uVar7 = FUN_1002da490(param_2,param_3,param_4,param_5,uVar5 & 0xffff);
      FUN_1008e3970("","USB",0,"[%s:%02x.00c] Control (%s): device is not valid",param_1 + 0x107,
                    uVar3,uVar7);
      uVar3 = 0xffffffff;
    }
  }
  else {
    puVar9 = param_7;
    puVar6 = param_8;
    uVar3 = (**(code **)(*(long *)*param_1 + 0x58))
                      ((long *)*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (DAT_1011c568c != 0) {
      iVar4 = FUN_1007d87f0();
      if (0 < DAT_1011c568c) {
        uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
        puVar6 = (uint *)FUN_1002da490(param_2,param_3,param_4,param_5,uVar5 & 0xffff);
        puVar9 = param_8;
        FUN_1008e3970("","USB",0,
                      "[%s:%02x.00c] Control (%p) (%s) -> (uSize:%u  SysError:%08x time:%u)",
                      param_1 + 0x107,uVar1,param_8,puVar6,*param_7,uVar3,iVar4 - iVar2);
      }
      if (param_8 == (uint *)0x0) {
        if (DAT_1011c568c < 1) goto LAB_1002d6ffa;
        uVar5 = *param_7;
      }
      else {
        uVar5 = *param_7;
        if ((uVar5 == 0xffffffff) || (DAT_1011c568c < 1)) goto LAB_1002d6ffa;
      }
      uVar8 = 0x400;
      if (uVar5 < 0x400) {
        uVar8 = uVar5;
      }
      FUN_1002da020(local_978,0x940,param_6,uVar8);
      FUN_1008e3970("","USB",0,"[%s] Control Data:%s",param_1 + 0x107,local_978,puVar9,puVar6);
    }
  }
LAB_1002d6ffa:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

