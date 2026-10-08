
undefined8 FUN_100c523f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_48;
  int *local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 local_28 [8];
  
  iVar1 = FUN_100c7b9d0(0,local_28,&local_34,&local_48,param_2);
  if (iVar1 != 0) {
    FUN_100c7af60(0,&local_38,&local_40,local_48);
    if (local_38 == 0x10) {
      local_30 = *(undefined8 *)(local_40 + 2);
      lVar2 = FUN_100c512e0(0,&local_30,(long)*local_40);
      if (lVar2 == 0) {
        FUN_100c62ee0(5,0x6c,0x68,"dh_ameth.c",0x62);
      }
      else {
        lVar3 = FUN_100c83740(0,local_28,(long)local_34);
        if (lVar3 == 0) {
          FUN_100c62ee0(5,0x6c,0x68,"dh_ameth.c",0x67);
        }
        else {
          lVar4 = FUN_100c76b30(lVar3,0);
          *(long *)(lVar2 + 0x20) = lVar4;
          if (lVar4 != 0) {
            FUN_100c837a0(lVar3);
            FUN_100c6d510(param_1,0x1c,lVar2);
            return 1;
          }
          FUN_100c62ee0(5,0x6c,0x6d,"dh_ameth.c",0x6d);
          FUN_100c837a0(lVar3);
        }
        FUN_100c51d00(lVar2);
      }
    }
    else {
      FUN_100c62ee0(5,0x6c,0x69,"dh_ameth.c",0x59);
    }
  }
  return 0;
}

