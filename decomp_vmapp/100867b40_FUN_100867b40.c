
undefined8
FUN_100867b40(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint local_34;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (param_2 == 0) {
    iVar2 = FUN_100874c00(uVar5);
    uVar4 = (ulong)iVar2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    uVar4 = *param_3;
    iVar2 = FUN_100874c00(uVar5);
    if (uVar4 < (ulong)(long)iVar2) {
      FUN_100887ce0(0x10,0xda,100,"ec_pmeth.c",0x81);
      return 0;
    }
    lVar1 = *(long *)(lVar1 + 8);
    uVar3 = 0x40;
    if (lVar1 != 0) {
      uVar3 = FUN_1008946b0(lVar1);
    }
    uVar5 = FUN_100875de0(uVar3,param_4,param_5,param_2,&local_34,uVar5);
    if ((int)uVar5 < 1) {
      return uVar5;
    }
    uVar4 = (ulong)local_34;
  }
  *param_3 = uVar4;
  return 1;
}

