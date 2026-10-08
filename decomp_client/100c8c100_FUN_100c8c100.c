
undefined8
FUN_100c8c100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_58 [32];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_80 = local_58;
  local_88[0] = 0x20;
  local_6c = 4;
  local_70 = param_4;
  local_68 = param_3;
  local_38 = lVar1;
  FUN_100c76820(local_88);
  uVar7 = 0;
  iVar2 = FUN_100c83760(local_88,0);
  iVar3 = FUN_100c8b710(&local_70,0,4,0);
  uVar4 = FUN_100c8aea0(1,iVar3 + iVar2,0x10);
  puVar6 = (undefined4 *)FUN_100c8b280();
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = 0;
    iVar5 = FUN_100c8b0b0(puVar6,0,uVar4);
    if (iVar5 == 0) {
      FUN_100c8b2f0(puVar6);
    }
    else {
      *puVar6 = uVar4;
      local_90 = *(undefined8 *)(puVar6 + 2);
      uVar7 = 1;
      FUN_100c8ad50(&local_90,1,iVar3 + iVar2,0x10,0);
      FUN_100c83760(local_88,&local_90);
      FUN_100c8b710(&local_70,&local_90,4,0);
      FUN_100c76e50(param_1,0x10,puVar6);
    }
  }
  if (lVar1 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

