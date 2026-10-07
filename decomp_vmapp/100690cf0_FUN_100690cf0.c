
int FUN_100690cf0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(long *)(*param_1 + -0xc0);
  plVar1 = (long *)((long)param_1 + lVar2);
  (**(code **)(*(long *)((long)param_1 + lVar2) + 0x100))(plVar1);
  iVar4 = FUN_100698f70(plVar1,param_2);
  if (iVar4 < 0) {
    (**(code **)(*plVar1 + 0xf0))(plVar1);
  }
  else {
    plVar3 = *(long **)(lVar2 + 0x20 + (long)param_1);
    if ((*(uint *)(plVar3 + 0x10) & 1) != 0) {
      *(uint *)(plVar3 + 0x10) = *(uint *)(plVar3 + 0x10) & 0xfffffffe;
      iVar5 = (**(code **)(*plVar3 + 0x20))();
      if (iVar5 < 0) {
        FUN_1008e3970("","dimg",0,"SaveHasData() write failed. 0x%X",iVar5);
      }
    }
  }
  (**(code **)(*plVar1 + 0x108))(plVar1);
  return iVar4;
}

