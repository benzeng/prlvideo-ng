
void FUN_10010e210(void)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char local_258 [32];
  int local_238 [128];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  iVar1 = _CFSocketGetNative();
  piVar3 = local_238;
  sVar2 = _recv(iVar1,piVar3,0x200,0x80);
  iVar1 = (int)sVar2;
  if (0 < iVar1) {
    iVar6 = 0;
    bVar5 = false;
    do {
      if (iVar1 < *piVar3 + iVar6) break;
      if ((piVar3[5] & 0xfffffffeU) == 0xc) {
        local_258[0] = '\0';
        local_258[1] = '\0';
        local_258[2] = '\0';
        local_258[3] = '\0';
        local_258[4] = '\0';
        local_258[5] = '\0';
        local_258[6] = '\0';
        local_258[7] = '\0';
        local_258[8] = '\0';
        local_258[9] = '\0';
        local_258[10] = '\0';
        local_258[0xb] = '\0';
        local_258[0xc] = '\0';
        local_258[0xd] = '\0';
        local_258[0xe] = '\0';
        local_258[0xf] = '\0';
        local_258[0x10] = 0;
        _snprintf(local_258,0x10,"%s%d",piVar3 + 8,(ulong)(uint)piVar3[7]);
        bVar5 = true;
        if (0 < DAT_1011b55f8) {
          pcVar4 = "ON";
          if (piVar3[5] != 0xd) {
            pcVar4 = "OFF";
          }
          FUN_1008e3970("","vm",1,"Link Status on %s changed; now %s",local_258,pcVar4);
        }
      }
      iVar6 = iVar6 + *piVar3;
      piVar3 = (int *)((long)local_238 + (long)iVar6);
    } while (iVar6 < iVar1);
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((bVar5) && (DAT_1011c3800 != 0)) {
      FUN_1002f01e0();
    }
  }
  if (lVar7 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

