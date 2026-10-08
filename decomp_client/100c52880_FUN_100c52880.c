
undefined8 FUN_100c52880(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long local_30;
  
  local_30 = 0;
  piVar3 = (int *)FUN_100c8b280();
  if (piVar3 == (int *)0x0) {
    FUN_100c62ee0(5,0x6f,0x41,"dh_ameth.c",0xf2);
  }
  else {
    iVar1 = FUN_100c51300(*(undefined8 *)(param_2 + 0x20),piVar3 + 2);
    *piVar3 = iVar1;
    if (iVar1 < 1) {
      FUN_100c62ee0(5,0x6f,0x41,"dh_ameth.c",0xf8);
    }
    else {
      piVar3[1] = 0x10;
      lVar4 = FUN_100c76a10(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28),0);
      if (lVar4 == 0) {
        FUN_100c62ee0(5,0x6f,0x6a,"dh_ameth.c",0x101);
      }
      else {
        uVar2 = FUN_100c83760(lVar4,&local_30);
        FUN_100c8b3e0(lVar4);
        uVar5 = FUN_100bf6fe0(0x1c);
        iVar1 = FUN_100c8d1d0(param_1,uVar5,0,0x10,piVar3,local_30,uVar2);
        if (iVar1 != 0) {
          return 1;
        }
        if (local_30 != 0) {
          FUN_100bf3910();
        }
      }
    }
    FUN_100c8b2f0(piVar3);
  }
  return 0;
}

