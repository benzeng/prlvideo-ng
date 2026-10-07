
undefined8 FUN_1003ae000(long *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,*param_2);
  if ((int)uVar3 == 0) {
    if ((ulong)(uint)param_2[1] < 3) {
      uVar3 = 0;
    }
    else {
      puVar1 = param_2 + (uint)param_2[1];
      puVar7 = param_2 + 2;
      do {
        if ((*puVar7 & 0x7ff) == 0x35) {
          if (puVar1 < puVar7 + 1) {
            return 1;
          }
          uVar6 = (ulong)puVar7[1];
          if (uVar6 == 0) {
            return 1;
          }
          if (puVar1 < puVar7 + uVar6) {
            return 1;
          }
          uVar3 = (**(code **)(*param_1 + 0x28))(param_1,puVar7);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          puVar7 = puVar7 + puVar7[1];
        }
        else {
          uVar5 = *puVar7 >> 0x18 & 0x7f;
          if (uVar5 == 0) {
            return 1;
          }
          puVar2 = puVar7 + uVar5;
          if (puVar1 < puVar2) {
            return 1;
          }
          lVar4 = FUN_1003a7de0();
          if ((*(byte *)(lVar4 + 0x1d) & 2) == 0) {
            uVar3 = (**(code **)(*param_1 + 0x20))();
          }
          else {
            uVar3 = (**(code **)(*param_1 + 0x18))(param_1,puVar7,puVar2);
          }
          puVar7 = puVar2;
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      } while (puVar7 < puVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

