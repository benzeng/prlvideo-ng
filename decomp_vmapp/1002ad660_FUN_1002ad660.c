
undefined8 FUN_1002ad660(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  int local_b8 [34];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c0 = 0;
  lVar3 = 0;
  lVar4 = 1;
  local_30 = lVar1;
  if (*(char *)(param_1 + 0x844) != '\0') {
    do {
      if (param_2[lVar4 + -1] == 0) {
        lVar3 = lVar4 + -1;
        iVar2 = (int)lVar3;
        break;
      }
      local_b8[lVar4 + -1] = param_2[lVar4 + -1];
      if (param_2[lVar4] == 0) {
        iVar2 = (int)(lVar3 + 1);
        lVar3 = lVar3 + 1;
        break;
      }
      local_b8[lVar4] = param_2[lVar4];
      if (param_2[lVar4 + 1] == 0) {
        iVar2 = (int)(lVar3 + 2);
        lVar3 = lVar3 + 2;
        break;
      }
      local_b8[lVar4 + 1] = param_2[lVar4 + 1];
      lVar3 = lVar3 + 3;
      uVar5 = lVar4 + 2;
      iVar2 = (int)lVar3;
      lVar4 = lVar4 + 3;
    } while (uVar5 < 0x1e);
    local_b8[lVar3] = 0x60;
    local_b8[iVar2 + 1] = 0;
    param_2 = local_b8;
  }
  iVar2 = _CGLChoosePixelFormat(param_2,&local_c0,local_c4);
  uVar6 = local_c0;
  if ((iVar2 != 0) && (uVar6 = 0, *(long *)(param_1 + 0x868) != 0)) {
    FUN_1008e3970("","LocalDevices",0,"Failed to CGLChoosePixelFormat (%u)",iVar2);
    uVar6 = 0;
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

