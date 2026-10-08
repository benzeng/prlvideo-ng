
ulong FUN_100cbf440(long param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 1) {
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_100cbeb90(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20)), iVar2 == 0))
    {
      return 0;
    }
    param_4 = 0;
    lVar4 = 0;
    lVar3 = 0;
    uVar5 = 0;
  }
  else if (param_2 == 0xc) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar4 = 0;
    lVar3 = param_4;
    param_4 = 0;
  }
  else {
    if (param_2 != 6) {
      return 0xfffffffe;
    }
    if (param_3 < 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    lVar4 = (long)param_3;
    lVar3 = 0;
    uVar5 = 0;
  }
  iVar2 = FUN_100cbec50(uVar1,param_4,lVar4,lVar3,uVar5);
  return (ulong)(iVar2 != 0);
}

