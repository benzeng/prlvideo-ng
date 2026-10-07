
undefined8 FUN_1003e14a0(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1[0xb] + 4) & 3;
  if (bVar2 == 3) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    lVar4 = param_1[0xc];
    uVar1 = (undefined4)param_1[0xd];
  }
  else {
    if (bVar2 != 2) {
      if ((*(byte *)(param_1[0xb] + 4) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x12) = 0;
      }
      goto LAB_1003e1527;
    }
    lVar4 = param_1[0xc];
    if (*(int *)((long)param_1 + 0x8c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e14e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x268))(param_1,0x25302);
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    uVar1 = (undefined4)param_1[0xd];
  }
  ___bzero(lVar4,uVar1);
LAB_1003e1527:
  (**(code **)(*param_1 + 0x260))(param_1);
  return 0;
}

