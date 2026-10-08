
undefined8 FUN_100c52560(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long local_30;
  
  local_30 = 0;
  lVar3 = *(long *)(param_2 + 0x20);
  piVar2 = (int *)FUN_100c8b280();
  if (piVar2 == (int *)0x0) {
    FUN_100c62ee0(5,0x6d,0x41,"dh_ameth.c",0x8b);
  }
  else {
    iVar1 = FUN_100c51300(lVar3,piVar2 + 2);
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      FUN_100c62ee0(5,0x6d,0x41,"dh_ameth.c",0x90);
    }
    else {
      lVar3 = FUN_100c76a10(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 != 0) {
        iVar1 = FUN_100c83760(lVar3,&local_30);
        FUN_100c837a0(lVar3);
        if (iVar1 < 1) {
          FUN_100c62ee0(5,0x6d,0x41,"dh_ameth.c",0x9e);
        }
        else {
          uVar4 = FUN_100bf6fe0(0x1c);
          iVar1 = FUN_100c7b960(param_1,uVar4,0x10,piVar2,local_30,iVar1);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  if (local_30 != 0) {
    FUN_100bf3910();
  }
  if (piVar2 != (int *)0x0) {
    FUN_100c8b2f0(piVar2);
  }
  return 0;
}

