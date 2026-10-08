
undefined8 FUN_100d77340(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_8a;
  char local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar3 = _FSPathMakeRefWithOptions(param_1,1,local_88,0);
  uVar5 = 0xc;
  if ((iVar3 == -0x2b) || (iVar3 == -0x23)) goto LAB_100d7743d;
  if (iVar3 == 0) {
    sVar2 = _FSIsAliasFile(local_88,&local_89,&local_8a);
    if (sVar2 == 0) {
      uVar5 = 0;
      *(bool *)param_2 = local_89 != '\0' && local_8a == '\0';
      goto LAB_100d7743d;
    }
    uVar5 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_100d7743d;
    iVar3 = (int)sVar2;
    pcVar4 = "FSIsAliasFile() err %i, aliasPath=\"%s\"";
  }
  else {
    uVar5 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_100d7743d;
    pcVar4 = "FSPathMakeRefWithOptions() err %i, aliasPath=\"%s\"";
  }
  uVar5 = 3;
  FUN_100df99c0("","MacAlias",1,pcVar4,iVar3,param_1);
LAB_100d7743d:
  if (lVar1 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

