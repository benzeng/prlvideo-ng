
ulong FUN_100c57f60(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    if (param_1[2] < param_2) {
      if (param_2 < 0x5ffffffd) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2 + 3;
        uVar1 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2;
        if (param_1[1] == 0) {
          uVar3 = FUN_100bf3540(uVar1 & 0xfffffffc,"buffer.c",0x76);
        }
        else {
          uVar3 = FUN_100bf36a0(param_1[1],uVar1 & 0xfffffffc,"buffer.c",0x78);
        }
        if (uVar3 != 0) {
          param_1[1] = uVar3;
          param_1[2] = uVar1 & 0xfffffffffffffffc;
          uVar1 = *param_1;
          lVar4 = uVar3 + uVar1;
          goto LAB_100c58022;
        }
        uVar5 = 0x7a;
      }
      else {
        uVar5 = 0x71;
      }
      FUN_100c62ee0(7,100,0x41,"buffer.c",uVar5);
      param_2 = 0;
      goto LAB_100c5804f;
    }
    lVar4 = uVar1 + param_1[1];
LAB_100c58022:
    ___bzero(lVar4,param_2 - uVar1);
  }
  *param_1 = param_2;
LAB_100c5804f:
  return param_2 & 0xffffffff;
}

