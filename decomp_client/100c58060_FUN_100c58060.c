
ulong FUN_100c58060(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  lVar5 = uVar1 - param_2;
  if (uVar1 < param_2) {
    if (param_1[2] < param_2) {
      if (param_2 < 0x5ffffffd) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2 + 3;
        uVar1 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2;
        if (param_1[1] == 0) {
          uVar3 = FUN_100bf3540(uVar1 & 0xfffffffc,"buffer.c",0x9b);
        }
        else {
          uVar3 = FUN_100bf37b0(param_1[1],param_1[2],uVar1 & 0xfffffffc,"buffer.c",0x9d);
        }
        if (uVar3 != 0) {
          param_1[1] = uVar3;
          param_1[2] = uVar1 & 0xfffffffffffffffc;
          lVar4 = uVar3 + *param_1;
          lVar5 = param_2 - *param_1;
          goto LAB_100c5812e;
        }
        uVar6 = 0x9f;
      }
      else {
        uVar6 = 0x96;
      }
      FUN_100c62ee0(7,0x69,0x41,"buffer.c",uVar6);
      param_2 = 0;
      goto LAB_100c5815b;
    }
    lVar5 = param_2 - uVar1;
    lVar4 = uVar1 + param_1[1];
  }
  else {
    lVar4 = param_1[1] + param_2;
  }
LAB_100c5812e:
  ___bzero(lVar4,lVar5);
  *param_1 = param_2;
LAB_100c5815b:
  return param_2 & 0xffffffff;
}

