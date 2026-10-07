
undefined1  [16] FUN_100431690(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar6 = 0xffffffffffffffff;
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x30)) &&
     (uVar5 = 0, *(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x34))) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x20);
    uVar5 = 0;
    if (iVar1 <= iVar2) {
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar4 = *(int *)(param_1 + 0x24);
      uVar5 = 0;
      if (iVar3 <= iVar4) {
        if (param_2 == 0) {
          uVar7 = (iVar4 + 1) - iVar3;
        }
        else {
          param_2 = param_2 / (uint)((iVar2 + 1) - iVar1);
          uVar7 = (iVar4 + 1) - iVar3;
          if (((int)param_2 <= (int)uVar7) && (uVar7 = 1, 0 < (int)param_2)) {
            uVar7 = param_2;
          }
        }
        *(int *)(param_1 + 0x18) = iVar1;
        *(uint *)(param_1 + 0x1c) = uVar7 + iVar3;
        *(bool *)param_3 = iVar4 < (int)(uVar7 + iVar3);
        uVar5 = CONCAT44(iVar3,iVar1);
        uVar6 = CONCAT44(iVar3 + -1 + uVar7,iVar2);
      }
    }
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}

