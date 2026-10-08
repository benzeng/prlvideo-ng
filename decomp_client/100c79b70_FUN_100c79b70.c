
undefined8 FUN_100c79b70(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  ulong in_RAX;
  undefined8 uVar6;
  ulong local_38;
  
  if (param_2 != 0) {
    if (param_3 == 0x1002) {
      do {
        local_38 = (ulong)CONCAT11(*param_1,param_1[1]);
        if ((param_4 != (code *)0x0) && (uVar6 = (*param_4)(local_38,param_5), (int)uVar6 < 1)) {
          return uVar6;
        }
        param_2 = param_2 + -2;
        param_1 = param_1 + 2;
      } while (param_2 != 0);
    }
    else {
      local_38 = in_RAX;
      if (param_3 == 0x1001) {
        do {
          local_38 = (ulong)*param_1;
          if ((param_4 != (code *)0x0) && (uVar6 = (*param_4)(local_38,param_5), (int)uVar6 < 1)) {
            return uVar6;
          }
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        do {
          if (param_3 == 0x1004) {
            bVar4 = *param_1;
            pbVar1 = param_1 + 1;
            pbVar2 = param_1 + 2;
            pbVar3 = param_1 + 3;
            param_1 = param_1 + 4;
            local_38 = (ulong)*pbVar3 |
                       (ulong)*pbVar2 << 8 | (ulong)*pbVar1 << 0x10 | (ulong)bVar4 << 0x18;
            param_2 = param_2 + -4;
          }
          else {
            iVar5 = FUN_100c78290(param_1,param_2,&local_38);
            if (iVar5 < 0) {
              return 0xffffffff;
            }
            param_2 = param_2 - iVar5;
            param_1 = param_1 + iVar5;
          }
          if ((param_4 != (code *)0x0) && (uVar6 = (*param_4)(local_38,param_5), (int)uVar6 < 1)) {
            return uVar6;
          }
        } while (param_2 != 0);
      }
    }
  }
  return 1;
}

