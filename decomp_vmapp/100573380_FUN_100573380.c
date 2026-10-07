
undefined4 FUN_100573380(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((char)param_1[0x23b] == '\0') {
    plVar3 = (long *)param_1[0x239];
    if (plVar3 == (long *)0x0) {
      FUN_1008e3970("","vdisk",0,"Try to rollback at uninitialized manager");
      uVar1 = 0x80000007;
    }
    else {
      if (param_1[0x25c] != 0) {
        FUN_1005f4c10(param_1[0x25c],param_1);
        param_1[0x25c] = 0;
        plVar3 = (long *)param_1[0x239];
      }
      lVar2 = ___dynamic_cast(plVar3,&PTR_vtable_10111de80,&PTR_vtable_100bc7fe0,0);
      if (lVar2 != 0) {
        (**(code **)(*param_1 + 0x368))(param_1);
        plVar3 = (long *)param_1[0x239];
      }
      uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_100573280(param_1);
      QMutex::lock();
      (*(code *)**(undefined8 **)param_1[0x239])();
      param_1[0x239] = 0;
      QMutex::unlock();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x23b) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

