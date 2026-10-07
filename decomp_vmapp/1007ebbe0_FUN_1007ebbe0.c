
undefined8 FUN_1007ebbe0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_RAX;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  local_28 = in_RAX;
  uVar2 = FUN_10087e660();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1008b55c0(lVar3,param_1);
    if (iVar1 == 0) {
      FUN_10087d4e0(lVar3);
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_10087db60(lVar3,3,0,&local_28);
      FUN_1007ec3c0(param_2,local_28,lVar4 + local_28);
      FUN_10087d4e0(lVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

