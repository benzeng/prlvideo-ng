
undefined8
FUN_10044d740(long param_1,int *param_2,long *param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 local_19c0 [6536];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  if (iVar4 < 0x14) {
    cVar6 = '\x01';
    switch(iVar4) {
    case 4:
      cVar6 = '\x02';
      uVar5 = 3;
      break;
    case 5:
      cVar6 = '\x02';
      uVar5 = 0;
      break;
    case 6:
      cVar6 = '\0';
      uVar5 = 3;
      break;
    case 7:
      break;
    default:
      goto switchD_10044d79b_default;
    }
  }
  else {
    if (iVar4 == 0x14) {
      cVar6 = '\x03';
      goto switchD_10044d79b_caseD_7;
    }
    if (iVar4 == 0x15) {
      cVar6 = '\x04';
      uVar5 = 0;
      goto switchD_10044d79b_caseD_7;
    }
switchD_10044d79b_default:
    cVar6 = (iVar4 == 0x16) * '\x04' + '\x01';
  }
switchD_10044d79b_caseD_7:
  lVar3 = param_3[1];
  uVar1 = *(uint *)((long)param_3 + 0xc);
  lVar2 = *param_3;
  FUN_10045aff0(local_19c0,param_6,cVar6,uVar5);
  FUN_10045b300(local_19c0,(param_2[2] + 1) - *param_2,(param_2[3] + 1) - param_2[1]);
  FUN_10045b390(local_19c0,(ulong)uVar1 + lVar2,(int)lVar3 - uVar1);
  FUN_10045b3b0(local_19c0,param_4,param_5,(param_2[3] + 1) - param_2[1]);
  iVar4 = FUN_10045b390(local_19c0,0,0);
  if (iVar4 + uVar1 <= *(uint *)(param_3 + 1)) {
    *(uint *)((long)param_3 + 0xc) = iVar4 + uVar1;
  }
  FUN_10045b420(local_19c0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),1);
}

