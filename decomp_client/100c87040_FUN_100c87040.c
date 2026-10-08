
undefined8 FUN_100c87040(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar8;
  uVar4 = FUN_100c5b5e0();
  lVar5 = FUN_100c58530(uVar4);
  uVar4 = 0;
  if (lVar5 != 0) {
    local_440 = lVar5;
    uVar4 = FUN_100c591b0(lVar5,param_2);
    if ((param_3 & 0x80) == 0) {
      if ((param_3 & 1) != 0) {
        FUN_100c5c0c0(uVar4,"Content-Type: text/plain\r\n\r\n");
      }
      iVar3 = FUN_100c58b50(param_1,local_438,0x400);
      while (0 < iVar3) {
        pcVar6 = local_438 + (long)iVar3 + -1;
        bVar2 = false;
        do {
          bVar1 = true;
          if ((*pcVar6 != '\n') && (iVar7 = iVar3, bVar1 = bVar2, *pcVar6 != '\r')) break;
          bVar2 = bVar1;
          iVar7 = iVar3 + -1;
          pcVar6 = pcVar6 + -1;
          bVar1 = 1 < iVar3;
          iVar3 = iVar7;
        } while (bVar1);
        if (iVar7 != 0) {
          FUN_100c58980(uVar4,local_438);
        }
        if (bVar2) {
          FUN_100c58980(uVar4,"\r\n",2);
        }
        iVar3 = FUN_100c58b50(param_1,local_438,0x400);
      }
    }
    else {
      iVar3 = FUN_100c588a0(param_1,local_438,0x400);
      if (0 < iVar3) {
        do {
          FUN_100c58980(uVar4,local_438,iVar3);
          iVar3 = FUN_100c588a0(param_1,local_438,0x400);
        } while (0 < iVar3);
      }
    }
    FUN_100c58d60(uVar4,0xb,0,0);
    FUN_100c592a0(uVar4);
    FUN_100c586e0(local_440);
    uVar4 = 1;
    lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

