
void FUN_100b9c040(long param_1,int param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = 6;
  if (param_2 != 5) {
    iVar3 = param_2;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  local_38 = lVar2;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    uVar4 = *(uint *)(param_1 + 0xec) & 0xfff7ffff;
  }
  else {
    ___snprintf_chk(param_1 + 0x58,0x7e,0,0xffffffffffffffff,"%s");
    uVar4 = *(uint *)(param_1 + 0xec) | 0x80000;
  }
  *(uint *)(param_1 + 0xec) = uVar4;
  *(uint *)(param_1 + 0xec) = uVar4 | param_4;
  if (iVar1 != param_2) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    local_48 = 0;
    local_98 = *(undefined8 *)(param_1 + 0x50);
    ___snprintf_chk(&uStack_90,0x50,0,0x50,"%s",param_1);
    FUN_100b93750(DAT_1022cf500,3,0x58,&local_98);
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

