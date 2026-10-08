
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94c30(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  iVar2 = FUN_100b93810();
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar5 = 0xa28f;
  uVar4 = 2;
  ___snprintf_chk(&local_68,0x3f,0,0x40,"%d.%d.%d",0xc,2,0xa28f);
  pcVar3 = "%s for Mac";
  if ((iVar2 != 5) && (iVar2 != 8)) {
    pcVar3 = "%s for Unix/Linux";
  }
  _DAT_1023142f0 = 0;
  uRam00000001023142f8 = 0;
  _DAT_1023142e0 = 0;
  uRam00000001023142e8 = 0;
  _DAT_1023142d0 = 0;
  uRam00000001023142d8 = 0;
  _DAT_1023142c0 = 0;
  uRam00000001023142c8 = 0;
  ___snprintf_chk(&DAT_1023142c0,0x40,0,0x40,pcVar3,&local_68,uVar4,uVar5);
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

