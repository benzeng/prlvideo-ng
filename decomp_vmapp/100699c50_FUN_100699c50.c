
undefined4 FUN_100699c50(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = (**(code **)(*param_1 + 0x60))();
  if ((param_1[0x301a] != -1) && ((char)param_1[0x301b] != '\0')) {
    plVar1 = *(long **)(*(long *)(*(long *)param_1[0x3019] + -0x18) + 8 + param_1[0x3019]);
    cVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1[0x3014],0x1000,0);
    if (cVar3 == '\0') {
      lVar2 = param_1[0x301a];
      uVar5 = FUN_100768f60();
      FUN_1008e3970("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",lVar2,uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 0x301b) = 0;
    }
  }
  return uVar4;
}

