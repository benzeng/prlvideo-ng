
undefined8 FUN_1008d3360(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = FUN_10089b2a0(*param_1,0);
  if (iVar2 != 0) {
    uVar4 = param_1[1];
    uVar3 = FUN_1008b6ee0(param_2);
    iVar2 = FUN_1008a11f0(uVar4,uVar3);
    if (iVar2 != 0) {
      FUN_1008afd70(*(undefined8 *)(param_1[1] + 8));
      uVar4 = FUN_1008b7120(param_2);
      lVar5 = FUN_1008afc30(uVar4);
      *(long *)(param_1[1] + 8) = lVar5;
      if (lVar5 != 0) {
        lVar5 = FUN_1008b7420(param_2);
        if (lVar5 == 0) {
          FUN_100887ce0(0x21,0x82,0x96,"pk7_lib.c",0x217);
        }
        else {
          if ((*(long *)(lVar5 + 0x10) == 0) ||
             (pcVar1 = *(code **)(*(long *)(lVar5 + 0x10) + 0xa8), pcVar1 == (code *)0x0)) {
            uVar4 = 0x96;
            uVar3 = 0x217;
          }
          else {
            iVar2 = (*pcVar1)(lVar5,2,0,param_1);
            if (iVar2 == -2) {
              uVar4 = 0x96;
              uVar3 = 0x21e;
            }
            else {
              if (0 < iVar2) {
                FUN_1008924e0(lVar5);
                FUN_10081d580(param_2 + 0x1c,1,3,"pk7_lib.c",0x229);
                param_1[4] = param_2;
                return 1;
              }
              uVar4 = 0x95;
              uVar3 = 0x223;
            }
          }
          FUN_100887ce0(0x21,0x82,uVar4,"pk7_lib.c",uVar3);
          FUN_1008924e0(lVar5);
        }
      }
    }
  }
  return 0;
}

