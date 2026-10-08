
undefined8 FUN_100c4e5b0(undefined8 param_1,undefined8 param_2)

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
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100c7af60(0,&local_38,&local_40,local_48);
  if ((local_38 == -1) || (local_38 == 5)) {
    lVar2 = FUN_100c4d390();
    if (lVar2 == 0) {
      FUN_100c62ee0(10,0x75,0x41,"dsa_ameth.c",0x62);
      return 0;
    }
  }
  else {
    if (local_38 != 0x10) {
      FUN_100c62ee0(10,0x75,0x69,"dsa_ameth.c",0x66);
      return 0;
    }
    local_30 = *(undefined8 *)(local_40 + 2);
    lVar2 = FUN_100c4d900(0,&local_30,(long)*local_40);
    if (lVar2 == 0) {
      FUN_100c62ee0(10,0x75,0x68,"dsa_ameth.c",0x5c);
      return 0;
    }
  }
  lVar3 = FUN_100c83740(0,local_28,(long)local_34);
  if (lVar3 == 0) {
    FUN_100c62ee0(10,0x75,0x68,"dsa_ameth.c",0x6b);
  }
  else {
    lVar4 = FUN_100c76b30(lVar3,0);
    *(long *)(lVar2 + 0x30) = lVar4;
    if (lVar4 != 0) {
      FUN_100c837a0(lVar3);
      FUN_100c6d510(param_1,0x74,lVar2);
      return 1;
    }
    FUN_100c62ee0(10,0x75,0x6c,"dsa_ameth.c",0x70);
    FUN_100c837a0(lVar3);
  }
  FUN_100c4d5f0(lVar2);
  return 0;
}

