
undefined8 FUN_100c52740(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  int *local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  iVar1 = FUN_100c8d290(0,local_30,&local_3c,&local_50,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100c7af60(0,&local_40,&local_48,local_50);
  lVar5 = 0;
  if (local_40 == 0x10) {
    lVar2 = FUN_100c83740(0,local_30,(long)local_3c);
    lVar5 = 0;
    if (lVar2 != 0) {
      local_38 = *(undefined8 *)(local_48 + 2);
      lVar3 = FUN_100c512e0(0,&local_38,(long)*local_48);
      lVar5 = lVar2;
      if (lVar3 != 0) {
        lVar4 = FUN_100c76b30(lVar2,0);
        *(long *)(lVar3 + 0x28) = lVar4;
        if (lVar4 == 0) {
          FUN_100c62ee0(5,0x6e,0x6a,"dh_ameth.c",0xd3);
        }
        else {
          iVar1 = FUN_100c515f0(lVar3);
          if (iVar1 != 0) {
            FUN_100c6d510(param_1,0x1c,lVar3);
            FUN_100c8b3e0(lVar2);
            return 1;
          }
        }
        goto LAB_100c52837;
      }
    }
  }
  FUN_100c62ee0(5,0x6e,0x72,"dh_ameth.c",0xe1);
  lVar3 = 0;
LAB_100c52837:
  FUN_100c51d00(lVar3);
  FUN_100c8b3e0(lVar5);
  return 0;
}

