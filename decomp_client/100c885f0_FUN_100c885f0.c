
uint FUN_100c885f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char *local_1050 [3];
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar4 = FUN_100c88200();
  if (lVar4 == 0) {
    FUN_100c62ee0(0xd,0xd5,0xcf,"asn_mime.c",0x238);
    uVar3 = 0;
  }
  else {
    local_1050[0] = "content-type";
    iVar2 = FUN_100c60360(lVar4,local_1050);
    if (-1 < iVar2) {
      lVar5 = FUN_100c60820(lVar4,iVar2);
      if ((lVar5 != 0) && (*(char **)(lVar5 + 8) != (char *)0x0)) {
        iVar2 = _strcmp(*(char **)(lVar5 + 8),"text/plain");
        if (iVar2 == 0) {
          FUN_100c60790(lVar4,FUN_100c884e0);
          uVar3 = FUN_100c588a0(param_1,local_1038,0x1000);
          if (0 < (int)uVar3) {
            do {
              FUN_100c58980(param_2,local_1038,uVar3);
              uVar3 = FUN_100c588a0(param_1,local_1038,0x1000);
            } while (0 < (int)uVar3);
          }
          uVar3 = uVar3 >> 0x1f ^ 1;
        }
        else {
          FUN_100c62ee0(0xd,0xd5,0xcd,"asn_mime.c",0x241);
          uVar3 = 0;
          FUN_100c642a0(2,"type: ",*(undefined8 *)(lVar5 + 8));
          FUN_100c60790(lVar4,FUN_100c884e0);
        }
        goto LAB_100c8871c;
      }
    }
    FUN_100c62ee0(0xd,0xd5,0xce,"asn_mime.c",0x23c);
    FUN_100c60790(lVar4,FUN_100c884e0);
    uVar3 = 0;
  }
LAB_100c8871c:
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

