
undefined8 FUN_100572510(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  cVar2 = (**(code **)(*param_1 + 0x2a8))();
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x23b) = 1;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x188))(local_48,param_1);
      iVar3 = FUN_1007ea6f0(param_2,local_48);
      if (iVar3 != 0) {
        FUN_1008e3970("","vdisk",0,"Can\'t process snapshot other that unfinished");
        uVar4 = 0x80021062;
        goto LAB_1005725fa;
      }
    }
    iVar3 = (**(code **)(*param_1 + 400))(param_1);
    if (iVar3 != 5) {
      for (puVar5 = (undefined8 *)param_1[0x225]; puVar5 != (undefined8 *)param_1[0x226];
          puVar5 = puVar5 + 1) {
        uVar4 = FUN_100590e30(*puVar5,param_2,param_3);
        if (((int)uVar4 != -0x7ffe6fec) && ((int)uVar4 != 0)) goto LAB_1005725fa;
      }
    }
  }
  uVar4 = 0;
LAB_1005725fa:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

