
undefined4 FUN_1004f0ab0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  char local_68 [48];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar2 = _open(param_1,0x110);
  uVar4 = 0xffffffff;
  if (iVar2 == -1) goto LAB_1004f0b4b;
  lVar5 = FUN_1004f0990(iVar2,local_68,0x26);
  if (lVar5 < 0x26) {
LAB_1004f0b20:
    piVar6 = ___error();
    *piVar6 = 0x16;
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = _strncmp("{EC3517F2-CD97-4b20-A2F9-C8F326BB206A}",local_68,0x26);
    if (iVar3 != 0) goto LAB_1004f0b20;
    uVar4 = FUN_1004f0990(iVar2,param_2,param_3);
  }
  _close(iVar2);
LAB_1004f0b4b:
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

