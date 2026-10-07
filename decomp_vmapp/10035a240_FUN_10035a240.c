
void FUN_10035a240(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  uint3 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *local_38;
  
  FUN_1002adb30(*param_1,param_1[1]);
  puVar7 = (undefined4 *)0x0;
  puVar5 = param_3;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      FUN_10035a4a0(param_1,puVar5,1);
      uVar6 = (int)puVar7 + 1;
      puVar7 = (undefined4 *)(ulong)uVar6;
      puVar5 = puVar5 + 5;
    } while (uVar6 < *(uint *)(param_2 + 0x18));
    uVar6 = 0;
    puVar7 = (undefined4 *)0x0;
    if (*(uint *)(param_2 + 0x18) != 0) {
      lVar4 = 0;
      puVar7 = (undefined4 *)0x0;
      puVar5 = (undefined4 *)0x0;
      do {
        puVar3 = operator_new(0x20);
        *puVar3 = *param_3;
        puVar3[1] = uVar6;
        *(long *)(puVar3 + 2) = param_2;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        *(undefined4 *)(*(long *)(param_2 + 0x28) + lVar4) = param_3[4];
        local_38 = puVar3;
        FUN_10032d9d0(param_2,uVar6,param_3[1]);
        FUN_10035b3c0(param_1 + 0x100b,*puVar3,&local_38);
        puVar2 = puVar3;
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar5 + 4);
          *(undefined4 **)(puVar3 + 6) = puVar5;
          *(undefined4 **)(puVar5 + 4) = puVar3;
          puVar2 = puVar7;
          if (*(long *)(puVar3 + 4) != 0) {
            *(undefined4 **)(*(long *)(puVar3 + 4) + 0x18) = puVar3;
          }
        }
        puVar7 = puVar2;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0xc;
        param_3 = param_3 + 5;
        puVar5 = puVar3;
      } while (uVar6 < *(uint *)(param_2 + 0x18));
    }
  }
  if ((*(int *)(param_2 + 0x24) == 1) || (uVar1 = *(uint3 *)(param_2 + 0xb0), (uVar1 & 0x8000) != 0)
     ) {
    if (*(long *)(param_2 + 0x58) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010035a404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],param_2);
      return;
    }
  }
  else {
    uVar6 = *(uint *)(param_2 + 8);
    if (((ulong)uVar6 != 0x76) && (0x15 < (ulong)uVar6 - 0x78)) {
      if (uVar6 == 0x1b) {
        if ((uVar1 & 1) == 0) {
          return;
        }
      }
      else {
        if (0x8d < uVar6) {
          return;
        }
        if ((uVar1 & 1) == 0) {
          if (puVar7 == (undefined4 *)0x0) {
            return;
          }
          uVar6 = 0;
          do {
            if (((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) <= (ulong)uVar6
                ) || (*(long *)(*(long *)(param_2 + 0x40) + (ulong)uVar6 * 8) == 0)) {
              FUN_10035e3b0(param_1[5],param_2,*(undefined4 *)(param_2 + 8));
            }
            uVar6 = uVar6 + 1;
            puVar7 = *(undefined4 **)(puVar7 + 4);
          } while (puVar7 != (undefined4 *)0x0);
          return;
        }
      }
      if ((int)((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) >> 3) == 0) {
        FUN_10035e3b0(param_1[5],param_2);
        return;
      }
    }
  }
  return;
}

