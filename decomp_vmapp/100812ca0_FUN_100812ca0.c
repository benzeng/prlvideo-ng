
undefined8 FUN_100812ca0(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  long local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_440 = 0;
  FUN_10081d010(9,0x18,"ssl_cert.c",0x2f9);
  while( true ) {
    pcVar2 = (char *)FUN_1008208f0(&local_440,param_2);
    if (pcVar2 == (char *)0x0) {
      piVar5 = ___error();
      uVar6 = 1;
      if (*piVar5 != 0) {
        piVar5 = ___error();
        FUN_100887ce0(2,10,*piVar5,"ssl_cert.c",0x312);
        uVar6 = 0;
        FUN_1008890a0(3,"OPENSSL_DIR_read(&ctx, \'",param_2,"\')");
        FUN_100887ce0(0x14,0xd7,2,"ssl_cert.c",0x314);
      }
      goto LAB_100812e14;
    }
    sVar3 = _strlen(param_2);
    sVar4 = _strlen(pcVar2);
    if (0x400 < sVar3 + 2 + sVar4) break;
    iVar1 = FUN_1008823b0(local_438,0x400,"%s/%s",param_2,pcVar2);
    if (0x3fe < iVar1 - 1U) goto LAB_100812e12;
    iVar1 = FUN_100812b40(param_1,local_438);
    uVar6 = 0;
    if (iVar1 == 0) {
LAB_100812e14:
      if (local_440 != 0) {
        FUN_1008209e0(&local_440);
      }
      FUN_10081d010(10,0x18,"ssl_cert.c",0x31d);
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar6;
    }
  }
  FUN_100887ce0(0x14,0xd7,0x10e,"ssl_cert.c",0x303);
LAB_100812e12:
  uVar6 = 0;
  goto LAB_100812e14;
}

