
undefined8 FUN_1005fa080(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  plVar2 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar2 + 0x2b0))(local_48,plVar2);
  FUN_1005b1b60(plVar2,local_48);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x130))(local_58);
  uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x2f8))();
  cVar3 = FUN_1005b15b0(uVar5,local_58,uVar4);
  uVar6 = 0x80021000;
  if (cVar3 != '\0') {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_68);
    FUN_1005b2160(uVar5,local_68);
    FUN_1005b1e80(uVar5);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_78);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x2f8))();
    uVar6 = 0;
    FUN_1005b15b0(uVar5,local_78,uVar4);
  }
  if (lVar1 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

