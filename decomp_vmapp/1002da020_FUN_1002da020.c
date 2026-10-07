
int FUN_1002da020(undefined1 *param_1,int param_2,long param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined1 local_68 [32];
  undefined1 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  *param_1 = 0;
  uVar2 = 0x100;
  if ((int)param_4 < 0x101) {
    uVar2 = param_4;
  }
  iVar5 = 0;
  if (0 < (int)uVar2) {
    uVar2 = 0xfffffeff;
    if (-0x102 < (int)~param_4) {
      uVar2 = ~param_4;
    }
    uVar6 = 0;
    iVar5 = 0;
    do {
      bVar1 = *(byte *)(param_3 + uVar6);
      iVar7 = (int)uVar6 % 0x20;
      if (iVar7 == 0) {
        iVar3 = _snprintf(param_1 + iVar5,(long)(param_2 - iVar5),"\n[%04x]",uVar6 & 0xffffffff);
        iVar5 = iVar5 + iVar3;
      }
      uVar4 = (ulong)(uint)bVar1;
      iVar3 = _snprintf(param_1 + iVar5,(long)(param_2 - iVar5)," %02x",uVar4);
      if (bVar1 < 0x20) {
        uVar4 = 0x2e;
      }
      iVar5 = iVar3 + iVar5;
      local_68[iVar7] = (char)uVar4;
      if (uVar2 + (int)uVar6 == -2) {
        iVar3 = (0x1f - iVar7) * 3;
        _memset(param_1 + iVar5,0x20,(long)iVar3);
        iVar5 = iVar3 + iVar5;
        _memset(local_68 + (long)iVar7 + 1,0x20,(long)(0x1f - iVar7));
LAB_1002da196:
        iVar7 = _snprintf(param_1 + iVar5,(long)(param_2 - iVar5)," -- <%s>",local_68);
        iVar5 = iVar5 + iVar7;
      }
      else if (iVar7 == 0x1f) goto LAB_1002da196;
      uVar6 = uVar6 + 1;
    } while (uVar2 + (int)uVar6 != -1);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

