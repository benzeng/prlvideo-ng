
long * FUN_1005455e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_RDX;
  long *plVar4;
  
  plVar2 = operator_new(0xe0,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar2 == (long *)0x0) {
LAB_100545657:
    plVar2 = operator_new(0x70,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar4 = (long *)0x0;
    if (plVar2 == (long *)0x0) goto LAB_1005456bb;
    FUN_100546a30(plVar2,param_1,param_2,param_3,0,0);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,(char)param_4,extraout_RDX,param_4);
    if ((1 < iVar1 - 2U) && (plVar4 = plVar2, iVar1 == 0)) goto LAB_1005456bb;
    lVar3 = *plVar2;
  }
  else {
    FUN_100548d70(plVar2,param_1,param_2,param_3,0,0);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,param_4 & 0xff);
    if (1 < iVar1 - 2U) {
      plVar4 = plVar2;
      if (iVar1 == 0) goto LAB_1005456bb;
      (**(code **)(*plVar2 + 8))(plVar2);
      goto LAB_100545657;
    }
    lVar3 = *plVar2;
  }
  (**(code **)(lVar3 + 8))(plVar2);
  plVar4 = (long *)0x0;
LAB_1005456bb:
  FUN_100545360("attach_existing",param_1,param_2,param_3,plVar4);
  return plVar4;
}

