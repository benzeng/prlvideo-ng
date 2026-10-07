
undefined4 FUN_10059af40(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 local_44;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_44 = 0x80000002;
  local_30 = lVar1;
  plVar3 = (long *)FUN_10059ac80(param_1,8,&local_44);
  if (plVar3 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error opening disk object to remove. Error 0x%x",local_44);
  }
  else {
    pcVar2 = *(code **)(*plVar3 + 0x38);
    FUN_1007d6870(local_40);
    (*pcVar2)(plVar3,local_40,0,0,0);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (lVar1 == local_30) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

