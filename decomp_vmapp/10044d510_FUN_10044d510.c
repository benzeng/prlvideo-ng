
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10044d510(long param_1,int *param_2,undefined8 param_3,int param_4,undefined4 param_5,
             long *param_6)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined1 local_19c8 [6544];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  if (iVar2 < 0x14) {
    cVar7 = '\x01';
    switch(iVar2) {
    case 4:
      cVar7 = '\x02';
      uVar6 = 3;
      break;
    case 5:
      cVar7 = '\x02';
      uVar6 = 0;
      break;
    case 6:
      cVar7 = '\0';
      uVar6 = 3;
      break;
    case 7:
      break;
    default:
      goto switchD_10044d567_default;
    }
  }
  else {
    if (iVar2 == 0x14) {
      cVar7 = '\x03';
      goto switchD_10044d567_caseD_7;
    }
    if (iVar2 == 0x15) {
      cVar7 = '\x04';
      goto switchD_10044d567_caseD_7;
    }
switchD_10044d567_default:
    cVar7 = (iVar2 == 0x16) * '\x04' + '\x01';
  }
switchD_10044d567_caseD_7:
  FUN_10044d980(local_19c8,param_5,cVar7,uVar6);
  FUN_10044dd60(local_19c8,(param_2[2] + 1) - *param_2,(param_2[3] + 1) - param_2[1]);
  iVar2 = ((param_2[3] + 1) - param_2[1]) * param_4;
  uVar8 = *(uint *)((long)param_6 + 0xc);
  uVar3 = iVar2 + 0x8000 + uVar8;
  if (*(uint *)(param_6 + 2) < uVar3) {
    uVar4 = (ulong)((double)uVar3 * _DAT_100b42cf8);
    pvVar5 = operator_new__(uVar4 & 0xffffffff);
    pvVar1 = (void *)*param_6;
    _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_6 + 1));
    if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_6 + 0x14) != '\0')) {
      operator_delete__(pvVar1);
      uVar8 = *(uint *)((long)param_6 + 0xc);
    }
    *param_6 = (long)pvVar5;
    *(int *)(param_6 + 2) = (int)uVar4;
    *(undefined1 *)((long)param_6 + 0x14) = 1;
  }
  uVar3 = uVar8 + iVar2 + 0x8000;
  if (*(uint *)(param_6 + 1) < uVar3) {
    *(uint *)(param_6 + 1) = uVar3;
    uVar8 = *(uint *)((long)param_6 + 0xc);
  }
  FUN_10044de00(local_19c8,(ulong)uVar8 + *param_6);
  FUN_10044de20(local_19c8,param_3,param_4,(param_2[3] + 1) - param_2[1]);
  FUN_10044deb0(local_19c8);
  iVar2 = FUN_10044de00(local_19c8,0,0);
  FUN_10044dee0(local_19c8);
  uVar8 = iVar2 + uVar8;
  if (uVar8 <= *(uint *)(param_6 + 2)) {
    *(uint *)((long)param_6 + 0xc) = uVar8;
    *(uint *)(param_6 + 1) = uVar8;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),
                  uVar8 <= *(uint *)(param_6 + 2));
}

