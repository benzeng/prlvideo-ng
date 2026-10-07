
int FUN_1000b1d10(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_28;
  uint local_1c;
  
  local_1c = 0;
  cVar2 = FUN_1000a0730();
  if (cVar2 == '\0') {
    FUN_1008e3970("","vm",0,"Guest shutdown not possible no tools installed");
    iVar3 = -0x7ffffbdd;
  }
  else {
    iVar3 = FUN_1000a1ce0(param_1,&local_1c);
    if ((iVar3 == 0) || ((local_1c & 1) == 0)) {
      FUN_1008e3970("","vm",0,"Shutdown capability is not unavailable");
      iVar3 = -0x7ffffc90;
    }
    else {
      FUN_1008e3970("","vm",0,"Shutdown VM by guest tools");
      plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_28 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_FUN_100bef0d0;
        local_28 = plVar4;
      }
      iVar3 = FUN_1000a05b0(param_1,0,&local_28);
      if (local_28 != (long *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        lVar1 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
      if (iVar3 < 0) {
        uVar5 = FUN_1007dd120(iVar3);
        FUN_1008e3970("","vm",0,"Could not shutdown Vm gracefuly: %s",uVar5);
      }
    }
  }
  return iVar3;
}

