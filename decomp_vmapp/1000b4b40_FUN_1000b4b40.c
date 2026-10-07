
bool FUN_1000b4b40(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (plVar1 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x2e0))(plVar1);
        *param_2 = uVar2;
        bVar3 = 0x200 < uVar2;
      }
    }
  }
  return bVar3;
}

