
ulong FUN_1004f0990(int param_1,void *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  undefined8 uStack_450;
  char local_448 [1040];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar8 = 0x402;
  if (param_3 + 2 < 0x403) {
    sVar8 = param_3 + 2;
  }
  uStack_450 = (undefined *)0x1004f09dc;
  local_38 = lVar2;
  uVar3 = _read(param_1,local_448,sVar8);
  lVar7 = 0;
  uVar9 = uVar3;
  if ((long)uVar3 < 1) goto LAB_1004f0a8d;
  do {
    if ((long)uVar3 <= lVar7) break;
    pcVar1 = local_448 + lVar7;
    lVar7 = lVar7 + 1;
  } while (*pcVar1 != '\n');
  iVar5 = (int)lVar7;
  iVar6 = iVar5;
  if (0 < iVar5) {
    if (local_448[(long)iVar5 + -1] == '\n') {
      iVar6 = 0;
      if (iVar5 < 2) goto LAB_1004f0a3c;
      iVar6 = iVar5 + -1;
    }
    if (local_448[(long)iVar6 + -1] == '\r') {
      iVar6 = iVar6 + -1;
    }
  }
LAB_1004f0a3c:
  uVar9 = (ulong)iVar6;
  if (param_3 < uVar9) {
    uStack_450 = (undefined *)0x1004f0a57;
    _lseek(param_1,-uVar3,1);
    uStack_450 = (undefined *)0x1004f0a5c;
    piVar4 = ___error();
    *piVar4 = 0x3f;
    uVar9 = 0xffffffffffffffff;
  }
  else {
    uStack_450 = (undefined *)0x1004f0a7b;
    _lseek(param_1,(long)iVar5 - uVar3,1);
    uStack_450 = (undefined *)0x1004f0a8d;
    _memcpy(param_2,local_448,uVar9);
  }
LAB_1004f0a8d:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    uStack_450 = &UNK_1004f0aad;
    ___stack_chk_fail();
  }
  return uVar9;
}

