
void FUN_10070f090(code *param_1,uint param_2,undefined8 param_3,pthread_mutex_t *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long local_1458;
  long local_1450;
  int local_1448 [2];
  pthread_mutex_t *local_1440;
  uint local_1438 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = FUN_10070f510(local_1438,0x400);
  if (0 < iVar2) {
    if (param_2 != 0xffffffff) {
      lVar6 = 0;
      do {
        if (iVar2 + (int)lVar6 == 0) {
          if ((local_1438[0] != param_2) || (iVar2 == 0)) goto LAB_10070f2a4;
          goto LAB_10070f130;
        }
        lVar1 = lVar6 + -1;
        lVar6 = lVar6 + -1;
      } while (local_1438[iVar2 + lVar1] != param_2);
      local_1438[0] = param_2;
      iVar2 = 1;
    }
LAB_10070f130:
    do {
      iVar2 = iVar2 + -1;
      uVar7 = 0;
      do {
        uVar4 = local_1438[iVar2];
        uVar5 = FUN_10070f6b0(uVar4);
        _snprintf(local_438,0x3ff,"prf%u_%u",(ulong)uVar4,uVar7,uVar5);
        iVar3 = FUN_10070f740(local_438,0);
        if (-1 < iVar3) {
          local_1448[0] = 0;
          local_1458 = (long)iVar3;
          local_1440 = param_4;
          _pthread_mutex_lock(param_4);
          iVar3 = FUN_10070eb60(iVar3,&local_1450,local_1448,0);
          if (iVar3 != 0) {
            local_1458 = -1;
          }
          _pthread_mutex_unlock(local_1440);
          if (local_1448[0] == 0) {
            if (local_1450 != 0) {
              FUN_10070ee10(&local_1458,local_1440);
            }
          }
          else {
            uVar4 = (*param_1)(&local_1458,param_3);
            if ((uVar4 & 0x80) == 0) {
              if (local_1450 != 0) {
                FUN_10070ee10(&local_1458,local_1440);
              }
            }
            else {
              local_1458 = -1;
              local_1450 = 0;
              local_1448[0] = 0;
            }
            if ((uVar4 & 1) != 0) break;
          }
        }
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar4;
      } while (uVar4 < 5);
    } while (iVar2 != 0);
  }
LAB_10070f2a4:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

