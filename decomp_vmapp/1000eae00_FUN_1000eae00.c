
void FUN_1000eae00(byte *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char local_118 [214];
  char local_42 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = param_2 & 0xf;
  uVar8 = 0;
  if (param_2 >> 4 != 0) {
    uVar8 = 0;
    pbVar5 = param_1;
    do {
      local_118[0] = '\0';
      lVar6 = uVar8 << 4;
      lVar2 = 0x10;
      pbVar4 = pbVar5;
      do {
        _snprintf(local_42,10,"%02x ",(ulong)*pbVar4);
        _strncat(local_118,local_42,3);
        pbVar4 = pbVar4 + 1;
        lVar2 = lVar2 + -1;
        lVar7 = 0;
      } while (lVar2 != 0);
      do {
        _snprintf(local_42,10,"%c",(ulong)pbVar5[lVar7]);
        _strncat(local_118,local_42,1);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x10);
      uVar8 = uVar8 + 1;
      FUN_1008e3970("","vm",0,"data [%04u-%04u]: %s",lVar6,(int)uVar8 << 4,local_118);
      pbVar5 = pbVar5 + 0x10;
    } while (uVar8 < param_2 >> 4);
    uVar8 = (ulong)((param_2 >> 4) << 4);
  }
  if (uVar1 != 0) {
    local_118[0] = '\0';
    pbVar5 = param_1 + uVar8;
    uVar3 = uVar1;
    do {
      _snprintf(local_42,10,"%02x ",(ulong)*pbVar5);
      _strncat(local_118,local_42,3);
      pbVar5 = pbVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    param_2 = param_2 & 0xf;
    param_1 = param_1 + uVar8;
    do {
      _snprintf(local_42,10,"%c",(ulong)*param_1);
      _strncat(local_118,local_42,1);
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    FUN_1008e3970("","vm",0,"data [%04u-%04u]: %s",uVar8,uVar1 | (uint)uVar8,local_118);
  }
  FUN_1008e3970("","vm",0,"---------------------");
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

