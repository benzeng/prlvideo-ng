
undefined8
FUN_1008465b0(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
             int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  
  uVar3 = 0xffffffff;
  if (0xf < param_5) {
    local_48 = *param_2;
    uStack_40 = param_2[1];
    (*(code *)param_1[3])(&local_48,&local_48,param_1[1]);
    uVar5 = param_5 - 0x10;
    if ((param_5 & 0xf) == 0) {
      uVar5 = param_5;
    }
    if (param_6 != 0) {
      uVar5 = param_5;
    }
    if (0xf < uVar5) {
      do {
        local_58 = local_48 ^ *param_3;
        uStack_50 = uStack_40 ^ param_3[1];
        (*(code *)param_1[2])(&local_58,&local_58,*param_1);
        uVar4 = local_48;
        local_58 = local_58 ^ local_48;
        *param_4 = local_58;
        uStack_50 = uStack_50 ^ uStack_40;
        param_4[1] = uStack_50;
        if (uVar5 == 0x10) {
          return 0;
        }
        uVar5 = uVar5 - 0x10;
        param_4 = param_4 + 2;
        param_3 = param_3 + 2;
        local_48 = (ulong)(uStack_40._4_4_ >> 0x1f & 0x87) ^ local_48 * 2;
        uStack_40 = uStack_40 << 1 | uVar4 >> 0x3f;
      } while (0xf < uVar5);
    }
    if (param_6 == 0) {
      uVar4 = (ulong)(uStack_40._4_4_ >> 0x1f & 0x87) ^ local_48 * 2;
      uVar6 = uStack_40 << 1 | local_48 >> 0x3f;
      local_58 = *param_3 ^ uVar4;
      uStack_50 = param_3[1] ^ uVar6;
      (*(code *)param_1[2])(&local_58,&local_58,*param_1);
      local_58 = uVar4 ^ local_58;
      uStack_50 = uVar6 ^ uStack_50;
      if (uVar5 != 0) {
        uVar2 = 0x10;
        uVar4 = 0;
        do {
          uVar1 = *(undefined1 *)((long)param_3 + (ulong)uVar2);
          *(undefined1 *)((long)param_4 + (ulong)uVar2) = *(undefined1 *)((long)&local_58 + uVar4);
          *(undefined1 *)((long)&local_58 + uVar4) = uVar1;
          uVar4 = (ulong)(uVar2 - 0xf);
          uVar2 = uVar2 + 1;
        } while (uVar4 < uVar5);
      }
      local_58 = local_58 ^ local_48;
      uStack_50 = uStack_50 ^ uStack_40;
      (*(code *)param_1[2])(&local_58,&local_58,*param_1);
      *param_4 = local_48 ^ local_58;
      param_4[1] = uStack_40 ^ uStack_50;
    }
    else {
      if (uVar5 != 0) {
        uVar2 = 1;
        uVar4 = 0;
        do {
          uVar1 = *(undefined1 *)((long)param_3 + uVar4);
          *(undefined1 *)((long)param_4 + uVar4) = *(undefined1 *)((long)&local_58 + uVar4);
          *(undefined1 *)((long)&local_58 + uVar4) = uVar1;
          uVar4 = (ulong)uVar2;
          uVar2 = uVar2 + 1;
        } while (uVar4 < uVar5);
      }
      local_58 = local_58 ^ local_48;
      uStack_50 = uStack_50 ^ uStack_40;
      (*(code *)param_1[2])(&local_58,&local_58,*param_1);
      param_4[-1] = uStack_50 ^ uStack_40;
      param_4[-2] = local_58 ^ local_48;
    }
    uVar3 = 0;
  }
  return uVar3;
}

