
void FUN_100c64f80(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  undefined1 local_1160 [16];
  uint local_1150;
  undefined4 local_114c;
  char *local_1148;
  undefined8 local_1140;
  char local_1138 [4096];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100bf2be0(local_1160);
  uVar2 = FUN_100bf2c80(local_1160);
  do {
    lVar3 = FUN_100c63640(&local_1140,&local_114c,&local_1148,&local_1150);
    if (lVar3 == 0) break;
    FUN_100c63950(lVar3,local_138,0x100);
    pcVar5 = local_1148;
    if ((local_1150 & 2) == 0) {
      pcVar5 = "";
    }
    FUN_100c5d5b0(local_1138,0x1000,"%lu:%s:%s:%d:%s\n",uVar2,local_138,local_1140,local_114c,pcVar5
                 );
    sVar4 = _strlen(local_1138);
    iVar1 = (*param_1)(local_1138,sVar4,param_2);
  } while (0 < iVar1);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

