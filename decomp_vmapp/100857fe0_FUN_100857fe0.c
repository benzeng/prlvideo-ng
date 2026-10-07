
bool FUN_100857fe0(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  long *local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_48 [3];
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  bVar7 = false;
  local_48[2] = lVar4;
  if (*(int *)(param_2 + 1) != 0) {
    FUN_10084ca60(param_3);
    puVar3 = (undefined8 *)FUN_10084cc20(param_3);
    bVar7 = false;
    if (puVar3 != (undefined8 *)0x0) {
      lVar4 = FUN_10084b950(param_1 + 8,param_2);
      if (lVar4 != 0) {
        puVar1 = param_1 + 2;
        param_1[0xc] = 0;
        FUN_10084b500(&local_60);
        local_60 = local_48;
        local_54 = 2;
        local_50 = 0;
        iVar2 = FUN_10084b410(param_2);
        *param_1 = iVar2 + 0x3f + ((uint)(iVar2 + 0x3f >> 0x1f) >> 0x1a) & 0xffffffc0;
        bVar6 = false;
        FUN_10084bbb0(puVar1,0);
        iVar2 = FUN_10084c000(puVar1,0x40);
        bVar7 = false;
        if (iVar2 != 0) {
          local_48[0] = *(long *)*param_2;
          local_48[1] = 0;
          local_58 = (uint)(local_48[0] != 0);
          lVar4 = FUN_100851d20(puVar3,puVar1,&local_60,param_3);
          bVar7 = bVar6;
          if (lVar4 != 0) {
            iVar2 = FUN_10084ffd0(puVar3,puVar3,0x40);
            if (iVar2 != 0) {
              if (*(int *)(puVar3 + 1) == 0) {
                iVar2 = FUN_10084bbb0(puVar3,0xffffffffffffffff);
              }
              else {
                iVar2 = FUN_100850820(puVar3,1);
              }
              if (iVar2 != 0) {
                bVar7 = false;
                iVar2 = FUN_100847f70(puVar3,0,puVar3,&local_60,param_3);
                if (iVar2 != 0) {
                  bVar7 = false;
                  uVar5 = 0;
                  if (0 < *(int *)(puVar3 + 1)) {
                    uVar5 = *(undefined8 *)*puVar3;
                  }
                  *(undefined8 *)(param_1 + 0x14) = uVar5;
                  param_1[0x16] = 0;
                  param_1[0x17] = 0;
                  FUN_10084bbb0(puVar1,0);
                  iVar2 = FUN_10084c000(puVar1,*param_1 * 2);
                  if (iVar2 != 0) {
                    iVar2 = FUN_100847f70(0,puVar1,puVar1,param_1 + 8,param_3);
                    bVar7 = iVar2 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_10084cb40(param_3);
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar4 == local_48[2]) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

