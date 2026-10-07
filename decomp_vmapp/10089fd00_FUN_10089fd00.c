
long FUN_10089fd00(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      lVar4 = 0;
      if (param_1[1] != 0) {
        lVar4 = FUN_100891f40();
        if (lVar4 == 0) {
          FUN_100887ce0(0xb,0x77,0x41,"x_pubkey.c",0x8f);
        }
        else {
          uVar2 = FUN_100821ab0(*(undefined8 *)*param_1);
          iVar3 = FUN_100891fd0(lVar4,uVar2);
          if (iVar3 == 0) {
            uVar5 = 0x6f;
            uVar6 = 0x94;
          }
          else {
            pcVar1 = *(code **)(*(long *)(lVar4 + 0x10) + 0x20);
            if (pcVar1 == (code *)0x0) {
              uVar5 = 0x7c;
              uVar6 = 0x9e;
            }
            else {
              iVar3 = (*pcVar1)(lVar4,param_1);
              if (iVar3 != 0) {
                FUN_10081d010(9,10,"x_pubkey.c",0xa3);
                if (param_1[2] == 0) {
                  param_1[2] = lVar4;
                  FUN_10081d010(10,10,"x_pubkey.c",0xaa);
                }
                else {
                  FUN_10081d010(10,10,"x_pubkey.c",0xa5);
                  FUN_1008924e0(lVar4);
                  lVar4 = param_1[2];
                }
                FUN_10081d580(lVar4 + 8,1,10,"x_pubkey.c",0xac);
                return lVar4;
              }
              uVar5 = 0x7d;
              uVar6 = 0x9a;
            }
          }
          FUN_100887ce0(0xb,0x77,uVar5,"x_pubkey.c",uVar6);
          FUN_1008924e0(lVar4);
        }
        lVar4 = 0;
      }
    }
    else {
      FUN_10081d580(param_1[2] + 8,1,10,"x_pubkey.c",0x87);
      lVar4 = param_1[2];
    }
  }
  return lVar4;
}

