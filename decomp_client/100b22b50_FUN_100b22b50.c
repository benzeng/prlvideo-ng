
undefined8 FUN_100b22b50(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  (**(code **)(*param_1 + 0x100))();
  uVar5 = 0;
  if ((param_1[0x301a] != -1) && ((char)param_1[0x301b] != '\0')) {
    plVar1 = *(long **)(*(long *)(*(long *)param_1[0x3019] + -0x18) + 8 + param_1[0x3019]);
    uVar5 = 0;
    cVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1[0x3014],0x1000,0);
    if (cVar3 == '\0') {
      lVar2 = param_1[0x301a];
      uVar4 = FUN_100db96d0();
      FUN_100df99c0("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",lVar2,uVar4);
      uVar5 = 0x80021027;
    }
    else {
      *(undefined1 *)(param_1 + 0x301b) = 0;
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1);
  return uVar5;
}

