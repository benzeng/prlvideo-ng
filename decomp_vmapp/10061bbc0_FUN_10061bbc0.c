
int FUN_10061bbc0(byte *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  char local_78 [64];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar7 = 0;
  local_38 = lVar10;
  if ((uVar8 != 0) && (uVar7 = uVar8, *(int *)(param_1 + 0x14) != param_3)) {
    if (DAT_1011b55f8 < 1) {
LAB_10061bc82:
      local_78[0] = '\0';
      uVar6 = 0;
      pbVar9 = param_1;
      do {
        _sprintf(local_78 + uVar6,"%02x ",(ulong)*pbVar9);
        uVar6 = (ulong)((int)uVar6 + 3);
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      uVar5 = FUN_10061bb40(param_3);
      uVar4 = FUN_10061bb40(*(undefined4 *)(param_1 + 0x14));
      FUN_1008e3970("","VmKeyboard",1,
                    "scancode %02x event %s, original collection for %s, reset state",param_2,uVar5,
                    uVar4);
      uVar8 = *(uint *)(param_1 + 0x10);
      local_78[0] = '\0';
      if (uVar8 != 0) goto LAB_10061bc82;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmKeyboard",1,"%s: %s","scancodes dropped",local_78);
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uVar7 = 0;
  }
  *(int *)(param_1 + 0x14) = param_3;
  *(uint *)(param_1 + 0x10) = uVar7 + 1;
  param_1[uVar7] = (byte)param_2;
  iVar1 = FUN_10061ba70(param_1,*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmKeyboard",1,"scancode sequence wrong, reset state");
    }
    iVar1 = *(int *)(param_1 + 0x10);
    local_78[0] = '\0';
    if (iVar1 != 0) {
      uVar6 = 0;
      pbVar9 = param_1;
      do {
        _sprintf(local_78 + uVar6,"%02x ",(ulong)*pbVar9);
        uVar6 = (ulong)((int)uVar6 + 3);
        pbVar9 = pbVar9 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmKeyboard",1,"%s: %s","scancodes dropped",local_78);
    }
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = (byte)param_2;
    iVar1 = FUN_10061ba70(param_1,1);
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar1 == 0) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","VmKeyboard",1,"scancode sequence wrong, reset state");
      }
      iVar1 = *(int *)(param_1 + 0x10);
      local_78[0] = '\0';
      if (iVar1 != 0) {
        uVar6 = 0;
        pbVar9 = param_1;
        do {
          _sprintf(local_78 + uVar6,"%02x ",(ulong)*pbVar9);
          uVar6 = (ulong)((int)uVar6 + 3);
          pbVar9 = pbVar9 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","VmKeyboard",1,"%s: %s","scancodes dropped",local_78);
      }
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      iVar3 = 0;
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_10061bf0d;
    }
  }
  uVar5 = FUN_10061ba20(iVar1);
  iVar2 = FUN_10061bad0(uVar5);
  iVar3 = 0;
  if (iVar2 == *(int *)(param_1 + 0x10)) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iVar3 = iVar1;
  }
LAB_10061bf0d:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

